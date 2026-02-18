/********************************************************************************
** Form generated from reading UI file 'teht2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEHT2_H
#define UI_TEHT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teht2
{
public:
    QPushButton *menuButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *num9button;
    QPushButton *num2button;
    QPushButton *num1button;
    QPushButton *num7button;
    QPushButton *num3button;
    QPushButton *num6button;
    QPushButton *num4button;
    QPushButton *num5button;
    QPushButton *num0button;
    QPushButton *num8button;
    QPushButton *plusButton;
    QPushButton *minusButton;
    QPushButton *multiplyButton;
    QPushButton *divideButton;
    QPushButton *clearButton;
    QPushButton *equalsButton;
    QLabel *prevEq;
    QLineEdit *screen;

    void setupUi(QWidget *teht2)
    {
        if (teht2->objectName().isEmpty())
            teht2->setObjectName("teht2");
        teht2->resize(338, 442);
        menuButton = new QPushButton(teht2);
        menuButton->setObjectName("menuButton");
        menuButton->setGeometry(QRect(10, 10, 91, 21));
        gridLayoutWidget = new QWidget(teht2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(30, 150, 281, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        num9button = new QPushButton(gridLayoutWidget);
        num9button->setObjectName("num9button");
        QFont font;
        font.setPointSize(20);
        num9button->setFont(font);

        gridLayout->addWidget(num9button, 0, 2, 1, 1);

        num2button = new QPushButton(gridLayoutWidget);
        num2button->setObjectName("num2button");
        num2button->setFont(font);

        gridLayout->addWidget(num2button, 2, 1, 1, 1);

        num1button = new QPushButton(gridLayoutWidget);
        num1button->setObjectName("num1button");
        num1button->setFont(font);

        gridLayout->addWidget(num1button, 2, 0, 1, 1);

        num7button = new QPushButton(gridLayoutWidget);
        num7button->setObjectName("num7button");
        num7button->setFont(font);

        gridLayout->addWidget(num7button, 0, 0, 1, 1);

        num3button = new QPushButton(gridLayoutWidget);
        num3button->setObjectName("num3button");
        num3button->setFont(font);

        gridLayout->addWidget(num3button, 2, 2, 1, 1);

        num6button = new QPushButton(gridLayoutWidget);
        num6button->setObjectName("num6button");
        num6button->setFont(font);

        gridLayout->addWidget(num6button, 1, 2, 1, 1);

        num4button = new QPushButton(gridLayoutWidget);
        num4button->setObjectName("num4button");
        num4button->setFont(font);

        gridLayout->addWidget(num4button, 1, 0, 1, 1);

        num5button = new QPushButton(gridLayoutWidget);
        num5button->setObjectName("num5button");
        num5button->setFont(font);

        gridLayout->addWidget(num5button, 1, 1, 1, 1);

        num0button = new QPushButton(gridLayoutWidget);
        num0button->setObjectName("num0button");
        num0button->setFont(font);

        gridLayout->addWidget(num0button, 3, 1, 1, 1);

        num8button = new QPushButton(gridLayoutWidget);
        num8button->setObjectName("num8button");
        num8button->setFont(font);

        gridLayout->addWidget(num8button, 0, 1, 1, 1);

        plusButton = new QPushButton(gridLayoutWidget);
        plusButton->setObjectName("plusButton");
        plusButton->setFont(font);

        gridLayout->addWidget(plusButton, 3, 3, 1, 1);

        minusButton = new QPushButton(gridLayoutWidget);
        minusButton->setObjectName("minusButton");
        minusButton->setFont(font);

        gridLayout->addWidget(minusButton, 2, 3, 1, 1);

        multiplyButton = new QPushButton(gridLayoutWidget);
        multiplyButton->setObjectName("multiplyButton");
        multiplyButton->setFont(font);

        gridLayout->addWidget(multiplyButton, 1, 3, 1, 1);

        divideButton = new QPushButton(gridLayoutWidget);
        divideButton->setObjectName("divideButton");
        divideButton->setFont(font);

        gridLayout->addWidget(divideButton, 0, 3, 1, 1);

        clearButton = new QPushButton(gridLayoutWidget);
        clearButton->setObjectName("clearButton");
        clearButton->setFont(font);

        gridLayout->addWidget(clearButton, 3, 0, 1, 1);

        equalsButton = new QPushButton(gridLayoutWidget);
        equalsButton->setObjectName("equalsButton");
        equalsButton->setFont(font);

        gridLayout->addWidget(equalsButton, 3, 2, 1, 1);

        prevEq = new QLabel(teht2);
        prevEq->setObjectName("prevEq");
        prevEq->setGeometry(QRect(20, 120, 291, 16));
        screen = new QLineEdit(teht2);
        screen->setObjectName("screen");
        screen->setGeometry(QRect(20, 70, 301, 71));
        screen->setFont(font);
        screen->setReadOnly(true);
        menuButton->raise();
        gridLayoutWidget->raise();
        screen->raise();
        prevEq->raise();

        retranslateUi(teht2);

        QMetaObject::connectSlotsByName(teht2);
    } // setupUi

    void retranslateUi(QWidget *teht2)
    {
        teht2->setWindowTitle(QCoreApplication::translate("teht2", "Form", nullptr));
        menuButton->setText(QCoreApplication::translate("teht2", "Menu", nullptr));
        num9button->setText(QCoreApplication::translate("teht2", "9", nullptr));
        num2button->setText(QCoreApplication::translate("teht2", "2", nullptr));
        num1button->setText(QCoreApplication::translate("teht2", "1", nullptr));
        num7button->setText(QCoreApplication::translate("teht2", "7", nullptr));
        num3button->setText(QCoreApplication::translate("teht2", "3", nullptr));
        num6button->setText(QCoreApplication::translate("teht2", "6", nullptr));
        num4button->setText(QCoreApplication::translate("teht2", "4", nullptr));
        num5button->setText(QCoreApplication::translate("teht2", "5", nullptr));
        num0button->setText(QCoreApplication::translate("teht2", "0", nullptr));
        num8button->setText(QCoreApplication::translate("teht2", "8", nullptr));
        plusButton->setText(QCoreApplication::translate("teht2", "+", nullptr));
        minusButton->setText(QCoreApplication::translate("teht2", "-", nullptr));
        multiplyButton->setText(QCoreApplication::translate("teht2", "*", nullptr));
        divideButton->setText(QCoreApplication::translate("teht2", "/", nullptr));
        clearButton->setText(QCoreApplication::translate("teht2", "Clear", nullptr));
        equalsButton->setText(QCoreApplication::translate("teht2", "=", nullptr));
        prevEq->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class teht2: public Ui_teht2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEHT2_H
