#ifndef DISPLACEMENT_DATA_H
#define DISPLACEMENT_DATA_H

#include <qstring.h>
#include <QDebug>

class dis_Data
{
private:
    double initial_value;                    //初始值
    double Monitoring_value[10];                //检测值
    double displacement_data[10];               //位移数据
    QString displacement_SensorNumber;     //应变传感器编号

public:

    void set_initial_value(double cp)
    {
        this->initial_value = cp;
    }

    void set_dis_data(double *ob,int n)
    {
        for (int i = 0;i < n; i++)
        {
            this->Monitoring_value[i] = ob[i];
            this->displacement_data[i] = initial_value - Monitoring_value[i];
        }
        qDebug() << "位移最终计算值为：";
        for (int i = 0; i<5 ;i++)
            qDebug () << this->displacement_data[i];
    }

    double *get_dis_data()
    {
        return displacement_data;
    }

    void set_dis_num(QString num)
    {
        this->displacement_SensorNumber = num;
    }

};




#endif // DISPLACEMENT_DATA_H
