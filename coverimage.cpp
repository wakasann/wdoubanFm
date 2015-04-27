#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "coverimage.h"

//获取音乐的封面图片
void CoverImage::getCoverImage(const Ui::MainWindow *ui){

    QPixmap currentPicture = new QPixmap;

    //获取网络图片
    QNetworkAccessManager  *manager;
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(replyFinished(QNetworkReply*)));
    manager->get(QNetworkRequest(QUrl("http://www.oschina.net/img/logo_s2.png")));

    ui->musicfengmian->setAutoFillBackground(true);
    QPalette palette= ui->musicfengmian->palette();

    palette.setBrush(QPalette::Window,QPixmap(tr("http://img3.douban.com/lpic/s2654083.jpg")));
    ui->musicfengmian->setPalette(palette);

}

void CoverImage::replyFinished(QNetworkReply *reply)
{
    if(reply->error() == QNetworkReply::NoError)
    {
        //获取字节流构造 QPixmap 对象
        currentPicture->loadFromData(reply->readAll());
        QDateTime now;
        QString filename = now.currentDateTime().toString("yyMMddhhmmss.jpg");
        currentPicture->save(filename);//保存图片
        //qDebug()<<"picture saved as "<<filename;
        currentFileName = filename;

        //可以在onpaint中 用QPixmap 显示currentPicture，则这种方法则不需要保存

        //显示图片，
        QMovie *move = new QMovie(currentFileName);
        ImageLabel->setMovie(move);
        move->start();
    }
}
