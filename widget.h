#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_spinBox_1000_valueChanged(int arg1);
    void on_spinBox_500_valueChanged(int arg1);
    void on_spinBox_200_valueChanged(int arg1);
    void on_spinBox_100_valueChanged(int arg1);
    void on_spinBox_50_valueChanged(int arg1);
    void on_spinBox_20_valueChanged(int arg1);
    void on_spinBox_10_valueChanged(int arg1);
    void on_spinBox_5_valueChanged(int arg1);
    void on_spinBox_3_valueChanged(int arg1);
    void on_spinBox_1_valueChanged(int arg1);

private:
    Ui::Widget *ui;

    int calc_total();
};

#endif // WIDGET_H
