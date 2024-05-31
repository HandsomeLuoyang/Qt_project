#ifndef DEFLECTION_SENSOR_H
#define DEFLECTION_SENSOR_H

#include "sensor.h"


/*
挠度传感器：主要采用GPS传感器，每个传感器均有测量单位属性（一般为：m、dm、cm、mm）。根据实际监测需要进行单位转换。

挠度监测点：每个监测点安装一个GPS测点。在桥梁周围稳定地点设置有一个基准测点， 监测点的挠度为该GPS测点监测数据与基准点的监测值之差，单位cm。

挠度数据说明


本监测系统的挠度监测共14个监测点，每个监测点安装有1个监测传感器，使用GPS传感器，监测数据存放在“挠度监测数据.txt”文件中。数据文件的数据含义如下表：
监测年月日	监测时间	传感器编号	监测值	单位
2016/11/22	14:23	700737	100.71	mm
14个传感器中，传感器编号为700737的是基准点传感器，每个测点的挠度为同一时间该传感器监测值与基准点监测值之差。
*/



class deflection_sensor
{
private:
    double Baseline_monitoring_value ;       //基准点监测值
    double Sensor_monitoring_value;          //传感器监测值
    double Deflection_data[5];                  //挠度数据
    int sum_data;                            //挠度数据总数
    QString DeflectionSensorNumber;          //应变传感器编号
public:
//    deflection_sensor();
//    ~deflection_sensor();

    //设置基准点和传感器的检测值
    void set_Baseline_monitoring_value()
    {
        Baseline_monitoring_value = 100.71;
    }
    void set_Sensor_monitoring_value(double temp);
    void set_deflection(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5,double Baseline_monitoring_value,double Sensor_monitoring_value,QString DeflectionSensorNumber);

    //返回挠度数据
    double* get_Deflection_data()
    {
        return Deflection_data;
    }
    void set_nd_data(double *ob,int n)
    {
        for (int i=0;i<n;i++)
        {
            this->Deflection_data[i] = Baseline_monitoring_value - ob[i];
        }
    }

};



#endif // DEFLECTION_SENSOR_H
