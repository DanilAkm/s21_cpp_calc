#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pow_clicked()
{
    ui->exp->insertPlainText("^");
}


void MainWindow::on_zero_clicked()
{
    ui->exp->insertPlainText("0");
}


void MainWindow::on_fpoint_clicked()
{
    ui->exp->insertPlainText(".");
}


void MainWindow::on_one_clicked()
{
    ui->exp->insertPlainText("1");
}


void MainWindow::on_two_clicked()
{
    ui->exp->insertPlainText("2");
}


void MainWindow::on_three_clicked()
{
    ui->exp->insertPlainText("3");
}


void MainWindow::on_four_clicked()
{
    ui->exp->insertPlainText("4");
}


void MainWindow::on_five_clicked()
{
    ui->exp->insertPlainText("5");
}


void MainWindow::on_six_clicked()
{
    ui->exp->insertPlainText("6");
}


void MainWindow::on_plus_clicked()
{
    ui->exp->insertPlainText("+");
}


void MainWindow::on_seven_clicked()
{
    ui->exp->insertPlainText("7");
}


void MainWindow::on_eight_clicked()
{
    ui->exp->insertPlainText("8");
}


void MainWindow::on_nine_clicked()
{
    ui->exp->insertPlainText("9");
}


void MainWindow::on_minus_clicked()
{
    ui->exp->insertPlainText("-");
}


void MainWindow::on_mod_clicked()
{
    ui->exp->insertPlainText("mod");
}


void MainWindow::on_div_clicked()
{
    ui->exp->insertPlainText("/");
}


void MainWindow::on_mul_clicked()
{
    ui->exp->insertPlainText("*");
}


void MainWindow::on_leftb_clicked()
{
    ui->exp->insertPlainText("()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_rightb_clicked()
{
    ui->exp->insertPlainText(")");
}


void MainWindow::on_sqrt_clicked()
{
    ui->exp->insertPlainText("sqrt()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_sin_clicked()
{
    ui->exp->insertPlainText("sin()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_cos_clicked()
{
    ui->exp->insertPlainText("cos()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_tan_clicked()
{
    ui->exp->insertPlainText("tan()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_ln_clicked()
{
    ui->exp->insertPlainText("ln()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_asin_clicked()
{
    ui->exp->insertPlainText("asin()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_acos_clicked()
{
    ui->exp->insertPlainText("acos()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_atan_clicked()
{
    ui->exp->insertPlainText("atan()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_log_clicked()
{
    ui->exp->insertPlainText("log()");
    ui->exp->moveCursor(QTextCursor::Left);
}


void MainWindow::on_backspace_clicked()
{
    QString tempStr = ui->exp->toPlainText().chopped(1);
    ui->exp->clear();
    ui->exp->insertPlainText(tempStr);
}


void MainWindow::on_deleteAll_clicked()
{
    ui->exp->clear();
}

