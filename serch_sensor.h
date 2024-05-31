#ifndef SERCH_SENSOR_H
#define SERCH_SENSOR_H

#include <QDialog>
#include <QCloseEvent>
#include <QMessageBox>
#include <QAbstractItemModel>
#include <QStandardItemModel>
#include <QWidget>
#include <QStandardItemModel>
namespace Ui {
class serch_sensor;
}

class serch_sensor : public QDialog
{
    Q_OBJECT

public:
    explicit serch_sensor(QWidget *parent = nullptr);
    ~serch_sensor();

    void doquery(int num,QString line_name);

    void Init();

    void set_lines(QStringList lines);



private:
    Ui::serch_sensor *ui;

    QStandardItemModel * mytable1;

    QStringList sensor_lines;     //所需查询的传感器的行的链表
protected:
    virtual void closeEvent(QCloseEvent *event);
private slots:
    void on_pushButton_clicked();


   // void on_tableView_activated(const QModelIndex &index);
};

#endif // SERCH_SENSOR_H
