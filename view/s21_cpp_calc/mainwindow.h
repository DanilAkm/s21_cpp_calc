#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPrinter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pow_clicked();

    void on_zero_clicked();

    void on_fpoint_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_plus_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_minus_clicked();

    void on_mod_clicked();

    void on_div_clicked();

    void on_mul_clicked();

    void on_leftb_clicked();

    void on_rightb_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
