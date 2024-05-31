#include "add_sensor.h"
#include "ui_add_sensor.h"
#include <QFile>
#include <QButtonGroup>
#include <QDialog>
#include <QAbstractButton>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QList>
#include <QTextStream>
#include <QIODevice>


add_sensor::add_sensor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_sensor)
{
    ui->setupUi(this);



}

add_sensor::~add_sensor()
{
    delete ui;
}


void add_sensor::on_pushButton_2_clicked()
{
    QString name = this->ui->le_name_2->text();             //传感器名称
    QString specifications = this->ui->le_name_3->text();   //规格
    QString model = this->ui->le_name_4->text();            //型号
    QString manufacturer = this->ui->le_name_5->text();     //生产厂家
    QString date = this->ui->le_name_6->text();             //生产日期
    QString midbolen = this->ui->le_name_7->text();         //中心波长
    QString danwei = this->ui->le_name_8->text();           //单位

    QString info = name+'\n'+specifications+'\n'+model+'\n'+manufacturer+'\n'+date+'\n';
    QString cnt = name+' '+specifications+' '+model+' '+manufacturer+' '+date+' '+midbolen+' '+danwei+'\n';
    if (name.length() < 1 )
        {
            QMessageBox::critical(this, QStringLiteral("错误"),
                                        QStringLiteral("信息填写不完整，请重新检查"),
                                        QStringLiteral("确定"));
            return;
        }

        else
        {
         int ret = QMessageBox::question(this, QStringLiteral("请确认传感器信息"),
            info, QStringLiteral("确定"), QStringLiteral("取消"));
                if (0 == ret)
                 {
                        celarUserInterface();
                        double temp = midbolen.toDouble();
                        if (temp>1000)
                        writeTofile(cnt);
                        else if (temp>10&&temp<1000)
                        writeTofile_nd(cnt);
                        else if (temp<10)
                        writeTofile_wy(cnt);
                 }
        }
}







void add_sensor::writeTofile(QString cnt)
{ 
    //定义文件内容字符串
   // QString str= "写入文件的内容";
    QFile file("..\\NavListView\\Strain_data\\info_sensor_1.txt");
    //打开文件，不存在则创建file.open(QIODevice::Append | QIODevice::Text);
    //写入文件需要字符串为QByteArray格式
    if (!file.open(QIODevice::Append| QIODevice::Text)){
        qDebug()<<"打开失败";
    }
    file.write(cnt.toUtf8());
    file.close();
    /*
    //实例QFile
    QFile file("info_sensor.txt");
    //定义文件内容字符串

    //判断文件是否存在
    if(file.exists())
    {
        QMessageBox::warning(this,"创建文件","文件已经存在！");
    }else
    {
        //存在打开，不存在创建
        file.open(QIODevice::ReadWrite | QIODevice::Text);
        //写入内容,这里需要转码，否则报错。
        QByteArray str = cnt.toUtf8();
        //写入QByteArray格式字符串
        file.write(str);
        //提示成功
        QMessageBox::warning(this,"创建文件","文件创建成功！");
    }
    //关闭文件
    file.close();
    /*QFile file("info_sensor.txt");
    if (! file.open(QIODevice::Append | QIODevice::Text))
    {
        QMessageBox::critical(this, QStringLiteral("错误"),
                              QStringLiteral("打开文件失败，信息没有保存！"),
                              QStringLiteral("确认"));
        return;
    }

    QTextStream out(&file);//文件流式操作
    out << cnt;
    file.close();*/
}

void add_sensor::writeTofile_nd(QString cnt)
{
    QFile file("..\\NavListView\\Strain_data\\nd_info_sensor.txt");
    //打开文件，不存在则创建file.open(QIODevice::Append | QIODevice::Text);
    //写入文件需要字符串为QByteArray格式
    if (!file.open(QIODevice::Append| QIODevice::Text)){
        qDebug()<<"打开失败";
    }
    file.write(cnt.toUtf8());
    file.close();
}
void add_sensor::writeTofile_wy(QString cnt)
{
    QFile file("..\\NavListView\\Strain_data\\wy_info_sensor.txt");
    //打开文件，不存在则创建file.open(QIODevice::Append | QIODevice::Text);
    //写入文件需要字符串为QByteArray格式
    if (!file.open(QIODevice::Append| QIODevice::Text)){
        qDebug()<<"打开失败";
    }
    file.write(cnt.toUtf8());
    file.close();
}


//重置为默认界面
void add_sensor::celarUserInterface()
{
    this->ui->le_name_2->clear();
    this->ui->le_name_3->clear();
    this->ui->le_name_4->clear();
    this->ui->le_name_5->clear();
    this->ui->le_name_6->clear();
    this->ui->le_name_7->clear();
    this->ui->le_name_2->setFocus();  //将光标设置在姓名处
}
void add_sensor::on_pushButton_clicked()
{
    this->close();
    emit Send_add_sensor_back();
}
//直接退出，同样是发射信号
void add_sensor::on_pushButton_3_clicked()
{
    this->close();
    emit Send_add_sensor_close();
}
