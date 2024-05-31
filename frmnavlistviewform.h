#ifndef FRMNAVLISTVIEWFORM_H
#define FRMNAVLISTVIEWFORM_H

#include <QWidget>
#include <add_sensor.h>

#include "serch_sensor.h"
#include "strain_sensor.h"


#include "displacement_sensor.h"
#include "displacement_data.h"
#include "deflection_sensor.h"

#include "def_data.h"

#include <QAbstractItemModel>
#include <QStandardItemModel>
#include <QFile>

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>


QT_CHARTS_USE_NAMESPACE//QtChart名空间

namespace Ui {
class frmNavListViewForm;
}

class frmNavListViewForm : public QWidget
{
    Q_OBJECT

public:
    explicit frmNavListViewForm(QWidget *parent = 0);
    ~frmNavListViewForm();

    //读取传感器基本信息文件并按行分割
    QStringList readFile();
    QStringList nd_readFile();
    QStringList wy_readFile();

    //读取应变测试文件
    void data_readFile();
    void wy_data_readFile();
    void nd_data_readFile();

    //将文readfile分割好的文件按照 空格 分割好
    void jmcx(QStringList a);
    void nd_jmcx(QStringList subs);
    void wy_jmcx(QStringList subs);

    //根据已经分割好的文件对tableview赋值
    void set_item(QStringList subs,int length);
    void nd_set_item(QStringList subs,int length);
    void wy_set_item(QStringList subs,int length);

    //根据分割好的文件对对象数组进行赋值
    void set_strain(QStringList subs)
    {
        qDebug() << "应变传感器基本信息开始设置";
        for (int i=0;i<subs.size()/7;i++)
        {
            strain[i].set_strain(subs.at(0+7*i),subs.at(1+7*i),subs.at(2+7*i),subs.at(3+7*i),subs.at(4+7*i),subs.at(5+7*i).toDouble());
        }
        qDebug() << "应变传感器基本信息设置完成";
        qDebug() << strain[10].show_date();
        for (int i=0;i<subs.size()/7;i++)
        {
            qDebug() << strain[i].get_CentralWavelength();
        }

    }
    void set_data_MeasuringWavelength(QStringList data_sensor_subs)
    {
        qDebug () << "应变数据开始计算";
        //double *temp;
        qDebug() << "data_subs.size()的值为："<<data_sensor_subs;
        qDebug() << "data_sensor_count的值为" <<data_sensor_count;
        for (int k=0;k<10;k++)
        {
            qDebug () << "开始第"<<k<<"次循环计算";
            double *temp = new double (data_sensor_count) ;

        for (int i = 0;i<data_sensor_count;i++)
        {
            temp[i] = data_sensor_subs.at(k+1+11*i).toDouble();
        }
//        for (int i = 0;i<data_sensor_count;i++)
//        {
//            qDebug() << "temp[" <<i<<"]的值为"<<temp[i];
//        }
         strain[k].set_strain_data(temp,data_sensor_count);
         delete []temp;
        }
        qDebug() << "应变数据计算完成完成" ;
    }

    void set_dis_data()
    {
        qDebug () << "开始设置位移数据" << " wy_sensor_lins的值为"<<wy_sensor_lins;
        for (int i = 0 ;i < wy_sensor_lins.length() ; i++){
            dis_Data[i].set_dis_num(wy_subs.at(0+7*i));   //设置编号
            dis_Data[i].set_initial_value(wy_subs.at(5+i*7).toDouble());
        }
        double ob[11];
        for (int i=0 ; i <10 ; i++)
            ob[i] = wy_data_sensor_subs.at(3+i*5).toDouble();
        qDebug () << "ob数组的值为：" ;
        for (int i=0 ; i < 10 ; i++)
            qDebug () << ob[i];

        double ob1[5];
        for (int i = 0 ; i<5; i++)
            ob1[i]=ob[2*i];
        double ob2[5];
        for (int i = 0 ;i < 5; i++)
            ob2[i] = ob[2*i+1];
        dis_Data[0].set_dis_data(ob1,5);
        dis_Data[1].set_dis_data(ob2,5);
    }
    void set_nd_data()
    {
        qDebug() << "开始设置挠度数据";





        qDebug() ;
        for (int i = 0;i<nd_sensor_lins.length();i++)
        {
            def_data[i].set_name(nd_subs.at(0+7*i));
        }
        double ob[100];

        qDebug() << "nd_data_sensor_subs的个数为"<<nd_data_sensor_subs.length();
        for (int i=0;i<84;i++){
             ob[i]=nd_data_sensor_subs.at(3+5*i).toDouble();
             qDebug() << ob[i] ;
        }
        QString time[15];

        for (int l=0;l<14;l++)
            time[l] = nd_data_sensor_subs.at(1+14*l);

        for (int k = 0 ; k < 14 ; k++)
        {
//            qDebug () << "第"<<k<<"组的计算数据为：";
            double ob1[6];
            for (int i = 0 ; i < 6 ;i++)
            {
                ob1[i] = ob[k+14*i];
//                qDebug() << "ob1["<<i<<"]的值为"<<ob1[i];
            }

//            qDebug() << "ob[0]"<<ob1[0]<<"ob[5]"<<ob1[5];
            def_data[k].set_nd_data(ob1,6);
            def_data[k].set_nd_time(time,14);
        }










    }

private slots:

    void initForm();
    void Init();//主界面
    void Init1();//桥梁信息界面
    void Init2();//挠度传感

    void on_listView_pressed();
    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_lineEdit_returnPressed();

    void on_lineEdit_2_returnPressed();

    void on_pushButton_16_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::frmNavListViewForm *ui;

    int sensor_count;               //应变传感器总数
    int nd_sensor_count;            //挠度传感器数量
    int wy_sensor_count;            //位移传感器数量

    int data_sensor_count;          //测试数据 行数
    int nd_data_sensor_count;       //挠度测试数据行数
    int wy_data_sensor_count;       //位移测试数据 行数


    QStandardItemModel * mytable1;  //应变传感器 tableview
    QStandardItemModel * mytable2;  //挠度传感器 tableview
    QStandardItemModel * mytable3;  //位移传感器 tableview

    QStandardItemModel * mytable6;
    QStandardItemModel * mytable4;
    QStandardItemModel * mytable5;



    //应变传感器基本信息
    QStringList sensor_lins;   
    QStringList subs;

    //挠度基本数据
    QStringList nd_sensor_lins;
    QStringList nd_subs;
    //位移基本数据
    QStringList wy_sensor_lins;
    QStringList wy_subs;

    //应变测试数据
    QStringList data_sensor_lins;
    QStringList data_sensor_subs;

    //挠度测试数据
    QStringList nd_data_sensor_lins;
    QStringList nd_data_sensor_subs;

    //位移测试数据
    QStringList wy_data_sensor_lins;
    QStringList wy_data_sensor_subs;


    //增加传感器
    add_sensor add;
    add_sensor add_nd;
    add_sensor add_wy;

    //查询传感器
    serch_sensor serch;
    serch_sensor serch_nd;
    serch_sensor serch_wy;


    strain_sensor strain[11];    //定义应变传感器对象数组
    dis_Data dis_Data[5];        //位移数据对象数组
    def_sensor def_data[20];

    QChartView* chartView;
    QChartView* nd_chartView;



};

#endif // FRMNAVLISTVIEWFORM_H
