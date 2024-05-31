#ifndef DEF_DATA_H
#define DEF_DATA_H
#include "qdebug.h"



#include <qstring.h>
class def_sensor
{
private:
    QString name;
    double Baseline_monitoring_value ;       //基准点监测值
    double Sensor_monitoring_value;          //传感器监测值
    double Deflection_data[10];                  //挠度数据
    int sum_data;                            //挠度数据总数

    QString time[15];

    //QString DeflectionSensorNumber;          //应变传感器编号
public:
//    deflection_sensor();
//    ~deflection_sensor();

    void set_name(QString name)
    {
        this->name = name;
    }

    //设置基准点和传感器的检测值
    void set_Baseline_monitoring_value()
    {
        Baseline_monitoring_value = 100.71;
    }
    void set_Sensor_monitoring_value(double temp);
   // void set_deflection(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5,double Baseline_monitoring_value,double Sensor_monitoring_value,QString DeflectionSensorNumber);

    //返回挠度数据
    double* get_Deflection_data()
    {
        return Deflection_data;
    }
    void set_nd_data(double *ob,int n)
    {
        for (int i=0;i<n;i++)
        {
            this->Deflection_data[i] = 100.71 - ob[i];
            //qDebug () <<"ob["<<i<<"]的值为"<<ob[i];
            qDebug () << "Deflection_data["<<i<<"]的值为" <<Deflection_data[i];
        }
    }

    void set_nd_time(QString *ob,int n)
    {
        for (int i = 0 ;i < n ;i++)
        {
            this->time[i] = ob[i];
        }
    }
    QString *get_nd_time()
    {
        return time;
    }





};
#endif // DEF_DATA_H
