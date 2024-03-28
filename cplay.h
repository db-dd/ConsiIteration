#ifndef CPLAY_H
#define CPLAY_H

#include <QDialog>
#include "hexagonbutton.h"
#include "QLabel"
#include "QVBoxLayout"
#include "QGroupBox"
#include "QComboBox"

namespace Ui {
class CPlay;
}

class CPlay : public QDialog
{
    Q_OBJECT

public:
    explicit CPlay(QWidget *parent = nullptr);//k记录边长
    ~CPlay();
    void createButton(QWidget *parent);
    void calculate();//计算黑块个数并显示
    void changeColor();

    void changeSetting();

    void newGraph();
    void saveGraph();
    void readGraph();
    void answerGraph();
    void isUnique();

private:
    Ui::CPlay *ui; 
    QVBoxLayout* mainlayout;
    QGroupBox* group;
    HexagonButton *button[19][19][19];//最大边长为10
    QLabel *count[3][19];
    int k;
    QString color0,color1,colorOfEdge,colorOfNumber;
    double fixSize,menuSize;
    double fixWidth,fixHeight;

    QLabel *setNumberL;
    QComboBox *setNumber;
    QLabel *setColor0L;
    QComboBox *setColor0;
    QLabel *setColor1L;
    QComboBox *setColor1;
    QLabel *setColorOfEdgeL;
    QComboBox *setColorOfEdge;
    QLabel *setColorOfNumberL;
    QComboBox *setColorOfNumber;
    QPushButton *setChange;

    QPushButton *forNew;
    QPushButton *forSave;
    QPushButton *forRead;
    QPushButton *forAnswer;
    QPushButton *confirmUnique;

    bool flag;//当为true时，当前处于答题状态
    int target[3][19];//答题时用于记录目标值

};

#endif // CPLAY_H
