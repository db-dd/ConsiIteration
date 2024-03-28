#include "hexagonbutton.h"
#include "QStylePainter"
#include "QStyleOptionButton"

HexagonButton::HexagonButton(QString colorOfEdge,QWidget *parent,int x,int y,int z):QPushButton(parent),x(x),y(y),z(z)
{
    color = 0;//初始颜色默认为0号颜色
    this->colorOfEdge = colorOfEdge;
}

void HexagonButton::paintEvent(QPaintEvent *pEvent)
{
        Q_UNUSED(pEvent)
        QStylePainter p(this);
        QStyleOptionButton option;
        initStyleOption(&option);
        QRectF rectF = rect();
        QVector<QPointF> points;
        points.append(rectF.topLeft() + QPointF(0.25*rectF.width(), 0));
        points.append(rectF.topRight() + QPointF(1, 0) - QPointF(0.25*rectF.width(), 0));
        points.append((rectF.topRight() + QPointF(1, 0) + rectF.bottomRight() + QPointF(1, 1))*0.5);
        points.append(rectF.bottomRight() + QPointF(1, 1) - QPointF(0.25*rectF.width(), 0));
        points.append(rectF.bottomLeft() + QPointF(0, 1) + QPointF(0.25*rectF.width(), 0));
        points.append((rectF.topLeft() + rectF.bottomLeft() + QPointF(0, 1))*0.5);
        points.append(points.first());
        QPointF pos = QPointF(rectF.topLeft() + QPointF(0.25*rectF.width(), 0));
        QPointF pos2 = QPointF(rectF.topRight() + QPointF(1, 0) - QPointF(0.25*rectF.width(), 0));
        QPointF pos3 = QPointF((rectF.topRight() + QPointF(1, 0) + rectF.bottomRight() + QPointF(1, 1))*0.5);
        QPointF pos4 = QPointF(rectF.bottomRight() + QPointF(1, 1) - QPointF(0.25*rectF.width(), 0));
        QPointF pos5 = QPointF(rectF.bottomLeft() + QPointF(0, 1) + QPointF(0.25*rectF.width(), 0));
        QPointF pos6 = QPointF((rectF.topLeft() + rectF.bottomLeft() + QPointF(0, 1))*0.5);
        QPolygonF polygonCustom(points);

        QPainterPath paintPath;
        paintPath.addPolygon(polygonCustom);

        p.setClipPath(paintPath);
        p.setRenderHint(QPainter::Antialiasing, true);
        p.drawControl(QStyle::CE_PushButton, option);
        QPen pen(QColor(this->colorOfEdge));
        pen.setWidth(3);
        p.setPen(pen);

        //pos
        QLineF line1(pos, pos2);
        QLineF line2(pos2, pos3);
        QLineF line3(pos3, pos4);
        QLineF line4(pos4, pos5);
        QLineF line5(pos5, pos6);
        QLineF line6(pos6, pos);


        p.drawLine(line1);
        p.drawLine(line2);
        p.drawLine(line3);
        p.drawLine(line4);
        p.drawLine(line5);
        p.drawLine(line6);
}

void HexagonButton::setColor(int x){
    color = x;
}

int HexagonButton::getColor(){
    return color;
}

int HexagonButton::getX(){
    return x;
}

int HexagonButton::getY(){
    return y;
}

int HexagonButton::getZ(){
    return z;
}
