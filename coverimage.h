#ifndef COVERIMAGE
#define COVERIMAGE

#include <QLabel>
#include <QMovie>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QPixmap>

class QLabel;
class QLineEdit;
class QPushButton;

class CoverImage{


public slots:
    void getCoverImage(const Ui::MainWindow *ui); //获取封面图片
    void replyFinished(QNetworkReply *reply);

};


#endif // COVERIMAGE

