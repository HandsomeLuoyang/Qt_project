#include"strain_sensor.h"
#include"deflection_sensor.h"
#include"displacement_sensor.h"


//应变传感器
double strain_sensor::get_strain_data()
{
    return 1000*(this->MeasuringWavelength-this->CentralWavelength)+ 8 * 0.5;
}
void strain_sensor:: set_CentralWavelength(double temp)
{
    CentralWavelength=temp;
}
void strain_sensor::set_MeasuringWavelength(double temp)
{
    MeasuringWavelength=temp;
}
void strain_sensor::set_strain(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5,double CentralWavelength)
{
    Set_Sensor(temp1,temp2,temp3,temp4,temp5);
    this->CentralWavelength=CentralWavelength;

}


//挠度传感器
void deflection_sensor::set_Baseline_monitoring_value(double temp)
{
    this->Baseline_monitoring_value=temp;
}
void deflection_sensor::set_Sensor_monitoring_value(double temp)
{
    this->Sensor_monitoring_value=temp;
}
void deflection_sensor::set_deflection(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5,double Baseline_monitoring_value,double Sensor_monitoring_value,QString DeflectionSensorNumber)
{
    Set_Sensor(temp1,temp2,temp3,temp4,temp5);
    this->Baseline_monitoring_value=Baseline_monitoring_value;
    this->Sensor_monitoring_value=Sensor_monitoring_value;
    this->DeflectionSensorNumber=DeflectionSensorNumber;
}
double deflection_sensor::get_Deflection_data()
{
    return (this->Baseline_monitoring_value>=this->Sensor_monitoring_value)? Baseline_monitoring_value - Sensor_monitoring_value :Sensor_monitoring_value - Baseline_monitoring_value;
}


//位移传感器
void displacement_sensor::set_Monitoring_value(double temp)
{
    this->Monitoring_value=temp;
}
void displacement_sensor::set_initial_value(double temp)
{
    this->initial_value=temp;
}
void displacement_sensor::set_displacement_sensor(QString temp1,QString temp2,QString temp3,QString temp4,QString temp5,double initial_value,double Monitoring_value,QString displacement_SensorNumber)
{
    Set_Sensor(temp1,temp2,temp3,temp4,temp5);
    this->Monitoring_value=Monitoring_value;
    this->initial_value=initial_value;
    this->displacement_SensorNumber=displacement_SensorNumber;
}
double displacement_sensor::get_displacement_data()
{
    return (this->Monitoring_value>=this->initial_value) ? this->Monitoring_value-this->initial_value : this->initial_value - this->Monitoring_value;
}





