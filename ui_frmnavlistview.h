/********************************************************************************
** Form generated from reading UI file 'frmnavlistview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMNAVLISTVIEW_H
#define UI_FRMNAVLISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "navlistview.h"

QT_BEGIN_NAMESPACE

class Ui_frmNavListView
{
public:
    QGridLayout *gridLayout;
    NavListView *listView3;
    NavListView *listView4;
    NavListView *listView5;
    NavListView *listView1;
    NavListView *listView2;

    void setupUi(QWidget *frmNavListView)
    {
        if (frmNavListView->objectName().isEmpty())
            frmNavListView->setObjectName(QStringLiteral("frmNavListView"));
        frmNavListView->resize(893, 626);
        gridLayout = new QGridLayout(frmNavListView);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listView3 = new NavListView(frmNavListView);
        listView3->setObjectName(QStringLiteral("listView3"));

        gridLayout->addWidget(listView3, 0, 3, 1, 1);

        listView4 = new NavListView(frmNavListView);
        listView4->setObjectName(QStringLiteral("listView4"));

        gridLayout->addWidget(listView4, 0, 4, 1, 1);

        listView5 = new NavListView(frmNavListView);
        listView5->setObjectName(QStringLiteral("listView5"));

        gridLayout->addWidget(listView5, 0, 5, 1, 1);

        listView1 = new NavListView(frmNavListView);
        listView1->setObjectName(QStringLiteral("listView1"));

        gridLayout->addWidget(listView1, 0, 0, 1, 1);

        listView2 = new NavListView(frmNavListView);
        listView2->setObjectName(QStringLiteral("listView2"));

        gridLayout->addWidget(listView2, 0, 1, 1, 1);


        retranslateUi(frmNavListView);

        QMetaObject::connectSlotsByName(frmNavListView);
    } // setupUi

    void retranslateUi(QWidget *frmNavListView)
    {
        frmNavListView->setWindowTitle(QApplication::translate("frmNavListView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmNavListView: public Ui_frmNavListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNAVLISTVIEW_H
