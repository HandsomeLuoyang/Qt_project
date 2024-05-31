#ifndef STRAIN_SENSOR_H
#define STRAIN_SENSOR_H
#include "sensor.h"
#include "qdebug.h"
/*
 应变监测数据说明

本监测系统的应变监测共10个监测点，每个监测点安装有1个监测传感器，监测数据存放在“应变监测数据.txt”文件中，该文件数据除第一列之外（监测时间），其它每列对应一个传感器的监测数据（波长），假设这10个传感器一次对应10个监测点。数据文件的数据含义如下表：
监测时间	1号传感器波长	2号传感器波长	3号传感器波长	4号传感器波长	5号传感器波长	6号传感器波长	7号传感器波长	8号传感器波长	9号传感器波长	10号传感器波长


各传感器的中心波长如下表：
1号传感器波长	2号传感器波长	3号传感器波长	4号传感器波长	5号传感器波长	6号传感器波长	7号传感器波长	8号传感器波长	9号传感器波长	9号传感器波长
1519.60165	1520.80859	1521.69138	1524.65868	1526.46124	1537.93863	1542.53398	1545.56048	1548.93114	1514.60759

*/


class strain_sensor:public sensor
{
private:
    double CentralWavelength;       //出厂中心波长
    double MeasuringWavelength;     //实际中心波长
    double strain_data[50];             //应变数据
    QString Unitc;                  //带单位的应变数据
    int sum_data;                   //应变数据总数
    QString StiainSensorNumber;     //应变传感器编号
    QString danwei;                 //应变传感器波长单位
public:
    strain_sensor()
    {
        sensor();
    }

    ~strain_sensor()
    {

    }
    double get_CentralWavelength()
    {
        return this->CentralWavelength;
    }

    double get_MeasuringWavelength()
    {
        return this->MeasuringWavelength;
    }

    void set_CentralWavelength(double temp)
    {
        CentralWavelength=temp;
    }

    void set_MeasuringWavelength(double temp)
    {
        MeasuringWavelength = temp;
    }

    //设置应变传感器基本信息
    void set_strain(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5,double CentralWavelength)
    {
        Set_Sensor(temp1,temp2,temp3,temp4,temp5);
        this->CentralWavelength=CentralWavelength;
    }

    double set_strain_data(double *temp,int n)
    {
        for (int i=0;i<n;i++)
        {
            strain_data[i] = 1000*(temp[i] - this->CentralWavelength)+ 8 * 0.5;
        }
        for (int i = 0;i<n;i++)
        {
            qDebug() << "第" <<i<<"组数据的值为："<<strain_data[i];
        }
    }
    //计算应变数据并返回
    double *get_strain_data()
    {
       return strain_data ;
    }

};













#endif // STRAIN_SENSOR_H
