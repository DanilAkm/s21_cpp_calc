/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pow;
    QPushButton *mod;
    QPushButton *eight;
    QPushButton *seven;
    QPushButton *mul;
    QPushButton *minus;
    QPushButton *div;
    QPushButton *nine;
    QPushButton *five;
    QPushButton *two;
    QPushButton *four;
    QPushButton *one;
    QPushButton *plus;
    QPushButton *six;
    QPushButton *three;
    QPushButton *zero;
    QPushButton *fpoint;
    QPushButton *enter;
    QPushButton *sin;
    QPushButton *tan;
    QPushButton *cos;
    QPushButton *ctg;
    QPushButton *asin;
    QPushButton *acos;
    QPushButton *atan;
    QPushButton *actg;
    QPlainTextEdit *exp;
    QPlainTextEdit *res;
    QPushButton *leftb;
    QPushButton *rightb;
    QCustomPlot *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1036, 608);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pow = new QPushButton(centralwidget);
        pow->setObjectName(QString::fromUtf8("pow"));
        pow->setGeometry(QRect(50, 190, 51, 61));
        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        mod->setGeometry(QRect(110, 190, 51, 61));
        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(110, 250, 51, 61));
        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(50, 250, 51, 61));
        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(230, 190, 51, 61));
        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(230, 250, 51, 61));
        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(170, 190, 51, 61));
        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(170, 250, 51, 61));
        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(110, 310, 51, 61));
        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(110, 370, 51, 61));
        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(50, 310, 51, 61));
        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(50, 370, 51, 61));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(230, 310, 51, 61));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(170, 310, 51, 61));
        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(170, 370, 51, 61));
        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(50, 430, 111, 61));
        fpoint = new QPushButton(centralwidget);
        fpoint->setObjectName(QString::fromUtf8("fpoint"));
        fpoint->setGeometry(QRect(170, 430, 51, 61));
        enter = new QPushButton(centralwidget);
        enter->setObjectName(QString::fromUtf8("enter"));
        enter->setGeometry(QRect(230, 370, 51, 121));
        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(310, 250, 51, 121));
        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setGeometry(QRect(430, 250, 51, 121));
        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(370, 250, 51, 121));
        ctg = new QPushButton(centralwidget);
        ctg->setObjectName(QString::fromUtf8("ctg"));
        ctg->setGeometry(QRect(490, 250, 51, 121));
        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        asin->setGeometry(QRect(310, 370, 51, 121));
        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        acos->setGeometry(QRect(370, 370, 51, 121));
        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        atan->setGeometry(QRect(430, 370, 51, 121));
        actg = new QPushButton(centralwidget);
        actg->setObjectName(QString::fromUtf8("actg"));
        actg->setGeometry(QRect(490, 370, 51, 121));
        exp = new QPlainTextEdit(centralwidget);
        exp->setObjectName(QString::fromUtf8("exp"));
        exp->setGeometry(QRect(50, 70, 491, 41));
        QFont font;
        font.setPointSize(18);
        exp->setFont(font);
        res = new QPlainTextEdit(centralwidget);
        res->setObjectName(QString::fromUtf8("res"));
        res->setGeometry(QRect(50, 130, 491, 41));
        res->setFont(font);
        res->setReadOnly(true);
        leftb = new QPushButton(centralwidget);
        leftb->setObjectName(QString::fromUtf8("leftb"));
        leftb->setGeometry(QRect(310, 190, 51, 61));
        rightb = new QPushButton(centralwidget);
        rightb->setObjectName(QString::fromUtf8("rightb"));
        rightb->setGeometry(QRect(370, 190, 51, 61));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(570, 10, 451, 481));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1036, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        fpoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "\342\217\216", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        ctg->setText(QCoreApplication::translate("MainWindow", "ctg", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        actg->setText(QCoreApplication::translate("MainWindow", "actg", nullptr));
        exp->setPlaceholderText(QCoreApplication::translate("MainWindow", "                                               Expression", nullptr));
        res->setPlaceholderText(QCoreApplication::translate("MainWindow", "                                                    Result", nullptr));
        leftb->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        rightb->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
