#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "coverimage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    coverImage.getCoverImage(ui);
}

MainWindow::~MainWindow()
{
    delete ui;
}
