#ifndef TEHT2_H
#define TEHT2_H

#include <QWidget>
#include <QDebug>
#include <QRegularExpression>
#include <QString>
#include <QStringList>

namespace Ui {
class teht2;
}

class teht2 : public QWidget
{
    Q_OBJECT

public:
    explicit teht2(QWidget *parent = nullptr);
    ~teht2();
    Ui::teht2 *ui;

private slots:
    void numberHandler();
    void operatorHandler();
    void equationHandler();
    void clearHandler();
};

#endif // TEHT2_H
