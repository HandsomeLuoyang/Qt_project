#ifndef SENSOR_H
#define SENSOR_H

#include <QString>

class sensor
{
protected:
    QString Sensor_name;             //传感器名称
    QString Sensor_specifications;   //规格
    QString Sensor_model;            //型号
    QString Sensor_manufacturer;     //生产厂家
    QString Sensor_date;             //生产日期
public:

    sensor(){}
    ~sensor(){}


    //设置传感器基本信息
    void set_name(QString temp_name)
    {
        this->Sensor_name=temp_name;
    }
    void set_specifications(QString temp_specifications)
    {
        this->Sensor_name=temp_specifications;
    }
    void set_model(QString temp_model)
    {
        this->Sensor_name=temp_model;
    }
    void set_manufacturer(QString temp_manufacturer)
    {
        this->Sensor_name=temp_manufacturer;
    }
    void set_date(QString temp_date)
    {
        this->Sensor_name=temp_date;
    }

    //展示传感器的基本信息
    QString show_name()
    {
        return this->Sensor_name;
    }
    QString show_specifications()
    {
        return this->Sensor_specifications;
    }
    QString show_model()
    {
        return this->Sensor_model;
    }
    QString show_manufacturer()
    {
        return this->Sensor_manufacturer;
    }
    QString show_date()
    {
        return this->Sensor_date;
    }

    void Set_Sensor(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5)
    {
        this->Sensor_name=temp1;
         this->Sensor_specifications=temp2;
         this->Sensor_model=temp3;
        this->Sensor_manufacturer=temp4;
         this->Sensor_date=temp5;
    }

};


#endif // SENSOR_H
