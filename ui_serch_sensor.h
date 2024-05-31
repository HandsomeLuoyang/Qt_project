/********************************************************************************
** Form generated from reading UI file 'serch_sensor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERCH_SENSOR_H
#define UI_SERCH_SENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serch_sensor
{
public:
    QTableView *tableView;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *serch_sensor)
    {
        if (serch_sensor->objectName().isEmpty())
            serch_sensor->setObjectName(QStringLiteral("serch_sensor"));
        serch_sensor->resize(450, 368);
        tableView = new QTableView(serch_sensor);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 120, 431, 211));
        comboBox = new QComboBox(serch_sensor);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 70, 69, 22));
        lineEdit = new QLineEdit(serch_sensor);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 70, 113, 20));
        pushButton = new QPushButton(serch_sensor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 70, 75, 23));

        retranslateUi(serch_sensor);

        QMetaObject::connectSlotsByName(serch_sensor);
    } // setupUi

    void retranslateUi(QWidget *serch_sensor)
    {
        serch_sensor->setWindowTitle(QApplication::translate("serch_sensor", "Form", nullptr));
        comboBox->setItemText(0, QApplication::translate("serch_sensor", "\347\274\226\345\217\267", nullptr));
        comboBox->setItemText(1, QApplication::translate("serch_sensor", "\345\236\213\345\217\267", nullptr));
        comboBox->setItemText(2, QApplication::translate("serch_sensor", "\347\224\237\344\272\247\345\216\202\345\256\266", nullptr));
        comboBox->setItemText(3, QApplication::translate("serch_sensor", "\346\263\242\351\225\277/\344\274\270\347\274\251\345\200\274/\345\210\235\345\200\274", nullptr));

        pushButton->setText(QApplication::translate("serch_sensor", "serch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serch_sensor: public Ui_serch_sensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERCH_SENSOR_H
