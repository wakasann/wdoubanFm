#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QEventLoop>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QObject>
#include<QtMultimedia/QMediaPlayer>
#include <QUrl>
#include <QLabel>
#include <QByteArray>
#include <QPixmap>
#include <QFont>
#include <QSlider>
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //qss
    QString qss;
    QFile qssFile(":/wdouban.qss");
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen()){
        qss = QLatin1String(qssFile.readAll());
        qApp->setStyleSheet(qss);
        qssFile.close();
    }

    //歌手Label的字体
   QFont songerFont;
   songerFont.setPointSize(18);
   ui->songer->setFont(songerFont);

   //设置封面
    MainWindow::setNetworkPic("http://img3.douban.com/img/fmadmin/chlBanner/27134.jpg");

    //play music
    player = new QMediaPlayer();
    //player->setMedia(QUrl("http://mr7.doubanio.com/8d460c03741b3334ac2d622ee4855c95/1/fm/song/p1816175_128k.mp4"));
    //player->setMedia(QUrl("http://mr7.doubanio.com/dd8b346fe9e5970fc46c21c078548bcc/1/fm/song/p622083_128k.mp4"));
    player->setMedia(QUrl("http://mr7.doubanio.com/0a382bb7423140c933a59a6432fed584/0/fm/song/p334791_128k.mp4"));
    player->play();

//    QAxObject *speech= new QAxObject();
//    speech->setControl("SAPI.SpVoice");
//    speech->dynamicCall("Speak(QString,uint)","good",1);//这里换成中文也可以

    //player progress bar
    //设置滑动条控件的最小值
     ui->progressbar->setMinimum(0);
      //设置滑动条控件的最大值
     ui->progressbar->setMaximum(100);

     //volume  progress bar
     ui->volumeSlider->setMinimum(0);
     ui->volumeSlider->setMaximum(100);

//   qint64 duration =  player->duration();
//   ui->progressbar->setMaximum(duration);

    //debug
    //ui->debug->setText(one);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setNetworkPic(const QString &picUrl)
{
    QUrl url(picUrl);
    QNetworkAccessManager manager;
    QEventLoop loop;

     // qDebug() << "Reading picture form " << url;
    QNetworkReply *reply = manager.get(QNetworkRequest(url));
     //请求结束并下载完成后，退出子事件循环
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    //开启子事件循环
     loop.exec();

     QByteArray jpegData = reply->readAll();
     QPixmap pixmap;
     pixmap.loadFromData(jpegData);
     ui->musiccover->setPixmap(pixmap);

      //setPixmap(pixmap); // 你在QLabel显示图片
}

void MainWindow::on_progressbar_valueChanged(int value)
{
    QString str = QString("%1").arg(value);
    ui->remainingtime->setText(str);
}

/**
  *  set Media Player volume
 * @brief MainWindow::on_volumeSlider_valueChanged
 * @param value
 */
void MainWindow::on_volumeSlider_valueChanged(int value)
{
    player->setVolume(value);
}
