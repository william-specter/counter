#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // subtotales
    ui->label_st1000->setNum(0);
    ui->label_st500->setNum(0);
    ui->label_st200->setNum(0);
    ui->label_st100->setNum(0);
    ui->label_st50->setNum(0);
    ui->label_st20->setNum(0);
    ui->label_st10->setNum(0);
    ui->label_st5->setNum(0);
    ui->label_st3->setNum(0);
    ui->label_st1->setNum(0);

    // total
    ui->label_totalCount->setNum(0);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_spinBox_1000_valueChanged(int arg1)
{
    arg1 = ui->spinBox_1000->value();
    ui->label_st1000->setNum(arg1 * 1000);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_500_valueChanged(int arg1)
{
    arg1 = ui->spinBox_500->value();
    ui->label_st500->setNum(arg1 * 500);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_200_valueChanged(int arg1)
{
    arg1 = ui->spinBox_200->value();
    ui->label_st200->setNum(arg1 * 200);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_100_valueChanged(int arg1)
{
    arg1 = ui->spinBox_100->value();
    ui->label_st100->setNum(arg1 * 100);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_50_valueChanged(int arg1)
{
    arg1 = ui->spinBox_50->value();
    ui->label_st50->setNum(arg1 * 50);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_20_valueChanged(int arg1)
{
    arg1 = ui->spinBox_20->value();
    ui->label_st20->setNum(arg1 * 20);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_10_valueChanged(int arg1)
{
    arg1 = ui->spinBox_10->value();
    ui->label_st10->setNum(arg1 * 10);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_5_valueChanged(int arg1)
{
    arg1 = ui->spinBox_5->value();
    ui->label_st5->setNum(arg1 * 5);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_3_valueChanged(int arg1)
{
    arg1 = ui->spinBox_3->value();
    ui->label_st3->setNum(arg1 * 3);

    ui->label_totalCount->setNum(calc_total());
}

void Widget::on_spinBox_1_valueChanged(int arg1)
{
    arg1 = ui->spinBox_1->value();
    ui->label_st1->setNum(arg1 * 1);

    ui->label_totalCount->setNum(calc_total());
}

int Widget::calc_total()
{
    int b1 = ui->label_st1->text().toInt();
    int b3 = ui->label_st3->text().toInt();
    int b5 = ui->label_st5->text().toInt();
    int b10 = ui->label_st10->text().toInt();
    int b20 = ui->label_st20->text().toInt();
    int b50 = ui->label_st50->text().toInt();
    int b100 = ui->label_st100->text().toInt();
    int b200 = ui->label_st200->text().toInt();
    int b500 = ui->label_st500->text().toInt();
    int b1000 = ui->label_st1000->text().toInt();
    int total = b1 + b3 + b5 + b10 + b20 + b50 + b100 + b200 + b500 + b1000;

    return total;
}
