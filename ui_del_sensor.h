/********************************************************************************
** Form generated from reading UI file 'del_sensor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_SENSOR_H
#define UI_DEL_SENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_del_sensor
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *del_sensor)
    {
        if (del_sensor->objectName().isEmpty())
            del_sensor->setObjectName(QStringLiteral("del_sensor"));
        del_sensor->resize(270, 133);
        lineEdit = new QLineEdit(del_sensor);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 30, 191, 20));
        pushButton = new QPushButton(del_sensor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 80, 75, 23));
        pushButton_2 = new QPushButton(del_sensor);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 80, 75, 23));

        retranslateUi(del_sensor);

        QMetaObject::connectSlotsByName(del_sensor);
    } // setupUi

    void retranslateUi(QWidget *del_sensor)
    {
        del_sensor->setWindowTitle(QApplication::translate("del_sensor", "Form", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("del_sensor", "\350\257\267\350\276\223\345\205\245\351\234\200\350\246\201\345\210\240\351\231\244\347\232\204\344\274\240\346\204\237\345\231\250\347\274\226\345\217\267", nullptr));
        pushButton->setText(QApplication::translate("del_sensor", "\347\241\256\345\256\232\345\210\240\351\231\244", nullptr));
        pushButton_2->setText(QApplication::translate("del_sensor", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class del_sensor: public Ui_del_sensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_SENSOR_H
