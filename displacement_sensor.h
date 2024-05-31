#ifndef DISPLACEMENT_SENSOR1_H
#define DISPLACEMENT_SENSOR1_H
#include "sensor.h"
#include "qdebug.h"
/*
位移传感器：采用伸缩计传感器，每个传感器均有测量量程即测量下限和上限值，单位cm。
位移监测点：在每个监测点上安装有一个位移传感器，每个测点在安装好传感器后标定该点的伸缩缝初始值，每次采集的数据与初始值之差为位移值，单位cm。

位移数据说明

本监测系统的位移监测共2个监测点，每个监测点安装有1个位移计监测传感器，监测数据存放在“2 位移监测数据.txt”文件中。数据文件的数据含义如下表：
监测年月日	监测时间	传感器编号	监测值	单位
2016/11/22	17:56	800227	0.943	cm
两个传测点的伸缩缝初始值分别为：
800227：初时值为0.98cm;
800225：初始值为0.23cm。
*/

class displacement_sensor_tlh:public sensor
{
private:
    double min_range;                          //测量下限  量程构造函数时 设置
    double max_range;                         //测量上限
    double initial_value;                    //初始值
    double Monitoring_value[10];                //检测值
    double displacement_data[10];               //位移数据
    QString displacement_SensorNumber;     //应变传感器编号

public:
    //位移传感器的量程和初始值由构造函数设置
    displacement_sensor_tlh(double min=0,double max=10,double initial=0.98)
    {
        sensor();
        min_range = min;max_range = max;
        initial_value = initial;
    }
    displacement_sensor_tlh()
    {
        sensor();
    }
 \
    ~displacement_sensor_tlh();


    void set_Monitoring_value(double *temp,int n)
    {
        for (int i = 0;i<n;i++){
            Monitoring_value[i] = temp [i];
            displacement_data[i] = this->initial_value - Monitoring_value[i];


                }
    }
    void set_initial_value(double temp)
    {
        this->initial_value=temp;
    }

    double *get_displacement_data()
    {
        return displacement_data;
    }

    double get_initial_value()
    {
        return initial_value;
    }


    void set_displacement_sensor(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5,double initial_value)
    {
    Set_Sensor(temp1,temp2,temp3,temp4,temp5);
    this->initial_value=initial_value;
    }
};


#endif // DISPLACEMENT_SENSOR_H
