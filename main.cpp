#include "frmnavlistview.h"
#include "frmnavlistviewform.h"
#include <QApplication>
#include <QTextCodec>
#include <QApplication>

#include <QtCharts/QChartView>//显示图表
#include <QtCharts/QLineSeries>//线系列
#include <QDoubleSpinBox>

QT_CHARTS_USE_NAMESPACE //QtChart名空间

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
        QTextCodec *codec = QTextCodec::codecForName("UTF-8");
        QTextCodec::setCodecForLocale(codec);
        QTextCodec::setCodecForCStrings(codec);
        QTextCodec::setCodecForTr(codec);
#endif
    //frmNavListView w;
    frmNavListViewForm w;
    w.show();




    return a.exec();
}
