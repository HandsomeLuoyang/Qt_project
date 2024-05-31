#include "del_sensor.h"
#include "ui_del_sensor.h"

del_sensor::del_sensor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::del_sensor)
{
    ui->setupUi(this);
}

del_sensor::~del_sensor()
{
    delete ui;
}
