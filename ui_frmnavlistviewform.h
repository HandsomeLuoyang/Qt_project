/********************************************************************************
** Form generated from reading UI file 'frmnavlistviewform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
            frmNavListViewForm->setObjectName(QStringLiteral("frmNavListViewForm"));
        frmNavListViewForm->resize(703, 529);
        frmNavListViewForm->setStyleSheet(QLatin1String("#frmNavListViewForm {\n"
"border-image:url(:/v2-ae20c48b3287c9753d9f9e940069f83a.jpg)\n"
"}"));
        horizontalLayout = new QHBoxLayout(frmNavListViewForm);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listView = new NavListView(frmNavListViewForm);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(listView);

        stackedWidget = new QStackedWidget(frmNavListViewForm);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QLatin1String("#stackedWidget { \n"
"border-image: url(:/v2-ae20c48b3287c9753d9f9e940069f83a.jpg); \n"
"} \n"
""));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        verticalLayout = new QVBoxLayout(page1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lab1 = new QLabel(page1);
        lab1->setObjectName(QStringLiteral("lab1"));
        lab1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lab1);

        label_2 = new QLabel(page1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        page2->setStyleSheet(QLatin1String("\n"
"#page2 { \n"
"border-image: url(:/16pic_5274917_b.jpg); \n"
"} "));
        verticalLayout_2 = new QVBoxLayout(page2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lab1_2 = new QLabel(page2);
        lab1_2->setObjectName(QStringLiteral("lab1_2"));
        lab1_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lab1_2);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        verticalLayout_3 = new QVBoxLayout(page3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableView_5 = new QTableView(page3);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));

        verticalLayout_3->addWidget(tableView_5);

        tableView_6 = new QTableView(page3);
        tableView_6->setObjectName(QStringLiteral("tableView_6"));

        verticalLayout_3->addWidget(tableView_6);

        tableView_4 = new QTableView(page3);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));

        verticalLayout_3->addWidget(tableView_4);

        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QStringLiteral("page4"));
        verticalLayout_4 = new QVBoxLayout(page4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lab4 = new QLabel(page4);
        lab4->setObjectName(QStringLiteral("lab4"));
        lab4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lab4);

        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QStringLiteral("page5"));
        page5->setEnabled(true);
        label_3 = new QLabel(page5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 510, 54, 12));
        verticalScrollBar = new QScrollBar(page5);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(565, 60, 17, 148));
        verticalScrollBar->setOrientation(Qt::Vertical);
        slider3 = new QSlider(page5);
        slider3->setObjectName(QStringLiteral("slider3"));
        slider3->setGeometry(QRect(544, 0, 22, 148));
        slider3->setOrientation(Qt::Vertical);
        slider3->setInvertedControls(false);
        slider3->setTickPosition(QSlider::NoTicks);
        verticalScrollBar_2 = new QScrollBar(page5);
        verticalScrollBar_2->setObjectName(QStringLiteral("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(572, 0, 17, 148));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        stackedWidget->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName(QStringLiteral("page6"));
        label_4 = new QLabel(page6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 510, 54, 12));
        gridLayoutWidget_3 = new QWidget(page6);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(0, 30, 551, 481));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page6);
        page7 = new QWidget();
        page7->setObjectName(QStringLiteral("page7"));
        gridLayoutWidget = new QWidget(page7);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 531, 481));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(page7);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 10, 113, 20));
        stackedWidget->addWidget(page7);
        page8 = new QWidget();
        page8->setObjectName(QStringLiteral("page8"));
        pushButton_19 = new QPushButton(page8);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(140, 20, 75, 23));
        lineEdit = new QLineEdit(page8);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 113, 20));
        gridLayoutWidget_2 = new QWidget(page8);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 50, 531, 451));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page8);
        page9 = new QWidget();
        page9->setObjectName(QStringLiteral("page9"));
        label_6 = new QLabel(page9);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 500, 54, 16));
        pushButton_7 = new QPushButton(page9);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 20, 75, 23));
        pushButton_8 = new QPushButton(page9);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(100, 20, 75, 23));
        pushButton_9 = new QPushButton(page9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(190, 20, 75, 23));
        pushButton_10 = new QPushButton(page9);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(280, 20, 75, 23));
        tableView = new QTableView(page9);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 70, 531, 411));
        pushButton_6 = new QPushButton(page9);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 20, 75, 23));
        stackedWidget->addWidget(page9);
        page10 = new QWidget();
        page10->setObjectName(QStringLiteral("page10"));
        pushButton_11 = new QPushButton(page10);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(30, 10, 75, 23));
        pushButton_12 = new QPushButton(page10);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(210, 10, 71, 23));
        pushButton_13 = new QPushButton(page10);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(120, 10, 75, 23));
        pushButton_14 = new QPushButton(page10);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(300, 10, 75, 23));
        tableView_2 = new QTableView(page10);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 40, 551, 491));
        stackedWidget->addWidget(page10);
        page11 = new QWidget();
        page11->setObjectName(QStringLiteral("page11"));
        label_8 = new QLabel(page11);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(260, 500, 54, 12));
        pushButton_15 = new QPushButton(page11);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 10, 75, 23));
        pushButton_16 = new QPushButton(page11);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(100, 10, 75, 23));
        pushButton_17 = new QPushButton(page11);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(190, 10, 75, 23));
        pushButton_18 = new QPushButton(page11);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(280, 10, 75, 23));
        tableView_3 = new QTableView(page11);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(10, 50, 521, 441));
        stackedWidget->addWidget(page11);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(frmNavListViewForm);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(frmNavListViewForm);
    } // setupUi

    void retranslateUi(QWidget *frmNavListViewForm)
    {
        frmNavListViewForm->setWindowTitle(QApplication::translate("frmNavListViewForm", "Form", nullptr));
        lab1->setText(QApplication::translate("frmNavListViewForm", "\344\270\273\347\225\214\351\235\242", nullptr));
        label_2->setText(QApplication::translate("frmNavListViewForm", "\347\254\254\344\270\200\351\241\265", nullptr));
        lab1_2->setText(QApplication::translate("frmNavListViewForm", "\347\254\254\344\272\214\351\241\265", nullptr));
        lab4->setText(QApplication::translate("frmNavListViewForm", "\347\254\254\345\233\233\351\241\265", nullptr));
        label_3->setText(QApplication::translate("frmNavListViewForm", "\347\254\254\344\272\224\351\241\265", nullptr));
        label_4->setText(QApplication::translate("frmNavListViewForm", "\347\254\254\345\205\255\351\241\265", nullptr));
        pushButton_19->setText(QApplication::translate("frmNavListViewForm", "\347\241\256\345\256\232", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("frmNavListViewForm", "\347\254\254\345\207\240\344\270\252\345\233\276\345\203\217", nullptr));
        label_6->setText(QApplication::translate("frmNavListViewForm", "\347\254\254\344\271\235\351\241\265", nullptr));
        pushButton_7->setText(QApplication::translate("frmNavListViewForm", "\345\242\236\345\212\240\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_8->setText(QApplication::translate("frmNavListViewForm", "\345\210\240\351\231\244\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_9->setText(QApplication::translate("frmNavListViewForm", "\344\277\256\346\224\271\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_10->setText(QApplication::translate("frmNavListViewForm", "\346\237\245\346\211\276\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_6->setText(QApplication::translate("frmNavListViewForm", "\345\210\267\346\226\260\346\225\260\346\215\256", nullptr));
        pushButton_11->setText(QApplication::translate("frmNavListViewForm", "\345\242\236\345\212\240\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_12->setText(QApplication::translate("frmNavListViewForm", "\345\210\240\351\231\244\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_13->setText(QApplication::translate("frmNavListViewForm", "\344\277\256\346\224\271\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_14->setText(QApplication::translate("frmNavListViewForm", "\346\237\245\346\211\276\344\274\240\346\204\237\345\231\250", nullptr));
        label_8->setText(QApplication::translate("frmNavListViewForm", "\347\254\254\345\215\201\344\270\200\351\241\265", nullptr));
        pushButton_15->setText(QApplication::translate("frmNavListViewForm", "\345\242\236\345\212\240\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_16->setText(QApplication::translate("frmNavListViewForm", "\345\210\240\351\231\244\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_17->setText(QApplication::translate("frmNavListViewForm", "\344\277\256\346\224\271\344\274\240\346\204\237\345\231\250", nullptr));
        pushButton_18->setText(QApplication::translate("frmNavListViewForm", "\346\237\245\350\257\242\344\274\240\346\204\237\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmNavListViewForm: public Ui_frmNavListViewForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNAVLISTVIEWFORM_H
