#ifndef TEHT1_H
#define TEHT1_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class teht1;
}

class teht1 : public QWidget
{
    Q_OBJECT

public:
    explicit teht1(QWidget *parent = nullptr);
    ~teht1();
    Ui::teht1 *ui;

private slots:
    void add();
    void reset();

private:

};

#endif // TEHT1_H
