#include "teht2.h"
#include "ui_teht2.h"

teht2::teht2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::teht2)
{
    ui->setupUi(this);

    //all number buttons
    connect(ui->num0button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num1button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num2button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num3button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num4button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num5button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num6button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num7button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num8button, SIGNAL(clicked()), SLOT(numberHandler()));
    connect(ui->num9button, SIGNAL(clicked()), SLOT(numberHandler()));

    //operator buttons
    connect(ui->divideButton, SIGNAL(clicked()), SLOT(operatorHandler()));
    connect(ui->multiplyButton, SIGNAL(clicked()), SLOT(operatorHandler()));
    connect(ui->minusButton, SIGNAL(clicked()), SLOT(operatorHandler()));
    connect(ui->plusButton, SIGNAL(clicked()), SLOT(operatorHandler()));

    //equation button
    connect(ui->equalsButton, SIGNAL(clicked()), SLOT(equationHandler()));

    //clear button
    connect(ui->clearButton, SIGNAL(clicked()), SLOT(clearHandler()));
}

teht2::~teht2()
{
    delete ui;
}

void teht2::numberHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString n = ui->screen->text() + button->text();
    ui->screen->setText(n);
    qDebug()<<"Added number "<<button->text();
}

void teht2::operatorHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString n = ui->screen->text() + button->text();
    ui->screen->setText(n);
    qDebug()<<"Added operator "<<button->text();
}

void teht2::equationHandler()
{

    ui->prevEq->setText(ui->screen->text());

    //split by operators
    QString text = ui->screen->text();

    QRegularExpression re("(\\d+|[+\\-*/])");
    QRegularExpressionMatchIterator it = re.globalMatch(text);

    QStringList split;

    while (it.hasNext()) {
        QRegularExpressionMatch match = it.next();
        split << match.captured(0);
        qDebug()<<match.captured(0);
    }

    qDebug()<<"Starting calculation: "<<ui->screen->text();

    for (int i = 1; i+2 <= split.size(); i+=2) {
        qDebug()<<"In * / calculator";
        if (split[i] == "*" || split[i] == "/") {
            int result;

            if (split[i] == "*") {
                result = split[i-1].toInt() * split[i + 1].toInt();
                qDebug()<<split[i-1]<<" * "<<split[i + 1];
            }
            else {
                result = split[i-1].toInt() / split[i + 1].toInt();
                qDebug()<<split[i-1]<<" / "<<split[i + 1];
            }
            split[i-1] = QString::number(result,10);
            split.removeAt(i + 1);
            split.removeAt(i);
        }
    }
    qDebug()<<"Out * / calculator";
    for (int i = 1; i+2 <= split.size(); i+=2) {
        qDebug()<<"In + - calculator";
        if (split[i] == "+") {
            qDebug()<<split[0]<<" + "<<split[i + 1];
            split[0] = QString::number(split[0].toInt() + split[i + 1].toInt(), 10);
        }
        else if (split[i] == "-") {
            qDebug()<<split[0]<<" - "<<split[i + 1];
            split[0] = QString::number(split[0].toInt() - split[i + 1].toInt(), 10);
        }
    }
    qDebug()<<"Out + - calculator";

    qDebug()<<"Calculation done: "<<split[0];
    ui->screen->setText(split[0]);
}

void teht2::clearHandler()
{
    ui->screen->setText("");
    ui->prevEq->setText("");
}
