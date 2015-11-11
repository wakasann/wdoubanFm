/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *songer;
    QLabel *album;
    QLabel *musiccover;
    QSlider *progressbar;
    QLabel *remainingtime;
    QSlider *volumeSlider;
    QLabel *timeSplit;
    QLabel *totaltime;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(520, 245);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(520, 245));
        MainWindow->setMaximumSize(QSize(520, 245));
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(0.9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        songer = new QLabel(centralWidget);
        songer->setObjectName(QStringLiteral("songer"));
        songer->setGeometry(QRect(270, 10, 251, 21));
        album = new QLabel(centralWidget);
        album->setObjectName(QStringLiteral("album"));
        album->setGeometry(QRect(270, 40, 251, 21));
        album->setFont(font);
        musiccover = new QLabel(centralWidget);
        musiccover->setObjectName(QStringLiteral("musiccover"));
        musiccover->setGeometry(QRect(0, 0, 245, 245));
        musiccover->setCursor(QCursor(Qt::PointingHandCursor));
        progressbar = new QSlider(centralWidget);
        progressbar->setObjectName(QStringLiteral("progressbar"));
        progressbar->setEnabled(true);
        progressbar->setGeometry(QRect(270, 90, 241, 29));
        progressbar->setCursor(QCursor(Qt::BlankCursor));
        progressbar->setPageStep(10);
        progressbar->setOrientation(Qt::Horizontal);
        remainingtime = new QLabel(centralWidget);
        remainingtime->setObjectName(QStringLiteral("remainingtime"));
        remainingtime->setGeometry(QRect(420, 70, 41, 17));
        QFont font1;
        font1.setPointSize(11);
        remainingtime->setFont(font1);
        volumeSlider = new QSlider(centralWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setGeometry(QRect(450, 120, 51, 21));
        volumeSlider->setOrientation(Qt::Horizontal);
        timeSplit = new QLabel(centralWidget);
        timeSplit->setObjectName(QStringLiteral("timeSplit"));
        timeSplit->setGeometry(QRect(460, 70, 16, 17));
        timeSplit->setFont(font1);
        totaltime = new QLabel(centralWidget);
        totaltime->setObjectName(QStringLiteral("totaltime"));
        totaltime->setGeometry(QRect(470, 70, 41, 17));
        totaltime->setFont(font1);
        totaltime->setAutoFillBackground(false);
        totaltime->setTextFormat(Qt::PlainText);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\261\206\347\223\243FM \347\254\254\344\270\211\346\226\271\345\256\242\346\210\267\347\253\257", 0));
        songer->setText(QApplication::translate("MainWindow", "\343\202\261\343\203\204\343\203\241\343\202\244\343\202\267 ", 0));
        album->setText(QApplication::translate("MainWindow", "<\343\202\261\343\203\204\343\203\216\343\203\235\343\203\252\343\202\2717> 2011", 0));
        musiccover->setText(QString());
        remainingtime->setText(QApplication::translate("MainWindow", "00:00", 0));
        timeSplit->setText(QApplication::translate("MainWindow", "/", 0));
        totaltime->setText(QApplication::translate("MainWindow", "05:10", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
