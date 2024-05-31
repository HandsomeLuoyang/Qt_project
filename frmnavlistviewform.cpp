
#include <QPixmap>

#include "frmnavlistviewform.h"
#include "ui_frmnavlistviewform.h"
#include "qabstractitemmodel.h"
#include "qdebug.h"
#include "qfiledialog.h"
#include "qfile.h"
#include <QStandardItemModel>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>

#include "strain_sensor.h"


frmNavListViewForm::frmNavListViewForm(QWidget *parent) :
    QWidget(parent),
	ui(new Ui::frmNavListViewForm)
{
     ui->setupUi(this);
     this->initForm();                //树形结构界面渲染



     Init();                          //应变
        Init1(); //挠度
     Init2();                         //位移

}

frmNavListViewForm::~frmNavListViewForm()
{

	delete ui;
}
//应变初始
void frmNavListViewForm::Init(){

    sensor_count = 0;   //刚开始 0个应变传感器
    data_sensor_count = 0; //刚开始 0组测试数据
    mytable1=new QStandardItemModel;
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
    mytable1->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("出厂中心波长")));
    mytable1->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("单位")));
    ui->tableView->setModel(mytable1);
    ui->tableView->setColumnWidth(0,80);
    ui->tableView->setColumnWidth(1,90);
    ui->tableView->setColumnWidth(2,80);
    ui->tableView->setColumnWidth(3,70);
    ui->tableView->setColumnWidth(4,90);
    ui->tableView->setColumnWidth(5,90);
    ui->tableView->setColumnWidth(6,50);

    mytable4=new QStandardItemModel;
     //背景网格线设置
    ui->tableView_4->setShowGrid(true);
    ui->tableView_4->setGridStyle(Qt::DotLine);
    //排序功能
    ui->tableView_4->setSortingEnabled(true);
    mytable4->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("传感器编号")));
    mytable4->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("规格")));
    mytable4->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("型号")) );
    mytable4->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("生产厂家")));
    mytable4->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("生产日期")));
    mytable4->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("伸缩缝初始值")));
    mytable4->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("是否安装")));
    ui->tableView_4->setModel(mytable4);
    ui->tableView_4->setColumnWidth(0,80);
    ui->tableView_4->setColumnWidth(1,70);
    ui->tableView_4->setColumnWidth(2,60);
    ui->tableView_4->setColumnWidth(3,70);
    ui->tableView_4->setColumnWidth(4,90);
    ui->tableView_4->setColumnWidth(5,90);
    ui->tableView_4->setColumnWidth(6,50);

    //读取应变传感器文件
    jmcx(readFile());
    set_item(subs,sensor_count);//设置表格
    data_readFile();
    set_strain(subs);
    //给应变对象赋值
    //set_data_MeasuringWavelength(data_sensor_subs);
    double *temp = def_data[0].get_Deflection_data();
    for (int i = 0; i<6; i++)
         qDebug() << "挠度图表的数据为" <<temp[i];
     QLineSeries *series = new QLineSeries();

//    for( int i = 0 ; i < wy_sensor_count; i++)
//    {
//        double *temp = dis_Data[i].get_dis_data();
//        if( i == 0){
//        for (int j = 0; j < 5 ;j++)
//        series->append(j,temp[j]);}
//        else
//            for (int j = 0;j < 5;j++)
//            {
//                series1->append(j,temp[j]);
//            }

//    }
   // double *temp1 = dis_Data[0].get_dis_data();
    for (int j = 0 ;j < 6 ;j++)
        series->append(j,temp[j]);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("应变数据曲线");
    nd_chartView = new QChartView(chart);
    nd_chartView->setRenderHint(QPainter::Antialiasing);
    ui->gridLayout_3->addWidget(nd_chartView);


}

//挠度传感
void frmNavListViewForm::Init1()
{
    mytable2=new QStandardItemModel;
     //背景网格线设置
    ui->tableView_2->setShowGrid(true);
    ui->tableView_2->setGridStyle(Qt::DotLine);
    //排序功能
    ui->tableView_2->setSortingEnabled(true);
    mytable2->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("传感器编号")));
    mytable2->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("规格")));
    mytable2->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("型号")) );
    mytable2->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("生产厂家")));
    mytable2->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("生产日期")));
    mytable2->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("基准点监测值")));
    mytable2->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("单位")));
    ui->tableView_2->setModel(mytable2);
    ui->tableView_2->setColumnWidth(0,90);
    ui->tableView_2->setColumnWidth(1,50);
    ui->tableView_2->setColumnWidth(2,50);
    ui->tableView_2->setColumnWidth(3,80);
    ui->tableView_2->setColumnWidth(4,90);
    ui->tableView_2->setColumnWidth(5,90);
    ui->tableView_2->setColumnWidth(6,50);



    mytable5=new QStandardItemModel;
     //背景网格线设置
    ui->tableView_5->setShowGrid(true);
    ui->tableView_5->setGridStyle(Qt::DotLine);
    //排序功能
    ui->tableView_5->setSortingEnabled(true);
    mytable5->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("传感器编号")));
    mytable5->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("规格")));
    mytable5->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("型号")) );
    mytable5->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("生产厂家")));
    mytable5->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("生产日期")));
    mytable5->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("伸缩缝初始值")));
    mytable5->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("是否安装")));
    ui->tableView_5->setModel(mytable5);
    ui->tableView_5->setColumnWidth(0,80);
    ui->tableView_5->setColumnWidth(1,70);
    ui->tableView_5->setColumnWidth(2,60);
    ui->tableView_5->setColumnWidth(3,70);
    ui->tableView_5->setColumnWidth(4,90);
    ui->tableView_5->setColumnWidth(5,90);
    ui->tableView_5->setColumnWidth(6,50);


    nd_sensor_count = 0;
    nd_data_sensor_count = 0;
    nd_jmcx(nd_readFile());
    nd_data_readFile();
    set_nd_data();
    nd_set_item(nd_subs,nd_sensor_count);

    double *temp = def_data[0].get_Deflection_data();
    QString *time =def_data[0].get_nd_time();
    for (int i = 0; i<6; i++)
         qDebug() << "挠度图表的数据为" <<temp[i];
     QLineSeries *series = new QLineSeries();

//    for( int i = 0 ; i < wy_sensor_count; i++)
//    {
//        double *temp = dis_Data[i].get_dis_data();
//        if( i == 0){
//        for (int j = 0; j < 5 ;j++)
//        series->append(j,temp[j]);}
//        else
//            for (int j = 0;j < 5;j++)
//            {
//                series1->append(j,temp[j]);
//            }

//    }
   // double *temp1 = dis_Data[0].get_dis_data();
    for (int j = 0 ;j < 6 ;j++)
        series->append(j,temp[j]);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("挠度数据曲线");
    nd_chartView = new QChartView(chart);
    nd_chartView->setRenderHint(QPainter::Antialiasing);
    ui->gridLayout_2->addWidget(nd_chartView);



}
void frmNavListViewForm::Init2()
{
    mytable3=new QStandardItemModel;
     //背景网格线设置
    ui->tableView_3->setShowGrid(true);
    ui->tableView_3->setGridStyle(Qt::DotLine);
    //排序功能
    ui->tableView_3->setSortingEnabled(true);
    mytable3->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("传感器编号")));
    mytable3->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("规格")));
    mytable3->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("型号")) );
    mytable3->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("生产厂家")));
    mytable3->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("生产日期")));
    mytable3->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("伸缩缝初始值")));
    mytable3->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("单位")));
    ui->tableView_3->setModel(mytable3);
    ui->tableView_3->setColumnWidth(0,80);
    ui->tableView_3->setColumnWidth(1,70);
    ui->tableView_3->setColumnWidth(2,60);
    ui->tableView_3->setColumnWidth(3,70);
    ui->tableView_3->setColumnWidth(4,90);
    ui->tableView_3->setColumnWidth(5,90);
    ui->tableView_3->setColumnWidth(6,50);


    mytable6=new QStandardItemModel;
     //背景网格线设置
    ui->tableView_6->setShowGrid(true);
    ui->tableView_6->setGridStyle(Qt::DotLine);
    //排序功能
    ui->tableView_6->setSortingEnabled(true);
    mytable6->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("传感器编号")));
    mytable6->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("规格")));
    mytable6->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("型号")) );
    mytable6->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("生产厂家")));
    mytable6->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("生产日期")));
    mytable6->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("伸缩缝初始值")));
    mytable6->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("是否安装")));
    ui->tableView_6->setModel(mytable6);
    ui->tableView_6->setColumnWidth(0,80);
    ui->tableView_6->setColumnWidth(1,70);
    ui->tableView_6->setColumnWidth(2,60);
    ui->tableView_6->setColumnWidth(3,70);
    ui->tableView_6->setColumnWidth(4,90);
    ui->tableView_6->setColumnWidth(5,90);
    ui->tableView_6->setColumnWidth(6,50);





    wy_sensor_count = 0;
    wy_data_sensor_count = 0;
    wy_jmcx(wy_readFile());
    wy_data_readFile();
    set_dis_data();
    wy_set_item(wy_subs,wy_sensor_count);

    double *temp = dis_Data[0].get_dis_data();
    for (int i = 0; i<wy_data_sensor_count/2; i++)
         qDebug() << "图表的数据为" <<temp[i];
     QLineSeries *series = new QLineSeries();
     QLineSeries *series1 = new QLineSeries();


//    for( int i = 0 ; i < wy_sensor_count; i++)
//    {
//        double *temp = dis_Data[i].get_dis_data();
//        if( i == 0){
//        for (int j = 0; j < 5 ;j++)
//        series->append(j,temp[j]);}
//        else
//            for (int j = 0;j < 5;j++)
//            {
//                series1->append(j,temp[j]);
//            }

//    }
    double *temp1 = dis_Data[0].get_dis_data();
    double *temp2 = dis_Data[1].get_dis_data();
    for (int j = 0 ;j < 5 ;j++)
        series->append(j,temp1[j]);
    for (int j=0 ;j <5 ;j++)
        series1->append(j,temp2[j]);
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("位移数据曲线");



    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->gridLayout->addWidget(chartView);



}
QStringList frmNavListViewForm::readFile()
{
    QFile file("..\\NavListView\\Strain_data\\info_sensor_1.txt");  //打开应变传感器数据文件
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"打开失败";
    }
    QTextStream in(&file);                    //设置一个文件指针
                                              //为什么in指针一直指向文件尾呢？？？
    if (in.atEnd())
    {
        qDebug()<<"in指针指向了文件尾";
    }
    //whil（）循环这里有问题！
     while(!in.atEnd() /*读取到文件末尾*/)
     {
         QString line=in.readLine();                //读取文件的一行到line中
         sensor_lins.append(line);                  //将line加入到容器sensor_lins中
         sensor_count++;                         
     }
     qDebug()<<"sensor_count的值为"<<sensor_count;
     qDebug()<< "sensor_lins";
     file.close();                                          //关闭文件
     return sensor_lins;                                  //设置返回值
}

void frmNavListViewForm::data_readFile()
{
    QFile file("..\\NavListView\\2 监测数据集\\1 应变监测\\2 应变监测数据.txt");  //打开应变传感器数据文件
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"打开失败";
    }
    qDebug () << "应变测试数据读取成功" ;
    QTextStream in(&file);                    //设置一个文件指针
    if (in.atEnd())
    {
        qDebug()<<"in指针指向了文件尾";
    }
    //whil（）循环这里有问题！
     while(!in.atEnd() /*读取到文件末尾*/)
     {
         QString line=in.readLine();                //读取文件的一行到line中
         data_sensor_lins.append(line);                  //将line加入到容器sensor_lins中
         data_sensor_count++;
                                  //文件行数
     }
//     for (int j=0;j<data_sensor_count;j++)
//     qDebug()<<"data_sensor_lins的值为"<<data_sensor_lins.at(j);
     qDebug() << "data_jmcx 已经调用";
     int i;
     qDebug() << "data_sensor_lins.length()的值为：" <<data_sensor_lins;
     for( i=0;i<data_sensor_lins.length();i++)  //使用循环遍历容器，一直到容器尾
     {
         QString line=data_sensor_lins.at(i);   //设置一个qstring类型的存储容器中的第i行

         //data_sensor_subs.append(line.split("\t"));
         //line=line.trimmed();           //去掉qstring中前后的空格
         data_sensor_subs.append(line.split("\t"));  //用容器来将分割开的内容存储，以空格分隔
     }
 //   qDebug() << "应变的测试数据为：";
 //   for (int i =0 ;i<data_sensor_subs.size();i++)
 //   {
 //       qDebug() << data_sensor_subs.at(i);
 //   }
     qDebug() << "应变测试数据分割完成" ;
     file.close();                                          //关闭文件
     qDebug() << "成功返回应变测试数据";
}

void frmNavListViewForm::wy_data_readFile()
{
    QFile file("..\\NavListView\\2 监测数据集\\3 位移监测\\2 位移监测数据.txt");  //打开应变传感器数据文件
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"打开失败";
    }
    qDebug () << "位移测试数据读取成功" ;

    QTextStream in(&file);                    //设置一个文件指针

    if (in.atEnd())
    {
        qDebug()<<"in指针指向了文件尾";
    }

     while(!in.atEnd() /*读取到文件末尾*/)
     {
         QString line=in.readLine();                //读取文件的一行到line中
         wy_data_sensor_lins.append(line);                  //将line加入到容器sensor_lins中
         wy_data_sensor_count++;
                                  //文件行数
     }
     qDebug() << "wy_data_jmcx 已经调用";
     int i;
     qDebug() << "wy_sensor_lins.length()的值为：" <<wy_data_sensor_lins.length();
     for( i=0;i<wy_data_sensor_lins.length();i++)  //使用循环遍历容器，一直到容器尾
     {
         QString line=wy_data_sensor_lins.at(i);   //设置一个qstring类型的存储容器中的第i行

         //data_senor_subs.append(line.split("\t"));
         //line=line.trimmed();           //去掉qstring中前后的空格
         wy_data_sensor_subs.append(line.split("\t"));  //用容器来将分割开的内容存储，以空格分隔
     }
     qDebug () << "wy_data_sensor_subs的值为" <<wy_data_sensor_subs;
      file.close();
}
void frmNavListViewForm::nd_data_readFile()
{
    QFile file("..\\NavListView\\2 监测数据集\\2 挠度监测\\2 挠度监测数据.txt");  //打开应变传感器数据文件
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"打开失败";
    }
    qDebug () << "位移测试数据读取成功" ;

    QTextStream in(&file);                    //设置一个文件指针

    if (in.atEnd())
    {
        qDebug()<<"in指针指向了文件尾";
    }

     while(!in.atEnd() /*读取到文件末尾*/)
     {
         QString line=in.readLine();                //读取文件的一行到line中
         nd_data_sensor_lins.append(line);                  //将line加入到容器sensor_lins中
         nd_data_sensor_count++;
                                  //文件行数
     }
     qDebug() << "nd_data_jmcx 已经调用";
     int i;
     qDebug() << "nd_sensor_lins.length()的值为：" <<nd_data_sensor_lins.length();
     for( i=0;i<nd_data_sensor_lins.length();i++)  //使用循环遍历容器，一直到容器尾
     {
         QString line=nd_data_sensor_lins.at(i);   //设置一个qstring类型的存储容器中的第i行

         //data_senor_subs.append(line.split("\t"));
         //line=line.trimmed();           //去掉qstring中前后的空格
         nd_data_sensor_subs.append(line.split("\t"));  //用容器来将分割开的内容存储，以空格分隔
     }
     qDebug () << "nd_data_sensor_subs的值为" <<nd_data_sensor_subs;
      file.close();
}

QStringList frmNavListViewForm::nd_readFile()
{
    QFile file1("..\\NavListView\\Strain_data\\nd_info_sensor.txt");  //打开挠度传感器数据文件
    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"文件打开失败";
    }

     QTextStream nd_in(&file1);
    if (!nd_in.atEnd())
    {
        //qDebug()<<file1.readLine();
       // qDebug()<<file1;
        qDebug()<<"挠度数据文件指针指向文件尾";
    }
    qDebug() << "nd_sensor_count:"<< nd_sensor_count;
    while(!nd_in.atEnd())      /*读取到文件末尾*/
    {
        QString line=nd_in.readLine();                //读取文件的一行到line中
        nd_sensor_lins.append(line);                  //将line加入到容器sensor_lins中
        nd_sensor_count++;                          //文件行数
      }

    qDebug() << "nd_sensor_count:"<< nd_sensor_count;

    file1.close();
    return nd_sensor_lins;
}

QStringList frmNavListViewForm::wy_readFile()
{
    QFile file1("..\\NavListView\\Strain_data\\wy_info_sensor.txt");  //打开位移传感器数据文件
    if (!file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"文件打开失败";
    }
     QTextStream wy_in(&file1);

     while(!wy_in.atEnd())      /*读取到文件末尾*/
     {

         QString line=wy_in.readLine();                //读取文件的一行到line中
         wy_sensor_lins.append(line);                  //将line加入到容器sensor_lins中
         wy_sensor_count++;                          //文件行数
       }
     file1.close();
     qDebug() << "位移文件读取完成";
     return wy_sensor_lins;
}

void frmNavListViewForm::nd_jmcx(QStringList nd_sensor_lins)
{
    qDebug() << "挠度分割函数已经调用";
    for (int i=0;i<nd_sensor_lins.length();i++)
    {
        QString line = nd_sensor_lins.at(i);
        nd_subs.append(line.split(" "));
    }
}
void frmNavListViewForm::wy_jmcx(QStringList wy_sensor_lins)
{
    for (int i=0;i<wy_sensor_lins.length();i++)
    {
        QString line = wy_sensor_lins.at(i);
        wy_subs.append(line.split(" "));
    }

    qDebug() << "位移文件分割完成";
    for (int j=0;j<wy_subs.size();j++)
        qDebug() << wy_subs.at(j);


}


void frmNavListViewForm::jmcx(QStringList sensor_lins)
{
    qDebug() << "jmcx 已经调用";
    int i;
    for( i=0;i<sensor_lins.length();i++)  //使用循环遍历容器，一直到容器尾
    {
        QString line=sensor_lins.at(i);   //设置一个qstring类型的存储容器中的第i行

        subs.append(line.split(" "));


        //line=line.trimmed();           //去掉qstring中前后的空格
        //QStringList subs=line.split(" ");  //用容器来将分割开的内容存储，以空格分隔
    }


    qDebug() << "subs 已经空白分割";

    //    将subs中传感器编号提出来储存在新的数组中
    //    QStringList subs1;


    //    // 如何将QStringList的值赋给 QStringList
    //    for (int p=0;p<subs.size()/6;p++)
    //    {
    //        QString temp=subs.at(6*p);
    //        subs1.append(temp);

    //    }

    //    for (int i = 0;i<subs1.size();i++)
    //    {
    //        qDebug ()<< "subs1:"<<subs1.at(i);
    //    }

}

void frmNavListViewForm::set_item(QStringList subs,int length){
    //int n = subs.size();
    int k=0;
   // qDebug () <<"sensor_count的值为"<< sensor_count ;
    for(int i=0; i<length;i++){
        for(int j=0; j<7; j++){
            //qDebug ()<< "subs.at(k)";
            //qDebug ()<<subs.at(k);
            mytable1->setItem(i,j,new QStandardItem(subs.at(k++)));
            //qDebug ()<< "item已经设置完成";
        }
    }
      int k1=0;
     for (int i=0; i<length;i++)
        for (int j =0; j<7;j++)
        {
            mytable4->setItem(i,j,new QStandardItem(subs.at(k1++)));
        }

   // qDebug()<<"item 已经设置";
}

void frmNavListViewForm::nd_set_item(QStringList nd_subs,int length)
{
    int k=0;
    qDebug() << "nd_subs" << nd_subs.at(0)<<" "<<nd_subs.at(6);
    qDebug() << "length:" <<length;

    for (int i=0;i<length;i++)
        for(int j=0;j<7;j++)               //7代表tableview横向属性个数
            mytable2->setItem(i,j,new QStandardItem(nd_subs.at(k++)));

    int k1=0;

    for (int i=0;i<length;i++)
        for(int j=0;j<7;j++)               //7代表tableview横向属性个数
            mytable5->setItem(i,j,new QStandardItem(nd_subs.at(k1++)));

}

void frmNavListViewForm::wy_set_item(QStringList wy_subs,int length)
{
    int k=0;
    for (int o;o<wy_subs.size();o++)
    {
        qDebug()<< wy_subs.at(o);
    }
    qDebug () << length<<"wy_set_item已经调用 ";
    qDebug () << wy_subs.at(1);
    for (int i=0;i<length;i++)
        for(int j=0;j<7;j++)               //6代表tableview横向属性个数
            mytable3->setItem(i,j,new QStandardItem(wy_subs.at(k++)));

    int k1 = 0;
    for (int i=0;i<length;i++)
        for(int j=0;j<7;j++)               //6代表tableview横向属性个数
            mytable6->setItem(i,j,new QStandardItem(wy_subs.at(k1++)));




//    mytable3->setItem(0,0,new QStandardItem(wy_subs.at(0)));
    qDebug()<<"位移界面设置完成";
}

void frmNavListViewForm::initForm()
{

    this->setWindowTitle("桥梁数据监测系统 v1.0");

	ui->listView->setIcoColorBg(false);
	ui->listView->setColorLine(QColor(32, 53, 74));
	ui->listView->setColorBg(QColor(52, 73, 94), QColor(24, 189, 155), QColor(24, 189, 155, 150));
    ui->listView->setColorText(QColor(254, 255, 255), QColor(252, 252, 252), QColor(0, 0, 0));

    connect(&add, SIGNAL(Send_add_sensor_back()), SLOT(Recv_add_sensor_back()));
    connect(&add, SIGNAL(Send_add_sensor_close()), SLOT(Recv_add_sensor_close()));


	//设置数据方式
	QStringList listItem;
    listItem.append("桥梁数据监测||0|TLH");

    listItem.append("系统设置||1|");
    listItem.append("桥梁信息|系统设置||");
    listItem.append("监测点|系统设置||");
    listItem.append("传感器|系统设置||");

    listItem.append("监测点信息||2|");
    listItem.append("应变监测|监测点信息||");
    listItem.append("挠度监测|监测点信息||");
    listItem.append("位移监测|监测点信息||");


    listItem.append("传感器设置||3|");
    listItem.append("应变传感|传感器设置||");
    listItem.append("挠度传感|传感器设置||");
    listItem.append("位移传感|传感器设置||");

    listItem.append("帮助文档||4|");

	ui->listView->setData(listItem);


	//加载xml文件形式
    //ui->listView->readData(":/image/config.xml");
}

void frmNavListViewForm::on_listView_pressed()
{
	QModelIndex index = ui->listView->currentIndex();
	QString text = index.data().toString();

	if (text == "主界面") {
        ui->stackedWidget->setCurrentIndex(0);
    } else if (text == "桥梁信息") {
		ui->stackedWidget->setCurrentIndex(1);
    } else if (text == "监测点") {
		ui->stackedWidget->setCurrentIndex(2);
    } else if (text == "传感器") {
		ui->stackedWidget->setCurrentIndex(3);
	}

      else if (text == "监测点信息")
    {
        ui->stackedWidget->setCurrentIndex(4);
    }
      else if (text == "应变监测")
    {
        ui->stackedWidget->setCurrentIndex(5);
    }
    else if (text == "挠度监测")
   {
      ui->stackedWidget->setCurrentIndex(6);
   }
    else if (text == "位移监测")
  {
      ui->stackedWidget->setCurrentIndex(7);
  }
    else if (text == "应变传感")
  {
      ui->stackedWidget->setCurrentIndex(8);
  }
    else if (text == "挠度传感")
  {
      ui->stackedWidget->setCurrentIndex(9);
  }
    else if (text == "位移传感")
  {
      ui->stackedWidget->setCurrentIndex(10);
  }
    else if (text == "帮助文档")
  {
      ui->stackedWidget->setCurrentIndex(11);
  }

}

//选择文件打开
void frmNavListViewForm::on_pushButton_3_clicked()
{

    QString filename = QFileDialog::getOpenFileName(this, "打开文件", ".", "Txt(*.txt);;c files(*.c);; cpp files(*.cpp)");
    if(filename.isEmpty() == false)
    {
        QFile file(filename);
        bool isok = file.open(QIODevice::ReadOnly);//以只读的方式打开文件
        if(isok == true)
        {
            QByteArray array;
            while(file.atEnd() == false)
            {
                array += file.readLine();//将文件中的读取的内容保存在字节数组中。
            }

        }
        file.close();//文件读取完毕后关闭文件。
    }
}
//根据路径直接打开文件



//增加应变传感器
void frmNavListViewForm::on_pushButton_7_clicked()
{
    add.show();
}
//查询应变传感器
void frmNavListViewForm::on_pushButton_10_clicked()
{
    serch.set_lines(sensor_lins);  //将应变传感器的lins传给查询函数
    serch.show();
}
//应变传感器刷新
void frmNavListViewForm::on_pushButton_6_clicked()
{
    Init();
}
//增加挠度传感器
void frmNavListViewForm::on_pushButton_11_clicked()
{
    add_nd.show();
}
//增加位移传感器
void frmNavListViewForm::on_pushButton_15_clicked()
{
    add_wy.show();
}
//查询挠度传感器
void frmNavListViewForm::on_pushButton_14_clicked()
{
    serch_nd.set_lines(nd_sensor_lins);
    serch_nd.show();
}
//查询位移传感器
void frmNavListViewForm::on_pushButton_18_clicked()
{
    serch_wy.set_lines(wy_sensor_lins);
    serch_wy.show();
}
//设置位移图表
void frmNavListViewForm::on_pushButton_19_clicked()
{

    QString buff = ui->lineEdit->text();
    int k = buff.toInt();
    //ui->stackedWidget_3->setCurrentIndex(buff.toInt());
    QLineSeries *series = new QLineSeries();

    double *temp1 = dis_Data[k].get_dis_data();
    for (int j = 0 ;j < 5 ;j++)
        series->append(j,temp1[j]);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("位移数据曲线");
    QChartView *chartView1 = new QChartView(chart);
    chartView1->setRenderHint(QPainter::Antialiasing);
    //ui->gridLayout->addWidget(chartView);
    ui->gridLayout->replaceWidget(chartView,chartView1);
    chartView = chartView1;
    ui->lineEdit->clear();

}

void frmNavListViewForm::on_lineEdit_returnPressed()
{

    QString buff = ui->lineEdit->text();
    int k = buff.toInt();
    //ui->stackedWidget_3->setCurrentIndex(buff.toInt());
    QLineSeries *series = new QLineSeries();

    double *temp1 = dis_Data[k].get_dis_data();
    for (int j = 0 ;j < 5 ;j++)
        series->append(j,temp1[j]);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("位移数据曲线");
    QChartView *chartView1 = new QChartView(chart);
    chartView1->setRenderHint(QPainter::Antialiasing);
    //ui->gridLayout->addWidget(chartView);
    ui->gridLayout->replaceWidget(chartView,chartView1);
    chartView = chartView1;
    ui->lineEdit->clear();

}

void frmNavListViewForm::on_lineEdit_2_returnPressed()
{
    QString buff = ui->lineEdit_2->text();
    int k = buff.toInt();
    //ui->stackedWidget_3->setCurrentIndex(buff.toInt());
    QLineSeries *series = new QLineSeries();

    double *temp1 = def_data[k].get_Deflection_data();
    for (int j = 0 ;j < 6 ;j++)
        series->append(j,temp1[j]);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("挠度数据曲线");
    QChartView *chartView1 = new QChartView(chart);
    chartView1->setRenderHint(QPainter::Antialiasing);
    //ui->gridLayout->addWidget(chartView);
    ui->gridLayout_2->replaceWidget(nd_chartView,chartView1);
    nd_chartView = chartView1;
    ui->lineEdit_2->clear();
}

void frmNavListViewForm::on_pushButton_16_clicked()
{
    serch_wy.show();
}

void frmNavListViewForm::on_pushButton_12_clicked()
{
    serch_nd.show();
}

void frmNavListViewForm::on_pushButton_8_clicked()
{
    serch.show();
}
