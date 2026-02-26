/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *LprogressBar;
    QProgressBar *RprogressBar;
    QPushButton *SwitchButton;
    QPushButton *LsecButton;
    QPushButton *RsecButton;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        LprogressBar = new QProgressBar(centralwidget);
        LprogressBar->setObjectName("LprogressBar");
        LprogressBar->setEnabled(true);
        LprogressBar->setGeometry(QRect(50, 40, 121, 31));
        LprogressBar->setValue(0);
        RprogressBar = new QProgressBar(centralwidget);
        RprogressBar->setObjectName("RprogressBar");
        RprogressBar->setEnabled(true);
        RprogressBar->setGeometry(QRect(620, 40, 121, 31));
        RprogressBar->setValue(0);
        SwitchButton = new QPushButton(centralwidget);
        SwitchButton->setObjectName("SwitchButton");
        SwitchButton->setGeometry(QRect(350, 100, 80, 24));
        LsecButton = new QPushButton(centralwidget);
        LsecButton->setObjectName("LsecButton");
        LsecButton->setGeometry(QRect(270, 300, 80, 24));
        RsecButton = new QPushButton(centralwidget);
        RsecButton->setObjectName("RsecButton");
        RsecButton->setGeometry(QRect(440, 300, 80, 24));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(180, 450, 80, 24));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(490, 450, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 220, 801, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SwitchButton->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        LsecButton->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        RsecButton->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select playtime and press start game!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
