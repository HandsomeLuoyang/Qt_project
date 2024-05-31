
#include "serch_sensor.h"
#include "ui_serch_sensor.h"

#include <QStandardItemModel>

serch_sensor::serch_sensor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::serch_sensor)
{
    //del_sensor::readfile(sensor_lines);
    ui->setupUi(this);
    Init();


}

serch_sensor::~serch_sensor()
{
    delete ui;
}


void serch_sensor::Init()
{
    mytable1 =new QStandardItemModel;


     //背景网格线设置
    ui->tableView->setShowGrid(true);
    ui->tableView->setGridStyle(Qt::DotLine);
    //排序功能
    ui->tableView->setSortingEnabled(true);

    mytable1->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("传感器编号")));
    mytable1->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("规格")));
    mytable1->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("型号")) );
    mytable1->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("生产厂家")));
    mytable1->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("生产日期")));
    mytable1->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("波长/检测值/初值")));
    mytable1->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("单位")));

    ui->tableView->setModel(mytable1);

    ui->tableView->setColumnWidth(0,80);
    ui->tableView->setColumnWidth(1,90);
    ui->tableView->setColumnWidth(2,80);
    ui->tableView->setColumnWidth(3,70);
    ui->tableView->setColumnWidth(4,90);
    ui->tableView->setColumnWidth(5,90);
    ui->tableView->setColumnWidth(6,50);


}

void serch_sensor::set_lines(QStringList lines)
{
    this->sensor_lines=lines;
}


void serch_sensor::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::Cancel==QMessageBox::warning(NULL,"Close me","Are you sure",\
                                                 QMessageBox::Cancel|QMessageBox::Ok))
    {
        event->ignore();
        return;
    }
}

void serch_sensor::doquery(int num,QString line_name)
{
         int k=0;
        for(int i=0;i<sensor_lines.size();i++)
     {
           QString line=sensor_lines[i];
           QStringList subs=line.split(' ');//这两步合在一块，不然会有错误
           if(num==0)
           {
               if(line_name!=subs[0])
                   continue;
           }
//           if(num==1)
//           {
//               if(line_name!=subs[1])
//                   continue;
//           }
//           if(num==2)
//           {
//               if(line_name!=subs[2])
//                   continue;
//           }
//           if(num==3)
//           {
//               if(line_name!=subs[3])
//                   continue;
//           }
//           if(num==4)
//           {
//               if(line_name!=subs[4])
//                   continue;
//           }
           for(int j=0;j<7;j++)
           {
               mytable1->setItem(k,j,new QStandardItem(subs[j]));
           }
//            QString temp="";

//           for(int m=5;m<subs.size();m++)
//           {
//              temp+=subs[m];
//              temp.append("");
//           }
//           mytable1->setItem(k++,5,new QStandardItem(temp));
      }

}


void serch_sensor::on_pushButton_clicked()
{

    mytable1->clear();

    mytable1->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("传感器编号")));
    mytable1->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("规格")));
    mytable1->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("型号")) );
    mytable1->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("生产厂家")));
    mytable1->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("生产日期")));
    mytable1->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("波长/检测值/初值")));
    mytable1->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("单位")));

    ui->tableView->setModel(mytable1);

    ui->tableView->setColumnWidth(0,80);
    ui->tableView->setColumnWidth(1,90);
    ui->tableView->setColumnWidth(2,80);
    ui->tableView->setColumnWidth(3,70);
    ui->tableView->setColumnWidth(4,90);
    ui->tableView->setColumnWidth(5,90);
    ui->tableView->setColumnWidth(6,50);

    int Num=ui->comboBox->currentIndex();      //只能通过编号查找传感器
    QString buff=ui->lineEdit->text();         //从文本框中得到所需要查找的数据
    doquery(Num,buff);

}





