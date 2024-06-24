#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>
#include <QFile>//读取文件的头文件
#include <QString>
#include <QDebug>//?
#include <QTextStream>//文本流 处理文本问题
#include <QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_into_clicked()
{
    //切换到查看页面
    ui->stackedWidget->setCurrentWidget(ui->see);
    //把list中的数据显示在表格中
    ui->see1->setColumnCount(m_fields.size());
    ui->see1->setHorizontalHeaderLabels(m_fields);
    ui->see1->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->see1->verticalHeader()->show();
    for(auto s : m_hotel)
    {
        //获取数量（也就是将要增加新行的行号）
        int row = ui->see1->rowCount();
        //1.添加一空行
        ui->see1->insertRow(ui->see1->rowCount());
        //2.把数据设置到空行中
        ui->see1->setItem(row,0,new QTableWidgetItem(s->id));
        ui->see1->setItem(row,1,new QTableWidgetItem(s->name));
        ui->see1->setItem(row,2,new QTableWidgetItem(QString::number(s->area)));
        ui->see1->setItem(row,3,new QTableWidgetItem(QString::number(s->price)));
        ui->see1->setItem(row,4,new QTableWidgetItem(QString::number(s->num)));
        ui->see1->setItem(row,5,new QTableWidgetItem(s->state));
        ui->see1->item(row,0)->setTextAlignment(Qt::AlignCenter);
        ui->see1->item(row,1)->setTextAlignment(Qt::AlignCenter);
        ui->see1->item(row,2)->setTextAlignment(Qt::AlignCenter);
        ui->see1->item(row,3)->setTextAlignment(Qt::AlignCenter);
        ui->see1->item(row,4)->setTextAlignment(Qt::AlignCenter);
        ui->see1->item(row,5)->setTextAlignment(Qt::AlignCenter);
    }
}


void Widget::on_quit_clicked()
{
    close();//关闭窗口
}


void Widget::on_pushButton_clicked()//
{
    QList<QTableWidgetItem*> selections = ui->see1->selectedItems();
    if(selections.size()==1)
    {
        QTableWidgetItem* item = selections[0];
        int row = item->row();
        QString state = ui->see1->item(row,5)->text();
        if(state=="空闲"){
            ui->see1->setItem(row,5,new QTableWidgetItem("有客"));
            ui->see1->item(row,5)->setTextAlignment(Qt::AlignCenter);
        }
        else{ ui->see1->setItem(row,5,new QTableWidgetItem("空闲"));
            ui->see1->item(row,5)->setTextAlignment(Qt::AlignCenter);
        }
    }
}


void Widget::on_pushButton_2_clicked()
{
    QList<QTableWidgetItem*> selections = ui->see1->selectedItems();
    int colCount = ui->see1->columnCount(); //列数

    for (int i = 0; i < selections.size(); i+= colCount)
    {
        QTableWidgetItem* item = selections[i];
        int row = item->row();  //判断当前项在第几行，进行删除
        ui->see1->removeRow(row);  //删除行。
    }

}


void Widget::on_add_clicked()
{
    int RowCont=ui->see1->rowCount();
    ui->see1->insertRow(RowCont);//增加一行
}
void Widget::on_pushButton_3_clicked()
{
    close();
}
