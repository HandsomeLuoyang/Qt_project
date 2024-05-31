#include "displacement_sensor1.h"

void displacement_sensor1::set_Monitoring_value(double temp)
{
    this->Monitoring_value=temp;
}
void displacement_sensor1::set_initial_value(double temp)
{
    this->initial_value=temp;
}
void displacement_sensor1::set_displacement_sensor(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5,double initial_value)
{
    Set_Sensor(temp1,temp2,temp3,temp4,temp5);
    this->initial_value=initial_value;
}
double displacement_sensor1::get_displacement_data()
{
    return (this->Monitoring_value>=this->initial_value) ? this->Monitoring_value-this->initial_value : this->initial_value - this->Monitoring_value;
}

double displacement_sensor1::get_initial_value()
{
    return initial_value;
}
