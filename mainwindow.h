#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;

   // QLabel  *musiccover; //music cover

};

#endif // MAINWINDOW_H
