#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "teht1.h"
#include "ui_teht1.h"
#include "teht2.h"
#include "ui_teht2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    teht1 *teht1Win = new teht1;
    teht2 *teht2Win = new teht2;

    //switch from menu to teht1
    connect(ui->teht1Button, SIGNAL(clicked(bool)), this, SLOT(hide()));
    connect(ui->teht1Button, SIGNAL(clicked(bool)), teht1Win, SLOT(show()));

    //switch from teht1 to menu
    connect(teht1Win->ui->menuButton, SIGNAL(clicked(bool)), teht1Win, SLOT(hide()));
    connect(teht1Win->ui->menuButton, SIGNAL(clicked(bool)), this, SLOT(show()));

    //swithch from menu to teht2
    connect(ui->teht2Button, SIGNAL(clicked(bool)), this, SLOT(hide()));
    connect(ui->teht2Button, SIGNAL(clicked(bool)), teht2Win, SLOT(show()));

    //switch from teht2 to menu
    connect(teht2Win->ui->menuButton, SIGNAL(clicked(bool)), teht2Win, SLOT(hide()));
    connect(teht2Win->ui->menuButton, SIGNAL(clicked(bool)), this, SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
