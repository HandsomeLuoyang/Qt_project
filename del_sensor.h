#ifndef DEL_SENSOR_H
#define DEL_SENSOR_H

#include <QWidget>
#include "serch_sensor.h"



namespace Ui {
class del_sensor;
}

class del_sensor : public QWidget
{
    Q_OBJECT

public:
    explicit del_sensor(QWidget *parent = nullptr);
    ~del_sensor();






private:
    Ui::del_sensor *ui;
};

#endif // DEL_SENSOR_H
