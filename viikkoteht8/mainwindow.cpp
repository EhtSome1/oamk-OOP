#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    pQTimer = new QTimer(this);
    connect(pQTimer, SIGNAL(timeout()), SLOT(updateProgressBar()));

    connect(ui->LsecButton, SIGNAL(clicked(bool)), SLOT(selectTime()));
    connect(ui->RsecButton, SIGNAL(clicked(bool)), SLOT(selectTime()));

    connect(ui->startButton, SIGNAL(clicked(bool)), SLOT(startStop()));
    connect(ui->stopButton, SIGNAL(clicked(bool)), SLOT(startStop()));

    connect(ui->SwitchButton, SIGNAL(clicked(bool)), SLOT(changePlayer()));

    currentPlayer = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateProgressBar()
{
    //qDebug()<<"in updateProgressBar";
    if (currentPlayer == 1) {
        ui->LprogressBar->setValue(ui->LprogressBar->value() - 1);
        if(ui->LprogressBar->value() == 0) {
            setGameInfoText("Pelaaja 2 voitti!");
            pQTimer->stop();
        }
    }
    else if (currentPlayer == 2) {
        ui->RprogressBar->setValue(ui->RprogressBar->value() - 1);
        if(ui->RprogressBar->value() == 0) {
            setGameInfoText("Pelaaja 1 voitti!");
            pQTimer->stop();
        }
    }
}

void MainWindow::selectTime() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    if(button->text() == "120 sec") {
        ui->LprogressBar->setValue(100);
        ui->RprogressBar->setValue(100);
        gameTime = 120;
        player1Time = 120;
        player2Time = 120;
    }
    else if (button->text() == "5 min") {
        ui->LprogressBar->setValue(100);
        ui->RprogressBar->setValue(100);
        gameTime = 300;
        player1Time = 300;
        player2Time = 300;
    }

    setGameInfoText("Ready to play");
}

void MainWindow::startStop() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());

    if(button->objectName() == "startButton") {
        //qDebug()<<"start";
        pQTimer->start(gameTime*10);
        setGameInfoText("Game ongoing");
    }
    else if(button->objectName() == "stopButton") {
        pQTimer->stop();
    }
}

void MainWindow::setGameInfoText(QString s) {
    ui->label->setText(s);
}

void MainWindow::changePlayer()
{
    if (currentPlayer == 1) {currentPlayer = 2;}
    else if (currentPlayer == 2) {currentPlayer = 1;}
}

