/********************************************************************************
** Form generated from reading UI file 'teht1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEHT1_H
#define UI_TEHT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teht1
{
public:
    QLabel *label;
    QPushButton *menuButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *countButton;
    QPushButton *resetButton;
    QLineEdit *numBox;

    void setupUi(QWidget *teht1)
    {
        if (teht1->objectName().isEmpty())
            teht1->setObjectName("teht1");
        teht1->resize(400, 300);
        label = new QLabel(teht1);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 70, 81, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        menuButton = new QPushButton(teht1);
        menuButton->setObjectName("menuButton");
        menuButton->setGeometry(QRect(20, 20, 101, 31));
        horizontalLayoutWidget = new QWidget(teht1);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(110, 130, 181, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        countButton = new QPushButton(horizontalLayoutWidget);
        countButton->setObjectName("countButton");

        verticalLayout->addWidget(countButton);

        resetButton = new QPushButton(horizontalLayoutWidget);
        resetButton->setObjectName("resetButton");

        verticalLayout->addWidget(resetButton);


        horizontalLayout->addLayout(verticalLayout);

        numBox = new QLineEdit(horizontalLayoutWidget);
        numBox->setObjectName("numBox");
        numBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        numBox->setReadOnly(true);

        horizontalLayout->addWidget(numBox);


        retranslateUi(teht1);

        QMetaObject::connectSlotsByName(teht1);
    } // setupUi

    void retranslateUi(QWidget *teht1)
    {
        teht1->setWindowTitle(QCoreApplication::translate("teht1", "Form", nullptr));
        label->setText(QCoreApplication::translate("teht1", "Teht\303\244v\303\244 1", nullptr));
        menuButton->setText(QCoreApplication::translate("teht1", "Menu", nullptr));
        countButton->setText(QCoreApplication::translate("teht1", "Count", nullptr));
        resetButton->setText(QCoreApplication::translate("teht1", "Reset", nullptr));
        numBox->setText(QCoreApplication::translate("teht1", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teht1: public Ui_teht1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEHT1_H
