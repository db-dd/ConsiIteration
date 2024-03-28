#ifndef HEXAGONBUTTON_H
#define HEXAGONBUTTON_H

#include "QPushButton"


class HexagonButton:public QPushButton
{
public:
    HexagonButton(QString colorOfEdge,QWidget *parent=0,int x=-1,int y=-1,int z=-1);
    virtual ~HexagonButton() {}
    void setColor(int x);
    int getColor();
    int getX();
    int getY();
    int getZ();
protected:
    void paintEvent(QPaintEvent* pEvent);
private:
    //坐标
    int x;
    int y;
    int z;
    //颜色
    int color;//默认为0号颜色，点击一次后变为1号颜色

    QString colorOfEdge;//六边形边的颜色;
};

#endif // HEXAGONBUTTON_H
