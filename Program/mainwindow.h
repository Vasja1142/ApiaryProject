#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QVector>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    void createVectors();

    QVector<double> dates;

//    QVector<double> temper = {3, 4};

//    QVector<double> vlazhn = {3, 5};

//    QVector<double> prives = {3, 5};

    QVector<double> temper = {32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28,
//                             32, 34, 30, 34, 29 ,28, 31, 33, 30, 28
//                             32, 34, 30, 27, 22, 15, 10, 5, 2, 1
                             32, 34, 30, 34, 35 ,36, 37, 37, 38, 38
                             };


    QVector<double> vlazhn = {98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 99,
//                              98, 95 ,92, 99, 94 ,96, 95, 91, 93, 91
//                              98, 95 ,92, 99, 99, 99, 99, 99, 99, 99
                              92, 84, 81, 76, 73, 70, 68, 66, 65, 64
                             };



    QVector<double> prives = {32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
//                              32000, 32250 ,32600, 33000, 33290 ,33700, 34100, 34240, 34500, 35000,
//                              36000, 35500, 35000, 34500, 34000, 33500, 33000, 32500, 32000, 31500,
                              36000, 39000, 42000, 45000, 46000, 49000, 50000, 51000, 52000, 53000
                             };

    QVector<double> temper1;
    QVector<double> vlazhn1;
    QVector<double> prives1;
    QVector<double> dates1;

    bool f = false;
    int num1, num2, number; // переменные для начальной и конечной даты в графиках
    double tmax, tmin, vmax, vmin, pmax, pmin; // Для макс и мин значений векторов данных


/////////////////////////////

/////////////////////////////


public slots:
    void ontimeout();
    void diff(int d);

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
};
#endif // MAINWINDOW_H
