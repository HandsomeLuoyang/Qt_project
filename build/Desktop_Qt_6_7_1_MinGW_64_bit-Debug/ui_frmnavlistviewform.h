/********************************************************************************
** Form generated from reading UI file 'frmnavlistviewform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMNAVLISTVIEWFORM_H
#define UI_FRMNAVLISTVIEWFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "navlistview.h"

QT_BEGIN_NAMESPACE

class Ui_frmNavListViewForm
{
public:
    QHBoxLayout *horizontalLayout;
    NavListView *listView;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout;
    QLabel *lab1;
    QLabel *label_2;
    QWidget *page2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lab1_2;
    QWidget *page3;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView_5;
    QTableView *tableView_6;
    QTableView *tableView_4;
    QWidget *page4;
    QVBoxLayout *verticalLayout_4;
    QLabel *lab4;
    QWidget *page5;
    QLabel *label_3;
    QScrollBar *verticalScrollBar;
    QSlider *slider3;
    QScrollBar *verticalScrollBar_2;
    QWidget *page6;
    QLabel *label_4;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QWidget *page7;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_2;
    QWidget *page8;
    QPushButton *pushButton_19;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QWidget *page9;
    QLabel *label_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QTableView *tableView;
    QPushButton *pushButton_6;
    QWidget *page10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QTableView *tableView_2;
    QWidget *page11;
    QLabel *label_8;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QTableView *tableView_3;

    void setupUi(QWidget *frmNavListViewForm)
    {
        if (frmNavListViewForm->objectName().isEmpty())
            frmNavListViewForm->setObjectName("frmNavListViewForm");
        frmNavListViewForm->resize(703, 529);
        frmNavListViewForm->setStyleSheet(QString::fromUtf8("#frmNavListViewForm {\n"
"border-image:url(:/v2-ae20c48b3287c9753d9f9e940069f83a.jpg)\n"
"}"));
        horizontalLayout = new QHBoxLayout(frmNavListViewForm);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new NavListView(frmNavListViewForm);
        listView->setObjectName("listView");
        listView->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(listView);

        stackedWidget = new QStackedWidget(frmNavListViewForm);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("#stackedWidget { \n"
"border-image: url(:/v2-ae20c48b3287c9753d9f9e940069f83a.jpg); \n"
"} \n"
""));
        page1 = new QWidget();
        page1->setObjectName("page1");
        verticalLayout = new QVBoxLayout(page1);
        verticalLayout->setObjectName("verticalLayout");
        lab1 = new QLabel(page1);
        lab1->setObjectName("lab1");
        lab1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lab1);

        label_2 = new QLabel(page1);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName("page2");
        page2->setStyleSheet(QString::fromUtf8("\n"
"#page2 { \n"
"border-image: url(:/16pic_5274917_b.jpg); \n"
"} "));
        verticalLayout_2 = new QVBoxLayout(page2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lab1_2 = new QLabel(page2);
        lab1_2->setObjectName("lab1_2");
        lab1_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lab1_2);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName("page3");
        verticalLayout_3 = new QVBoxLayout(page3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tableView_5 = new QTableView(page3);
        tableView_5->setObjectName("tableView_5");

        verticalLayout_3->addWidget(tableView_5);

        tableView_6 = new QTableView(page3);
        tableView_6->setObjectName("tableView_6");

        verticalLayout_3->addWidget(tableView_6);

        tableView_4 = new QTableView(page3);
        tableView_4->setObjectName("tableView_4");

        verticalLayout_3->addWidget(tableView_4);

        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName("page4");
        verticalLayout_4 = new QVBoxLayout(page4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        lab4 = new QLabel(page4);
        lab4->setObjectName("lab4");
        lab4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lab4);

        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName("page5");
        page5->setEnabled(true);
        label_3 = new QLabel(page5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 510, 54, 12));
        verticalScrollBar = new QScrollBar(page5);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(565, 60, 17, 148));
        verticalScrollBar->setOrientation(Qt::Vertical);
        slider3 = new QSlider(page5);
        slider3->setObjectName("slider3");
        slider3->setGeometry(QRect(544, 0, 22, 148));
        slider3->setOrientation(Qt::Vertical);
        slider3->setInvertedControls(false);
        slider3->setTickPosition(QSlider::NoTicks);
        verticalScrollBar_2 = new QScrollBar(page5);
        verticalScrollBar_2->setObjectName("verticalScrollBar_2");
        verticalScrollBar_2->setGeometry(QRect(572, 0, 17, 148));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        stackedWidget->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName("page6");
        label_4 = new QLabel(page6);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 510, 54, 12));
        gridLayoutWidget_3 = new QWidget(page6);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(0, 30, 551, 481));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page6);
        page7 = new QWidget();
        page7->setObjectName("page7");
        gridLayoutWidget = new QWidget(page7);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 40, 531, 481));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(page7);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 10, 113, 20));
        stackedWidget->addWidget(page7);
        page8 = new QWidget();
        page8->setObjectName("page8");
        pushButton_19 = new QPushButton(page8);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(140, 20, 75, 23));
        lineEdit = new QLineEdit(page8);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 20, 113, 20));
        gridLayoutWidget_2 = new QWidget(page8);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 50, 531, 451));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page8);
        page9 = new QWidget();
        page9->setObjectName("page9");
        label_6 = new QLabel(page9);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 500, 54, 16));
        pushButton_7 = new QPushButton(page9);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 20, 75, 23));
        pushButton_8 = new QPushButton(page9);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(100, 20, 75, 23));
        pushButton_9 = new QPushButton(page9);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(190, 20, 75, 23));
        pushButton_10 = new QPushButton(page9);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(280, 20, 75, 23));
        tableView = new QTableView(page9);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 70, 531, 411));
        pushButton_6 = new QPushButton(page9);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(370, 20, 75, 23));
        stackedWidget->addWidget(page9);
        page10 = new QWidget();
        page10->setObjectName("page10");
        pushButton_11 = new QPushButton(page10);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(30, 10, 75, 23));
        pushButton_12 = new QPushButton(page10);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(210, 10, 71, 23));
        pushButton_13 = new QPushButton(page10);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(120, 10, 75, 23));
        pushButton_14 = new QPushButton(page10);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(300, 10, 75, 23));
        tableView_2 = new QTableView(page10);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(0, 40, 551, 491));
        stackedWidget->addWidget(page10);
        page11 = new QWidget();
        page11->setObjectName("page11");
        label_8 = new QLabel(page11);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(260, 500, 54, 12));
        pushButton_15 = new QPushButton(page11);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(10, 10, 75, 23));
        pushButton_16 = new QPushButton(page11);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(100, 10, 75, 23));
        pushButton_17 = new QPushButton(page11);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(190, 10, 75, 23));
        pushButton_18 = new QPushButton(page11);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(280, 10, 75, 23));
        tableView_3 = new QTableView(page11);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(10, 50, 521, 441));
        stackedWidget->addWidget(page11);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(frmNavListViewForm);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(frmNavListViewForm);
    } // setupUi

    void retranslateUi(QWidget *frmNavListViewForm)
    {
        frmNavListViewForm->setWindowTitle(QCoreApplication::translate("frmNavListViewForm", "Form", nullptr));
        lab1->setText(QCoreApplication::translate("frmNavListViewForm", "\344\270\273\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("frmNavListViewForm", "\347\254\254\344\270\200\351\241\265", nullptr));
        lab1_2->setText(QCoreApplication::translate("frmNavListViewForm", "\347\254\254\344\272\214\351\241\265", nullptr));
        lab4->setText(QCoreApplication::translate("frmNavListViewForm", "\347\254\254\345\233\233\351\241\265", nullptr));
        label_3->setText(QCoreApplication::translate("frmNavListViewForm", "\347\254\254\344\272\224\351\241\265", nullptr));
        label_4->setText(QCoreApplication::translate("frmNavListViewForm", "\347\254\254\345\205\255\351\241\265", nullptr));
        pushButton_19->setText(QCoreApplication::translate("frmNavListViewForm", "\347\241\256\345\256\232", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("frmNavListViewForm", "\347\254\254\345\207\240\344\270\252\345\233\276\345\203\217", nullptr));
        label_6->setText(QCoreApplication::translate("frmNavListViewForm", "\347\254\254\344\271\235\351\241\265", nullptr));
        pushButton_7->setText(QCoreApplication::translate("frmNavListViewForm", "\345\242\236\345\212\240\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_8->setText(QCoreApplication::translate("frmNavListViewForm", "\345\210\240\351\231\244\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_9->setText(QCoreApplication::translate("frmNavListViewForm", "\344\277\256\346\224\271\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_10->setText(QCoreApplication::translate("frmNavListViewForm", "\346\237\245\346\211\276\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_6->setText(QCoreApplication::translate("frmNavListViewForm", "\345\210\267\346\226\260\346\225\260\346\215\256", nullptr));
        pushButton_11->setText(QCoreApplication::translate("frmNavListViewForm", "\345\242\236\345\212\240\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_12->setText(QCoreApplication::translate("frmNavListViewForm", "\345\210\240\351\231\244\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_13->setText(QCoreApplication::translate("frmNavListViewForm", "\344\277\256\346\224\271\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_14->setText(QCoreApplication::translate("frmNavListViewForm", "\346\237\245\346\211\276\344\274\240\346\204\237\345\231\250", nullptr));
        label_8->setText(QCoreApplication::translate("frmNavListViewForm", "\347\254\254\345\215\201\344\270\200\351\241\265", nullptr));
        pushButton_15->setText(QCoreApplication::translate("frmNavListViewForm", "\345\242\236\345\212\240\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_16->setText(QCoreApplication::translate("frmNavListViewForm", "\345\210\240\351\231\244\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_17->setText(QCoreApplication::translate("frmNavListViewForm", "\344\277\256\346\224\271\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_18->setText(QCoreApplication::translate("frmNavListViewForm", "\346\237\245\350\257\242\344\274\240\346\204\237\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmNavListViewForm: public Ui_frmNavListViewForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNAVLISTVIEWFORM_H
