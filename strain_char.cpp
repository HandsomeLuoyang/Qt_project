#include "strain_char.h"
#include "ui_strain_char.h"

strain_char::strain_char(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::strain_char)
{

    ui->setupUi(this);
    QList<QLineSeries *> m_series;
    QLineSeries *series1 = new QLineSeries();//实例化一个QLineSeries对象
    QLineSeries *series2 = new QLineSeries();//实例化一个QLineSeries对象
    m_series.append(series1);
    m_series.append(series2);
    //设置线条名称
    series1->setName(QString("line " + QString::number(1)));
    series2->setName(QString("line " + QString::number(2)));
    //series->setName(QString("line " + QString::number(m_series.count())));
    //设置线条颜色，如果不设置会给默认颜色
    series1->setColor(QColor(255,0,255));
    series2->setColor(QColor(0,255,255));
    //series1->setBrush(QColor(255,0,255));
    //series1->setPen(QColor(255,0,255));
    //设置是否线条可视
    series1->setVisible(true);
    series2->setVisible(true);
    //点标签是否可视
    series1->setPointLabelsVisible(true);
    series2->setPointLabelsVisible(true);
    //点标签颜色
    series1->setPointLabelsColor(QColor(255,255,255));
    series2->setPointLabelsColor(QColor(255,255,255));
    //点标签字体
    series1->setPointLabelsFont(QFont("微软雅黑"));
    series2->setPointLabelsFont(QFont("微软雅黑"));
    //设置点标签显示格式
    series1->setPointLabelsFormat("(@xPoint,@yPoint)");
    series2->setPointLabelsFormat("(@xPoint,@yPoint)");
    //是否切割边缘点标签，默认为true
    series1->setPointLabelsClipping(false);
    series2->setPointLabelsClipping(true);
    //设置点标签是否可视
    series1->setPointsVisible(true);
    series2->setPointsVisible(true);

    //添加坐标点
    series1->append(0, 6);
    series1->append(2, 4);
    series1->append(3, 8);
    series1->append(7, 4);
    series1->append(10, 5);
    *series1 << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

    series2->append(0, 8);
    series2->append(2, 5);
    series2->append(3, 3);
    series2->append(7, 9);
    series2->append(10, 2);
    *series2 << QPointF(11, 3) << QPointF(13, 8) << QPointF(17, 2) << QPointF(18, 5) << QPointF(20, 7);


    QChart *chart = new QChart();
    chart->setTheme(QChart::ChartThemeBlueCerulean);//设置系统主题
    chart->setAnimationOptions(QChart::AllAnimations);//设置启用或禁用动画
    //chart->setBackgroundBrush(QBrush(QColor(170,170,255)));//设置背景色,主题和背景二选一
    //chart->setDropShadowEnabled(true);//是否背景阴影
    chart->setLocalizeNumbers(true);//数字是否本地化
    //chart->legend()->show();//legend是否显示，show和hide
    chart->addSeries(series1);//添加系列到QChart上
    chart->addSeries(series2);//添加系列到QChart上
    chart->createDefaultAxes();//创建默认轴
    chart->setTitle("Simple line chart example");//设置标题
    chart->setTitleBrush(QBrush(QColor(255,170,255)));//设置标题Brush
    chart->setTitleFont(QFont("微软雅黑"));//设置标题字体

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);//底部对齐
    //chart->legend()->detachFromChart();
    chart->legend()->setBackgroundVisible(true);//设置背景是否可视
    //chart->legend()->setAutoFillBackground(true);//设置背景自动填充
    //chart->legend()->setColor(QColor(255,128,128,128));//设置颜色
    //chart->legend()->setContentsMargins(10,10,10,10);//设置边距left,top,right,bottom
    chart->legend()->setLabelColor(QColor(255,128,255));//设置标签颜色
    chart->legend()->setVisible(true);//设置是否可视
    //chart->legend()->setMaximumHeight(50);
    //chart->legend()->setMaximumWidth(120);
    //chart->legend()->setMaximumSize(10000);
    //chart->legend()->setGeometry(50,50,120,50);//设置几何位置x,y,w,h
    //chart->legend()->setBrush(QBrush(QColor(128,128,128,128)));
    //chart->legend()->setPen(QPen(QColor(192,192, 192,192)));
    chart->legend()->setBorderColor(QColor(255,255,170,185));//设置边框颜色
    QFont font = chart->legend()->font();
    font.setItalic(!font.italic());
    chart->legend()->setFont(font);//设置字体为斜体
    font.setPointSizeF(12);
    chart->legend()->setFont(font);//设置字体大小
    chart->legend()->setFont(QFont("微软雅黑"));//设置字体类型


    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);


    //.setCentralWidget(chartView);
    //w.resize(960, 720);
}

strain_char::~strain_char()
{
    delete ui;
}
