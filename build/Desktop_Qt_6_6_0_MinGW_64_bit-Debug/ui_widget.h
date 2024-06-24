/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QFrame *line_2;
    QStackedWidget *stackedWidget;
    QWidget *welcome;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *into;
    QPushButton *quit;
    QWidget *see;
    QHBoxLayout *horizontalLayout;
    QTableWidget *see1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *add;
    QPushButton *save;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(535, 408);
        Widget->setStyleSheet(QString::fromUtf8("background-image: url(:/build/dd16082007a725dd5f2fe00fbe465c7.jpg);"));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        line_2 = new QFrame(Widget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");
        welcome = new QWidget();
        welcome->setObjectName("welcome");
        verticalLayout = new QVBoxLayout(welcome);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(welcome);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(248, 214, 212);"));

        verticalLayout->addWidget(label);

        into = new QPushButton(welcome);
        into->setObjectName("into");
        into->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout->addWidget(into);

        quit = new QPushButton(welcome);
        quit->setObjectName("quit");
        quit->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout->addWidget(quit);

        stackedWidget->addWidget(welcome);
        see = new QWidget();
        see->setObjectName("see");
        horizontalLayout = new QHBoxLayout(see);
        horizontalLayout->setObjectName("horizontalLayout");
        see1 = new QTableWidget(see);
        see1->setObjectName("see1");

        horizontalLayout->addWidget(see1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(see);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(see);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(pushButton_2);

        add = new QPushButton(see);
        add->setObjectName("add");
        add->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(add);

        save = new QPushButton(see);
        save->setObjectName("save");
        save->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";"));

        verticalLayout_2->addWidget(save);

        pushButton_3 = new QPushButton(see);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 1);
        stackedWidget->addWidget(see);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "               \351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        into->setText(QCoreApplication::translate("Widget", "\346\254\242\350\277\216\350\277\233\345\205\245", nullptr));
        quit->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\345\256\242\346\210\277\347\212\266\346\200\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\345\256\242\346\210\277\344\277\241\346\201\257", nullptr));
        add->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\345\256\242\346\210\277\344\277\241\346\201\257", nullptr));
        save->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
