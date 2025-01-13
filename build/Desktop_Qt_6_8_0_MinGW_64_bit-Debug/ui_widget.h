/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *mainLineEdit;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *divButton;
    QPushButton *twoButton;
    QPushButton *mulButton;
    QPushButton *fiveButton;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QPushButton *sevenButton;
    QPushButton *clearButton;
    QPushButton *zeroButton;
    QPushButton *addButton;
    QPushButton *eightButton;
    QPushButton *subButton;
    QPushButton *fourButton;
    QPushButton *oneButton;
    QPushButton *threeButton;
    QPushButton *delButton;
    QPushButton *sixButton;
    QPushButton *equalButton;
    QPushButton *nineButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(220, 370);
        Widget->setMinimumSize(QSize(220, 370));
        Widget->setMaximumSize(QSize(220, 370));
        mainLineEdit = new QLineEdit(Widget);
        mainLineEdit->setObjectName("mainLineEdit");
        mainLineEdit->setGeometry(QRect(20, 20, 181, 41));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 340, 91, 16));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 80, 180, 251));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        divButton = new QPushButton(widget);
        divButton->setObjectName("divButton");
        divButton->setMinimumSize(QSize(40, 40));
        divButton->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(11);
        divButton->setFont(font);

        gridLayout->addWidget(divButton, 2, 3, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName("twoButton");
        twoButton->setMinimumSize(QSize(40, 40));
        twoButton->setMaximumSize(QSize(40, 40));
        twoButton->setFont(font);

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName("mulButton");
        mulButton->setMinimumSize(QSize(40, 40));
        mulButton->setMaximumSize(QSize(40, 40));
        mulButton->setFont(font);

        gridLayout->addWidget(mulButton, 1, 3, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font);

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        leftButton = new QPushButton(widget);
        leftButton->setObjectName("leftButton");
        leftButton->setMinimumSize(QSize(40, 40));
        leftButton->setMaximumSize(QSize(40, 40));
        leftButton->setFont(font);

        gridLayout->addWidget(leftButton, 4, 0, 1, 1);

        rightButton = new QPushButton(widget);
        rightButton->setObjectName("rightButton");
        rightButton->setMinimumSize(QSize(40, 40));
        rightButton->setMaximumSize(QSize(40, 40));
        rightButton->setFont(font);

        gridLayout->addWidget(rightButton, 4, 2, 1, 1);

        sevenButton = new QPushButton(widget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setMinimumSize(QSize(40, 40));
        sevenButton->setMaximumSize(QSize(40, 40));
        sevenButton->setFont(font);

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName("clearButton");
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));
        clearButton->setFont(font);

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setMinimumSize(QSize(40, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font);

        gridLayout->addWidget(zeroButton, 4, 1, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName("addButton");
        addButton->setMinimumSize(QSize(40, 40));
        addButton->setMaximumSize(QSize(40, 40));
        addButton->setFont(font);

        gridLayout->addWidget(addButton, 0, 1, 1, 1);

        eightButton = new QPushButton(widget);
        eightButton->setObjectName("eightButton");
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        eightButton->setFont(font);

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        subButton = new QPushButton(widget);
        subButton->setObjectName("subButton");
        subButton->setMinimumSize(QSize(40, 40));
        subButton->setMaximumSize(QSize(40, 40));
        subButton->setFont(font);

        gridLayout->addWidget(subButton, 0, 2, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName("fourButton");
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font);

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName("oneButton");
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font);

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName("threeButton");
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font);

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        delButton = new QPushButton(widget);
        delButton->setObjectName("delButton");
        delButton->setMinimumSize(QSize(40, 40));
        delButton->setMaximumSize(QSize(40, 40));
        delButton->setFont(font);

        gridLayout->addWidget(delButton, 0, 3, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName("sixButton");
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        sixButton->setFont(font);

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName("equalButton");
        equalButton->setMinimumSize(QSize(40, 40));
        equalButton->setMaximumSize(QSize(40, 100));
        equalButton->setFont(font);

        gridLayout->addWidget(equalButton, 3, 3, 2, 1);

        nineButton = new QPushButton(widget);
        nineButton->setObjectName("nineButton");
        nineButton->setMinimumSize(QSize(40, 40));
        nineButton->setMaximumSize(QSize(40, 40));
        nineButton->setFont(font);

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Power by Liwei", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        leftButton->setText(QCoreApplication::translate("Widget", "\357\274\210", nullptr));
        rightButton->setText(QCoreApplication::translate("Widget", "\357\274\211", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        clearButton->setText(QString());
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        subButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        delButton->setText(QString());
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
