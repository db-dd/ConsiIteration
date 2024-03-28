#include "play.h"
#include "ui_play.h"
#include "QVBoxLayout"
#include "QGroupBox"
#include "hexagonbutton.h"
#include "cmath"

Play::Play(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Play)
{
    ui->setupUi(this);

    QVBoxLayout* mainlayout = new QVBoxLayout(this);
    QGroupBox* group = new QGroupBox(this);

    int fixSize = 430;
    group->setFixedSize(fixSize,fixSize);

    int fixWidth = 130;
    int fixHeight = 112;
    HexagonButton* bt = new HexagonButton(group);
    bt->setFixedSize(fixWidth,fixHeight);

    int x = (fixSize - fixWidth)/2;
    int y = (fixSize - fixHeight)/2;
    bt->move(x,y);
    bt->setText("1");

    HexagonButton* bt2 = new HexagonButton(group);
    bt2->setFixedSize(fixWidth,fixHeight);
    bt2->move(x,y-fixHeight);
    bt2->setText("2");

    HexagonButton* bt3 = new HexagonButton(group);
    bt3->setFixedSize(fixWidth,fixHeight);
    bt3->move(x + fixWidth - sqrt(3)*fixHeight/6,y - fixHeight/2);
    bt3->setText("3");

    HexagonButton* bt4 = new HexagonButton(group);
    bt4->setFixedSize(fixWidth,fixHeight);
    bt4->move(x + fixWidth - sqrt(3)*fixHeight/6,y + fixHeight/2);

    HexagonButton* bt5 = new HexagonButton(group);
    bt5->setFixedSize(fixWidth,fixHeight);
    bt5->move(x,y+fixHeight);

    HexagonButton* bt6 = new HexagonButton(group);
    bt6->setFixedSize(fixWidth,fixHeight);
    bt6->move(x - fixWidth + sqrt(3)*fixHeight/6,y + fixHeight/2);

    HexagonButton* bt7 = new HexagonButton(group);
    bt7->setFixedSize(fixWidth,fixHeight);
    bt7->move(x - fixWidth + sqrt(3)*fixHeight/6,y - fixHeight/2);

    mainlayout->addWidget(group);
    setLayout(mainlayout);

}

Play::~Play()
{
    delete ui;
}
