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
    filename = "D:\\hotel_information.txt";
    loadData(filename);//从文件中读取数据
}

Widget::~Widget()
{
    delete ui;
}

void Widget::loadData(const QString &filename)
{
    QFile file(filename);
    // 尝试打开文件
    if (!file.open(QIODevice::ReadOnly)) // 以只读方式打开文件
    {
        qInfo() << "open file failed";
        return; // 如果不能打开文件，输出失败信息并返回
    }
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::Utf8);
    // 读取表头（假设表头格式是固定的）
    // qDebug()<<stream.readLine();
    m_fields = stream.readLine().split("\t");
    // 读取数据
    while (!stream.atEnd())
    {
        QStringList lineData = stream.readLine().split("\t");
        // 确保数据行包含足够的字段
        if (lineData.size() < 6)
        {
            qInfo() << "incorrect data format";
            continue; // 跳过格式不正确的行
        }
        // 分配新的 hotel 对象
        auto s = new hotel;
        // 填充 hotel 对象的数据
        s->id    = lineData[0];
        s->name  = lineData[1];
        s->area  = lineData[2].toDouble();
        s->price = lineData[3].toDouble();
        s->num   = lineData[4].toDouble();
        s->state = lineData[5];
        // 将对象添加到 m_hotel 容器中
        m_hotel.push_back(s);
    }

    // 确保文件在读取完毕后关闭
    file.close();
}


void Widget::on_save_clicked()
{
    QFile file(filename);
    // 尝试打开文件
    if (!file.open(QIODevice::WriteOnly)) // 以只读方式打开文件
    {
        qInfo() << "open file failed";
        return; // 如果不能打开文件，输出失败信息并返回
    }
    QTextStream stream(&file);
    stream<<m_fields[0]<<"\t"<<m_fields[1]<<"\t"<<m_fields[2]<<"\t"<<m_fields[3]<<"\t"<<m_fields[4]<<"\t"<<m_fields[5]<<"\n";
    //循环读取数据
    for(int i=0;i<ui->see1->rowCount();i++){
        for(int j=0;j<ui->see1->columnCount();j++){
            if(ui->see1->item(i,j)!=NULL){               //一定要先判断非空，否则会报错
                stream<<ui->see1->item(i,j)->text();
                if(j<ui->see1->columnCount()-1){
                    stream<<"\t";
                }
            }
        }
        stream<<"\n";
    }
    file.close();
}



