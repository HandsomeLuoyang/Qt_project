/********************************************************************************
** Form generated from reading UI file 'add_sensor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_SENSOR_H
#define UI_ADD_SENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_sensor
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *le_name_2;
    QSpacerItem *horizontalSpacer_11;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *le_name_3;
    QSpacerItem *horizontalSpacer_12;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *le_name_4;
    QSpacerItem *horizontalSpacer_13;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *le_name_5;
    QSpacerItem *horizontalSpacer_14;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *le_name_6;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *le_name_7;
    QSpacerItem *horizontalSpacer_16;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QLineEdit *le_name_8;
    QSpacerItem *horizontalSpacer_17;

    void setupUi(QWidget *add_sensor)
    {
        if (add_sensor->objectName().isEmpty())
            add_sensor->setObjectName("add_sensor");
        add_sensor->resize(287, 377);
        layoutWidget = new QWidget(add_sensor);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 40, 272, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(12);
        font.setBold(false);
        label_8->setFont(font);

        horizontalLayout_7->addWidget(label_8);

        le_name_2 = new QLineEdit(layoutWidget);
        le_name_2->setObjectName("le_name_2");
        QFont font1;
        font1.setPointSize(12);
        le_name_2->setFont(font1);
        le_name_2->setClearButtonEnabled(true);

        horizontalLayout_7->addWidget(le_name_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        horizontalLayout_7->setStretch(1, 6);
        layoutWidget_2 = new QWidget(add_sensor);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 80, 272, 24));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        label_9->setFont(font2);

        horizontalLayout_9->addWidget(label_9);

        le_name_3 = new QLineEdit(layoutWidget_2);
        le_name_3->setObjectName("le_name_3");
        le_name_3->setFont(font1);
        le_name_3->setClearButtonEnabled(true);

        horizontalLayout_9->addWidget(le_name_3);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 6);
        layoutWidget_3 = new QWidget(add_sensor);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(0, 120, 272, 24));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName("label_10");
        label_10->setFont(font2);

        horizontalLayout_10->addWidget(label_10);

        le_name_4 = new QLineEdit(layoutWidget_3);
        le_name_4->setObjectName("le_name_4");
        le_name_4->setFont(font1);
        le_name_4->setClearButtonEnabled(true);

        horizontalLayout_10->addWidget(le_name_4);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 6);
        layoutWidget_4 = new QWidget(add_sensor);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(0, 160, 272, 24));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_4);
        label_11->setObjectName("label_11");
        label_11->setFont(font2);

        horizontalLayout_11->addWidget(label_11);

        le_name_5 = new QLineEdit(layoutWidget_4);
        le_name_5->setObjectName("le_name_5");
        le_name_5->setFont(font1);
        le_name_5->setClearButtonEnabled(true);

        horizontalLayout_11->addWidget(le_name_5);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        layoutWidget_5 = new QWidget(add_sensor);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(0, 200, 272, 24));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_5);
        label_12->setObjectName("label_12");
        label_12->setFont(font2);

        horizontalLayout_12->addWidget(label_12);

        le_name_6 = new QLineEdit(layoutWidget_5);
        le_name_6->setObjectName("le_name_6");
        le_name_6->setFont(font1);
        le_name_6->setClearButtonEnabled(true);

        horizontalLayout_12->addWidget(le_name_6);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_15);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 6);
        pushButton = new QPushButton(add_sensor);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 340, 75, 23));
        pushButton_2 = new QPushButton(add_sensor);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 340, 75, 23));
        pushButton_3 = new QPushButton(add_sensor);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 340, 75, 23));
        layoutWidget_6 = new QWidget(add_sensor);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(0, 240, 297, 24));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_6);
        label_13->setObjectName("label_13");
        label_13->setFont(font2);

        horizontalLayout_13->addWidget(label_13);

        le_name_7 = new QLineEdit(layoutWidget_6);
        le_name_7->setObjectName("le_name_7");
        le_name_7->setFont(font1);
        le_name_7->setClearButtonEnabled(true);

        horizontalLayout_13->addWidget(le_name_7);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_16);

        horizontalLayout_13->setStretch(1, 6);
        layoutWidget_7 = new QWidget(add_sensor);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(0, 280, 297, 24));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_7);
        label_15->setObjectName("label_15");
        label_15->setFont(font2);

        horizontalLayout_14->addWidget(label_15);

        le_name_8 = new QLineEdit(layoutWidget_7);
        le_name_8->setObjectName("le_name_8");
        le_name_8->setFont(font1);
        le_name_8->setClearButtonEnabled(true);

        horizontalLayout_14->addWidget(le_name_8);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_17);

        horizontalLayout_14->setStretch(1, 6);

        retranslateUi(add_sensor);

        QMetaObject::connectSlotsByName(add_sensor);
    } // setupUi

    void retranslateUi(QWidget *add_sensor)
    {
        add_sensor->setWindowTitle(QCoreApplication::translate("add_sensor", "Form", nullptr));
        label_8->setText(QCoreApplication::translate("add_sensor", "\344\274\240\346\204\237\345\231\250\347\274\226\345\217\267\357\274\232", nullptr));
        le_name_2->setPlaceholderText(QCoreApplication::translate("add_sensor", "\350\257\267\350\276\223\345\205\245\344\274\240\346\204\237\345\231\250\345\220\215\347\247\260", nullptr));
        label_9->setText(QCoreApplication::translate("add_sensor", "\350\247\204\346\240\274\357\274\232", nullptr));
        le_name_3->setPlaceholderText(QCoreApplication::translate("add_sensor", "\350\257\267\350\276\223\345\205\245\350\247\204\346\240\274", nullptr));
        label_10->setText(QCoreApplication::translate("add_sensor", "\345\236\213\345\217\267\357\274\232", nullptr));
        le_name_4->setPlaceholderText(QCoreApplication::translate("add_sensor", "\350\257\267\350\276\223\345\205\245\345\236\213\345\217\267", nullptr));
        label_11->setText(QCoreApplication::translate("add_sensor", "\347\224\237\344\272\247\345\216\202\345\256\266\357\274\232", nullptr));
        le_name_5->setPlaceholderText(QCoreApplication::translate("add_sensor", "\350\257\267\350\276\223\345\205\245\347\224\237\344\272\247\345\216\202\345\256\266", nullptr));
        label_12->setText(QCoreApplication::translate("add_sensor", "\347\224\237\344\272\247\346\227\245\346\234\237\357\274\232", nullptr));
        le_name_6->setPlaceholderText(QCoreApplication::translate("add_sensor", "\350\257\267\350\276\223\345\205\245\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        pushButton->setText(QCoreApplication::translate("add_sensor", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add_sensor", "\347\241\256\350\256\244", nullptr));
        pushButton_3->setText(QCoreApplication::translate("add_sensor", "\351\200\200\345\207\272", nullptr));
        label_13->setText(QCoreApplication::translate("add_sensor", "\346\263\242\351\225\277/\346\243\200\346\265\213\345\200\274/\345\210\235\345\200\274\357\274\232", nullptr));
        le_name_7->setPlaceholderText(QCoreApplication::translate("add_sensor", "\350\257\267\350\276\223\345\205\245\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        label_15->setText(QCoreApplication::translate("add_sensor", "\345\215\225\344\275\215\357\274\232", nullptr));
        le_name_8->setPlaceholderText(QCoreApplication::translate("add_sensor", "\350\257\267\350\276\223\345\205\245\345\215\225\344\275\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_sensor: public Ui_add_sensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_SENSOR_H
