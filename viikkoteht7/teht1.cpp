#include "teht1.h"
#include "ui_teht1.h"

teht1::teht1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::teht1)
{
    ui->setupUi(this);
    connect(ui->countButton, SIGNAL(clicked(bool)), SLOT(add()));
    connect(ui->resetButton, SIGNAL(clicked(bool)), SLOT(reset()));
}

teht1::~teht1()
{
    delete ui;
}

void teht1::add()
{
    QString text = ui->numBox->text();
    int num = text.toInt();
    num++;
    qDebug()<< "num: "<<num<<" | luettu"<<ui->numBox->text();
    ui->numBox->setText(QString::number(num, 10));
}

void teht1::reset()
{
    ui->numBox->setText("0");
}
