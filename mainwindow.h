#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtMultimedia/QMediaPlayer>
class QLabel;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //显示网络图片
    void setNetworkPic(const QString &picUrl);

private slots:
    void on_progressbar_valueChanged(int value);

    void on_volumeSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;

   // QLabel  *musiccover; //music cover

};

#endif // MAINWINDOW_H
