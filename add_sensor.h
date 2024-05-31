#ifndef ADD_SENSOR_H
#define ADD_SENSOR_H

#include <QWidget>
#include <QDialog>
#include <QAbstractButton>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QList>
#include <QTextStream>
#include <QIODevice>


namespace Ui {
class add_sensor;
}

class add_sensor : public QWidget
{
    Q_OBJECT

public:
    explicit add_sensor(QWidget *parent = nullptr);
    ~add_sensor();
    void celarUserInterface();
    void writeTofile(QString cnt);
    void writeTofile_nd(QString cnt);
    void writeTofile_wy(QString cnt);

signals:
    void Send_add_sensor_back();
    void Send_add_sensor_close();

private slots:

    void on_pushButton_2_clicked();


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::add_sensor *ui;
};

#endif // ADD_SENSOR_H
