#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QEventLoop>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QObject>
#include <QUrl>
#include <QLabel>
#include <QByteArray>
#include <QPixmap>
#include <QFont>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   QFont songerFont;
   songerFont.setPointSize(18);
  ui->songer->setFont(songerFont);
    MainWindow::setNetworkPic("http://img3.douban.com/img/fmadmin/chlBanner/27134.jpg");


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
