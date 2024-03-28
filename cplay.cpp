#include "cplay.h"
#include "ui_cplay.h"
#include "cmath"
#include "QMessageBox"
#include <fstream>
#include <string>
#include <QFileDialog>
#include <vector>
//#include <iostream>
using namespace std;

CPlay::CPlay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CPlay)
{
    ui->setupUi(this);

    this->setWindowTitle("ConsiIteration");

    string tempColor[4];
    fstream f;
    f.open("setting.txt",ios::in);
    f>>k;
    f>>tempColor[0]>>tempColor[1]>>tempColor[2]>>tempColor[3];
    f.close();
    color0 = QString::fromStdString(tempColor[0]);
    color1 = QString::fromStdString(tempColor[1]);
    colorOfEdge = QString::fromStdString(tempColor[2]);
    colorOfNumber = QString::fromStdString(tempColor[3]);

    flag = false;

    mainlayout = new QVBoxLayout(this);
    group = new QGroupBox(this);

    fixSize = 1000;
    menuSize = 200;
    group->setFixedSize(fixSize+menuSize,fixSize);

    fixWidth = fixSize/(2*k-1);
    fixHeight = 112*fixWidth/130;

    createButton(group);

    calculate();

    QString colorForChoose[] = {"black","white","darkGray","gray","lightGray",
                                "red","green","blue","cyan","magenta","yellow",
                                "darkRed","darkGreen","darkBlue","darkCyan","darkMagenta"};
    setNumberL = new QLabel(group);
    setNumberL->setFixedSize(50,15);
    setNumberL->setText("边长值:");
    setNumberL->move(10,200);
    setNumber = new QComboBox(group);
    setNumber->setFixedSize(100,15);
    setNumber->addItem("");
    for(int i=2;i<=10;i++) setNumber->addItem(QString::number(i));
    setNumber->move(120,200);

    setColor0L = new QLabel(group);
    setColor0L->setFixedSize(100,15);
    setColor0L->setText("底色：(原"+color0+")");
    setColor0L->move(10,220);
    setColor0 = new QComboBox(group);
    setColor0->setFixedSize(100,15);
    setColor0->addItem("");
    for(int i=0;i<16;i++) setColor0->addItem(colorForChoose[i]);
    setColor0->move(120,220);

    setColor1L = new QLabel(group);
    setColor1L->setFixedSize(100,15);
    setColor1L->setText("变色：(原"+color1+")");
    setColor1L->move(10,240);
    setColor1 = new QComboBox(group);
    setColor1->setFixedSize(100,15);
    setColor1->addItem("");
    for(int i=0;i<16;i++) setColor1->addItem(colorForChoose[i]);
    setColor1->move(120,240);

    setColorOfEdgeL = new QLabel(group);
    setColorOfEdgeL->setFixedSize(100,15);
    setColorOfEdgeL->setText("按钮边缘色彩：");
    setColorOfEdgeL->move(10,260);
    setColorOfEdge = new QComboBox(group);
    setColorOfEdge->setFixedSize(100,15);
    setColorOfEdge->addItem("");
    for(int i=0;i<16;i++) setColorOfEdge->addItem(colorForChoose[i]);
    setColorOfEdge->move(120,260);

    setColorOfNumberL = new QLabel(group);
    setColorOfNumberL->setFixedSize(100,15);
    setColorOfNumberL->setText("提示数字颜色：");
    setColorOfNumberL->move(10,280);
    setColorOfNumber = new QComboBox(group);
    setColorOfNumber->setFixedSize(100,15);
    setColorOfNumber->addItem("");
    for(int i=0;i<16;i++) setColorOfNumber->addItem(colorForChoose[i]);
    setColorOfNumber->move(120,280);

    setChange = new QPushButton(group);
    setChange->setText("确认配置");
    setChange->setFixedSize(75,25);
    setChange->move(60,300);
    connect(setChange,&QPushButton::clicked,this,&CPlay::changeSetting);

    forSave = new QPushButton(group);
    forSave->setFixedSize(75,25);
    forSave->setText("初始化");
    forSave->move(10,10);
    connect(forSave,&QPushButton::clicked,this,&CPlay::newGraph);

    confirmUnique = new QPushButton(group);
    confirmUnique->setFixedSize(75,25);
    confirmUnique->setText("确认唯一性");
    confirmUnique->move(10,45);
    connect(confirmUnique,&QPushButton::clicked,this,&CPlay::isUnique);

    forSave = new QPushButton(group);
    forSave->setFixedSize(75,25);
    forSave->setText("保存");
    forSave->move(10,80);
    connect(forSave,&QPushButton::clicked,this,&CPlay::saveGraph);

    forRead = new QPushButton(group);
    forRead->setFixedSize(75,25);
    forRead->setText("读取");
    forRead->move(10,115);
    connect(forRead,&QPushButton::clicked,this,&CPlay::readGraph);

    forAnswer = new QPushButton(group);
    forAnswer->setFixedSize(75,25);
    forAnswer->setText("答题");
    forAnswer->move(10,150);
    connect(forAnswer,&QPushButton::clicked,this,&CPlay::answerGraph);

    mainlayout->addWidget(group);
    setLayout(mainlayout);
}

CPlay::~CPlay()
{
    delete ui;
}

void CPlay::createButton(QWidget *parent){

    button[k-1][k-1][k-1] = new HexagonButton(colorOfEdge,parent,k-1,k-1,k-1);
    button[k-1][k-1][k-1]->setFixedSize(fixWidth,fixHeight);

    int x = (fixSize - fixWidth)/2 + menuSize;
    int y = (fixSize - fixHeight)/2;
    button[k-1][k-1][k-1]->move(x,y);
    button[k-1][k-1][k-1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
    button[k-1][k-1][k-1]->show();
    //button[k-1][k-1][k-1]->setText(QString::number(k-1)+","+QString::number(k-1)+","+QString::number(k-1));
    connect(button[k-1][k-1][k-1],&QPushButton::clicked,this,&CPlay::changeColor);

    //先搭建中间一列
    for(int i=0;i<k-1;i++){
        //上方的
        int y1 = k-2-i;
        int z1 = k+i;
        button[k-1][y1][z1] = new HexagonButton(colorOfEdge,parent,k-1,y1,z1);
        button[k-1][y1][z1]->setFixedSize(fixWidth,fixHeight);
        button[k-1][y1][z1]->move(x,y-(i+1)*fixHeight);
        button[k-1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        button[k-1][y1][z1]->show();
        //button[k-1][y1][z1]->setText(QString::number(k-1)+","+QString::number(y1)+","+QString::number(z1));
        connect(button[k-1][y1][z1],&QPushButton::clicked,this,&CPlay::changeColor);
        //下方的
        int y2 = k+i;
        int z2 = k-2-i;
        button[k-1][y2][z2] = new HexagonButton(colorOfEdge,parent,k-1,y2,z2);
        button[k-1][y2][z2]->setFixedSize(fixWidth,fixHeight);
        button[k-1][y2][z2]->move(x,y+(i+1)*fixHeight);
        button[k-1][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        button[k-1][y2][z2]->show();
        //button[k-1][y2][z2]->setText(QString::number(k-1)+","+QString::number(y2)+","+QString::number(z2));
        connect(button[k-1][y2][z2],&QPushButton::clicked,this,&CPlay::changeColor);
    }

    //从中间向左下、右下两端端发散
    for(int i=0;i<2*k-2;i++){//中间列的最下方按钮无法继续发散
        //中间按钮的坐标，用于定位
        int positionX = x;
        int positionY = y+(i-k+1)*fixHeight;
        //向左下延伸
        int x1=k-1,y1=i,z1=2*k-2-i;
        for(int j=1;j<k;j++){
            x1++;
            z1--;
            if(z1<0) break;
            button[x1][y1][z1] = new HexagonButton(colorOfEdge,parent,x1,y1,z1);
            button[x1][y1][z1]->setFixedSize(fixWidth,fixHeight);
            button[x1][y1][z1]->move(positionX-j*(fixWidth-sqrt(3)*fixHeight/6), positionY+j*fixHeight/2);
            button[x1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
            button[x1][y1][z1]->show();
            //button[x1][y1][z1]->setText(QString::number(x1)+","+QString::number(y1)+","+QString::number(z1));
            connect(button[x1][y1][z1],&QPushButton::clicked,this,&CPlay::changeColor);
        }

        //向右下延伸
        int x2=k-1,y2=i,z2=2*k-2-i;
        for(int j=1;j<k;j++){
            x2--;
            y2++;
            if(y2>2*k-2) break;
            button[x2][y2][z2] = new HexagonButton(colorOfEdge,parent,x2,y2,z2);
            button[x2][y2][z2]->setFixedSize(fixWidth,fixHeight);
            button[x2][y2][z2]->move(positionX+j*(fixWidth-sqrt(3)*fixHeight/6), positionY+j*fixHeight/2);
            button[x2][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
            button[x2][y2][z2]->show();
            //button[x2][y2][z2]->setText(QString::number(x2)+","+QString::number(y2)+","+QString::number(z2));
            connect(button[x2][y2][z2],&QPushButton::clicked,this,&CPlay::changeColor);
        }

    }

}

void CPlay::calculate(){
    int posX,posY;
    QPalette palette;
    QFont ft;
    int fontSize = 25-k;
    ft.setPointSize(fontSize);

    int temp[3][2*k-1];
    for(int i=0;i<3;i++)
        for(int j=0;j<2*k-1;j++)
            temp[i][j]=0;

    //横向
    posX = fixSize/2 - (k-1)*(fixWidth-sqrt(3)*fixHeight/6) + menuSize;
    posY = (fixSize-fixHeight)/2 + (k-1)*fixHeight/2 +fixHeight+fontSize/2;
    palette.setColor(QPalette::WindowText,colorOfNumber);
    for(int i=2*k-2;i>=k-1;i--){//不动点x
        int sum=0;
        for(int j=0;j<=3*k-3-i;j++)//y
            sum += button[i][j][3*k-3-i-j]->getColor();
        temp[0][2*k-2-i] = sum;
        if(!flag){//非答题模式时，更新显示
            count[0][2*k-2-i] = new QLabel(this);
            count[0][2*k-2-i]->setText(QString::number(sum));
            count[0][2*k-2-i]->move(posX,posY);
            count[0][2*k-2-i]->setPalette(palette);
            count[0][2*k-2-i]->setFont(ft);
            count[0][2*k-2-i]->setFixedSize(fontSize*1.5,fontSize);
            count[0][2*k-2-i]->show();
        }
        posX += fixWidth-sqrt(3)*fixHeight/6+1;
        posY += fixHeight/2 +1;
    }
    posY -= fixHeight;
    for(int i=k-2;i>=0;i--){//不动点x
        int sum=0;
        for(int j=k-1-i;j<=2*k-2;j++)//y
            sum += button[i][j][3*k-3-i-j]->getColor();
        temp[0][2*k-2-i] = sum;
        if(!flag){
            count[0][2*k-2-i] = new QLabel(this);
            count[0][2*k-2-i]->setText(QString::number(sum));
            count[0][2*k-2-i]->move(posX,posY);
            count[0][2*k-2-i]->setPalette(palette);
            count[0][2*k-2-i]->setFont(ft);
            count[0][2*k-2-i]->setFixedSize(fontSize*1.5,fontSize);
            count[0][2*k-2-i]->show();
        }
        posX += fixWidth-sqrt(3)*fixHeight/6+1;
        posY -= fixHeight/2;
    }

    //左上
    posX = fixSize/2 - (k-1)*(fixWidth-sqrt(3)*fixHeight/6)-fixWidth/4 + menuSize - sqrt(3)*fixHeight/11;
    posY = (fixSize-fixHeight)/2 + (k-1)*fixHeight/2 + fixHeight/4;
    for(int i=0;i<k;i++){//不动点z
        int sum = 0;
        for(int j=2*k-2;j>=k-1-i;j--)//x
            sum += button[j][3*k-3-i-j][i]->getColor();
        temp[1][i] = sum;
        if(!flag){
            count[1][i] = new QLabel(this);
            count[1][i]->setText(QString::number(sum));
            count[1][i]->move(posX,posY);
            count[1][i]->setPalette(palette);
            count[1][i]->setFont(ft);
            count[1][i]->setFixedSize(fontSize*1.5,fontSize);
            count[1][i]->show();
        }
        posY -= fixHeight - 1;
    }
    posX += fixWidth-sqrt(3)*fixHeight/6;
    posY += fixHeight/2;
    for(int i=k;i<=2*k-2;i++){//不动点z
        int sum = 0;
        for(int j=3*k-3-i;j>=0;j--)//x
            sum += button[j][3*k-3-i-j][i]->getColor();
        temp[1][i] = sum;
        if(!flag){
            count[1][i] = new QLabel(this);
            count[1][i]->setText(QString::number(sum));
            count[1][i]->move(posX,posY);
            count[1][i]->setPalette(palette);
            count[1][i]->setFont(ft);
            count[1][i]->setFixedSize(fontSize*1.5,fontSize);
            count[1][i]->show();
        }
        posX += fixWidth-sqrt(3)*fixHeight/6;
        posY -= fixHeight/2;
    }

    //右上
    posX = fixSize/2 + fixWidth/2 + menuSize;
    posY = (fixSize-fixHeight)/2 - (k-1)*fixHeight + fixHeight/4;
    for(int i=0;i<k;i++){//不动点y
        int sum = 0;
        for(int j=2*k-2;j>=k-1-i;j--)//z
            sum += button[3*k-3-i-j][i][j]->getColor();
        temp[2][i] = sum;
        if(!flag){
            count[2][i] = new QLabel(this);
            count[2][i]->setText(QString::number(sum));
            count[2][i]->move(posX,posY);
            count[2][i]->setPalette(palette);
            count[2][i]->setFont(ft);
            count[2][i]->setFixedSize(fontSize*1.5,fontSize);
            count[2][i]->show();
        }
        posX += fixWidth-sqrt(3)*fixHeight/6;
        posY += fixHeight/2;
    }
    posX -= fixWidth-sqrt(3)*fixHeight/6;
    posY += fixHeight/2;
    for(int i=k;i<=2*k-2;i++){//不动点y
        int sum = 0;
        for(int j=3*k-3-i;j>=0;j--)//z
            sum += button[3*k-3-i-j][i][j]->getColor();
        temp[2][i] = sum;
        if(!flag){
            count[2][i] = new QLabel(this);
            count[2][i]->setText(QString::number(sum));
            count[2][i]->move(posX,posY);
            count[2][i]->setPalette(palette);
            count[2][i]->setFont(ft);
            count[2][i]->setFixedSize(fontSize*1.5,fontSize);
            count[2][i]->show();
        }
        posY += fixHeight;
    }

//    int check = 0;//检测是否为全0
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2*k-1;j++)
//            check += target[i][j];
//    }
//    if(check == 0) return;

    if(flag){//答题模式
        //比较
        for(int i=0;i<3;i++)
            for(int j=0;j<2*k-1;j++){
                if(temp[i][j]!=target[i][j])
                    return;
            }

        QMessageBox::information(this,"success","成功达到目标");
    }
}

void CPlay::changeColor(){
    int x = ((HexagonButton*)sender())->getX();
    int y = ((HexagonButton*)sender())->getY();
    int z = ((HexagonButton*)sender())->getZ();
    if(button[x][y][z]->getColor() == 0){
        button[x][y][z]->setColor(1);
        button[x][y][z]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
    }else{
        button[x][y][z]->setColor(0);
        button[x][y][z]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
    }

    int x1=x,y1=y-1,z1=z+1;//上
    int x2=x,y2=y+1,z2=z-1;//下
    int x3=x+1,y3=y-1,z3=z;//左上
    int x4=x-1,y4=y+1,z4=z;//右下
    int x5=x+1,y5=y,z5=z-1;//左下
    int x6=x-1,y6=y,z6=z+1;//右上

    if(x1>=0 && x1<=2*k-2 && y1>=0 && y1<=2*k-2 && z1>=0 && z1<=2*k-2){
        if(button[x1][y1][z1]->getColor() == 0){
            button[x1][y1][z1]->setColor(1);
            button[x1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
        }else{
            button[x1][y1][z1]->setColor(0);
            button[x1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        }
    }

    if(x2>=0 && x2<=2*k-2 && y2>=0 && y2<=2*k-2 && z2>=0 && z2<=2*k-2){
        if(button[x2][y2][z2]->getColor() == 0){
            button[x2][y2][z2]->setColor(1);
            button[x2][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
        }else{
            button[x2][y2][z2]->setColor(0);
            button[x2][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        }
    }

    if(x3>=0 && x3<=2*k-2 && y3>=0 && y3<=2*k-2 && z3>=0 && z3<=2*k-2){
        if(button[x3][y3][z3]->getColor() == 0){
            button[x3][y3][z3]->setColor(1);
            button[x3][y3][z3]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
        }else{
            button[x3][y3][z3]->setColor(0);
            button[x3][y3][z3]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        }
    }

    if(x4>=0 && x4<=2*k-2 && y4>=0 && y4<=2*k-2 && z4>=0 && z4<=2*k-2){
        if(button[x4][y4][z4]->getColor() == 0){
            button[x4][y4][z4]->setColor(1);
            button[x4][y4][z4]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
        }else{
            button[x4][y4][z4]->setColor(0);
            button[x4][y4][z4]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        }
    }

    if(x5>=0 && x5<=2*k-2 && y5>=0 && y5<=2*k-2 && z5>=0 && z5<=2*k-2){
        if(button[x5][y5][z5]->getColor() == 0){
            button[x5][y5][z5]->setColor(1);
            button[x5][y5][z5]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
        }else{
            button[x5][y5][z5]->setColor(0);
            button[x5][y5][z5]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        }
    }

    if(x6>=0 && x6<=2*k-2 && y6>=0 && y6<=2*k-2 && z6>=0 && z6<=2*k-2){
        if(button[x6][y6][z6]->getColor() == 0){
            button[x6][y6][z6]->setColor(1);
            button[x6][y6][z6]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
        }else{
            button[x6][y6][z6]->setColor(0);
            button[x6][y6][z6]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        }
    }

    if(!flag){//处于非答题模式时，要实时更新
        for(int i=0;i<3;i++)
            for(int j=0;j<2*k-1;j++)
                delete count[i][j];
    }

    calculate();
}

void CPlay::changeSetting(){
    if(flag){
        QMessageBox::warning(this,"warning","答题模式禁止修改配置");
        return;
    }

    QString kTmp = setNumber->currentText();
    QString color0Tmp = setColor0->currentText();
    QString color1Tmp = setColor1->currentText();
    QString colorOfEdgeTmp = setColorOfEdge->currentText();
    QString colorOfNumberTmp = setColorOfNumber->currentText();

    fstream f;

    if(kTmp == ""){//只改变颜色
        if(color0Tmp == "" && color1Tmp ==color0)//只改变变色
            QMessageBox::warning(this,"waring","禁止设置为同色");
        else if(color1Tmp == "" && color0Tmp == color1)
            QMessageBox::warning(this,"waring","禁止设置为同色");
        else if(color0Tmp == color1Tmp && color0Tmp!="")
            QMessageBox::warning(this,"waring","禁止设置为同色");
        else{
            if(color0Tmp != "") color0 = color0Tmp;
            if(color1Tmp != "") color1 = color1Tmp;
            if(colorOfEdgeTmp != "") colorOfEdge = colorOfEdgeTmp;
            if(colorOfNumberTmp != "") colorOfNumber = colorOfNumberTmp;

            int saveColor[19][19][19];
            saveColor[k-1][k-1][k-1] = button[k-1][k-1][k-1]->getColor();
            delete button[k-1][k-1][k-1];
            for(int i=0;i<k-1;i++){
                int y1 = k-2-i;
                int z1 = k+i;
                saveColor[k-1][y1][z1] = button[k-1][y1][z1]->getColor();
                delete button[k-1][y1][z1];
                int y2 = k+i;
                int z2 = k-2-i;
                saveColor[k-1][y2][z2] = button[k-1][y2][z2]->getColor();
                delete button[k-1][y2][z2];
            }
            for(int i=0;i<2*k-2;i++){
                int x1=k-1,y1=i,z1=2*k-2-i;
                for(int j=1;j<k;j++){
                    x1++;
                    z1--;
                    if(z1<0) break;
                    saveColor[x1][y1][z1] = button[x1][y1][z1]->getColor();
                    delete button[x1][y1][z1];
                }
                int x2=k-1,y2=i,z2=2*k-2-i;
                for(int j=1;j<k;j++){
                    x2--;
                    y2++;
                    if(y2>2*k-2) break;
                    saveColor[x2][y2][z2] = button[x2][y2][z2]->getColor();
                    delete button[x2][y2][z2];
                }
            }
            createButton(group);
            button[k-1][k-1][k-1]->setColor(saveColor[k-1][k-1][k-1]);
            for(int i=0;i<k-1;i++){
                int y1 = k-2-i;
                int z1 = k+i;
                button[k-1][y1][z1]->setColor(saveColor[k-1][y1][z1]);
                int y2 = k+i;
                int z2 = k-2-i;
                button[k-1][y2][z2]->setColor(saveColor[k-1][y2][z2]);
            }
            for(int i=0;i<2*k-2;i++){
                int x1=k-1,y1=i,z1=2*k-2-i;
                for(int j=1;j<k;j++){
                    x1++;
                    z1--;
                    if(z1<0) break;
                    button[x1][y1][z1]->setColor(saveColor[x1][y1][z1]);
                }
                int x2=k-1,y2=i,z2=2*k-2-i;
                for(int j=1;j<k;j++){
                    x2--;
                    y2++;
                    if(y2>2*k-2) break;
                    button[x2][y2][z2]->setColor(saveColor[x2][y2][z2]);
                }
            }

            QString saveNumber[3][19];//仅改变颜色，应将数值暂存
            for(int i=0;i<3;i++)
                for(int j=0;j<2*k-1;j++){
                    saveNumber[i][j] = count[i][j]->text();
                    delete count[i][j];
                }
            calculate();
            for(int i=0;i<3;i++)
                for(int j=0;j<2*k-1;j++){
                    count[i][j]->setText(saveNumber[i][j]);
                }


            if(button[k-1][k-1][k-1]->getColor() == 0)
                button[k-1][k-1][k-1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
            else
                button[k-1][k-1][k-1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
            for(int i=0;i<k-1;i++){
                int y1 = k-2-i;
                int z1 = k+i;
                if(button[k-1][y1][z1]->getColor() == 0)
                    button[k-1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
                else
                    button[k-1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
                int y2 = k+i;
                int z2 = k-2-i;
                if(button[k-1][y2][z2]->getColor() == 0)
                    button[k-1][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
                else
                    button[k-1][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
            }
            //从中间向左下、右下两端端发散
            for(int i=0;i<2*k-2;i++){//中间列的最下方按钮无法继续发散
                int x1=k-1,y1=i,z1=2*k-2-i;
                for(int j=1;j<k;j++){
                    x1++;
                    z1--;
                    if(z1<0) break;
                    if(button[x1][y1][z1]->getColor() == 0)
                        button[x1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
                    else
                        button[x1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
                }
                int x2=k-1,y2=i,z2=2*k-2-i;
                for(int j=1;j<k;j++){
                    x2--;
                    y2++;
                    if(y2>2*k-2) break;
                    if(button[x2][y2][z2]->getColor() == 0)
                        button[x2][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
                    else
                        button[x2][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
                }
            }
            delete setColor0L;
            setColor0L = new QLabel(group);
            setColor0L->setFixedSize(100,15);
            setColor0L->setText("底色：(原"+color0+")");
            setColor0L->move(10,220);
            setColor0L->show();
            delete setColor1L;
            setColor1L = new QLabel(group);
            setColor1L->setFixedSize(100,15);
            setColor1L->setText("变色：(原"+color1+")");
            setColor1L->move(10,240);
            setColor1L->show();
            setColor0->setCurrentIndex(0);
            setColor1->setCurrentIndex(0);
            setColorOfEdge->setCurrentIndex(0);
            setColorOfNumber->setCurrentIndex(0);
            f.open("setting.txt",ios::out);
            f<<k<<'\n'<<color0.toStdString()<<'\n'<<color1.toStdString()
                <<'\n'<<colorOfEdge.toStdString()<<'\n'<<colorOfNumber.toStdString();
        }
    }else{//边数变化，直接进行重置
        flag = false;
        if(color0Tmp == "" && color1Tmp ==color0)//只改变变色
            QMessageBox::warning(this,"waring","禁止设置为同色");
        else if(color1Tmp == "" && color0Tmp == color1)
            QMessageBox::warning(this,"waring","禁止设置为同色");
        else if(color0Tmp == color1Tmp && color0Tmp != "" && color1Tmp != "")
            QMessageBox::warning(this,"waring","禁止设置为同色");
        else{
            //删除原有按钮
            delete button[k-1][k-1][k-1];
            for(int i=0;i<k-1;i++){
                int y1 = k-2-i;
                int z1 = k+i;
                delete button[k-1][y1][z1];
                int y2 = k+i;
                int z2 = k-2-i;
                delete button[k-1][y2][z2];
            }
            for(int i=0;i<2*k-2;i++){
                int x1=k-1,y1=i,z1=2*k-2-i;
                for(int j=1;j<k;j++){
                    x1++;
                    z1--;
                    if(z1<0) break;
                    delete button[x1][y1][z1];
                }
                int x2=k-1,y2=i,z2=2*k-2-i;
                for(int j=1;j<k;j++){
                    x2--;
                    y2++;
                    if(y2>2*k-2) break;
                    delete button[x2][y2][z2];
                }
            }
            for(int i=0;i<3;i++)
                for(int j=0;j<2*k-1;j++)
                    delete count[i][j];

            k = kTmp.toInt();
            if(color0Tmp != "") color0 = color0Tmp;
            if(color1Tmp != "") color1 = color1Tmp;
            if(colorOfEdgeTmp != "") colorOfEdge = colorOfEdgeTmp;
            if(colorOfNumberTmp != "") colorOfNumber = colorOfNumberTmp;

            fixWidth = fixSize/(2*k-1);
            fixHeight = 112*fixWidth/130;
            createButton(group);
            calculate();

            delete setColor0L;
            setColor0L = new QLabel(group);
            setColor0L->setFixedSize(100,15);
            setColor0L->setText("底色：(原"+color0+")");
            setColor0L->move(10,220);
            setColor0L->show();
            delete setColor1L;
            setColor1L = new QLabel(group);
            setColor1L->setFixedSize(100,15);
            setColor1L->setText("变色：(原"+color1+")");
            setColor1L->move(10,240);
            setColor1L->show();
            setColor0->setCurrentIndex(0);
            setColor1->setCurrentIndex(0);
            setNumber->setCurrentIndex(0);
            setColorOfEdge->setCurrentIndex(0);
            setColorOfNumber->setCurrentIndex(0);
            f.open("setting.txt",ios::out);
            f<<k<<'\n'<<color0.toStdString()<<'\n'<<color1.toStdString()
               <<'\n'<<colorOfEdge.toStdString()<<'\n'<<colorOfNumber.toStdString();
        }
    }
    f.close();
}

void CPlay::saveGraph(){
    QString str = QFileDialog::getSaveFileName(
                this,tr("保存文件"),".txt",tr("*.txt"));
//    regex pattern("*.txt");
//    if(!regex_match(str.toStdString(),pattern)){
//        QMessageBox::warning(this,"错误","应保存为txt文本");
//        return;
//    }
    fstream f(str.toLocal8Bit(),ios::out);//不用toString，那个访问中文路径有问题
    if(!f.is_open()) {
        QMessageBox::warning(this,"warning","未保存题目");
        return;
    }
    f<<k<<'\n'<<color0.toStdString()<<'\n'<<color1.toStdString()<<'\n'
        <<colorOfEdge.toStdString()<<'\n'<<colorOfNumber.toStdString()<<'\n';
    //目标值
    for(int i=0;i<3;i++)
        for(int j=0;j<2*k-1;j++)
            f<<count[i][j]->text().toInt()<<" ";
    f<<'\n';

    //每个六边形的颜色
    f<<button[k-1][k-1][k-1]->getColor()<<" ";
    for(int i=0;i<k-1;i++){
        int y1 = k-2-i;
        int z1 = k+i;
        f<<button[k-1][y1][z1]->getColor()<<" ";
        int y2 = k+i;
        int z2 = k-2-i;
        f<<button[k-1][y2][z2]->getColor()<<" ";
    }
    for(int i=0;i<2*k-2;i++){
        int x1=k-1,y1=i,z1=2*k-2-i;
        for(int j=1;j<k;j++){
            x1++;
            z1--;
            if(z1<0) break;
            f<<button[x1][y1][z1]->getColor()<<" ";
        }
        int x2=k-1,y2=i,z2=2*k-2-i;
        for(int j=1;j<k;j++){
            x2--;
            y2++;
            if(y2>2*k-2) break;
            f<<button[x2][y2][z2]->getColor()<<" ";
        }
    }
    f.close();
}

void CPlay::readGraph(){
    QString str = QFileDialog::getOpenFileName(
                this,tr("读取文件"),"",tr("*.txt"));

    fstream f(str.toLocal8Bit(),ios::in);
    if(!f.is_open()) {
        QMessageBox::warning(this,"warning","未读取题目");
        return;
    }

    //删除原有按钮
    delete button[k-1][k-1][k-1];
    for(int i=0;i<k-1;i++){
        int y1 = k-2-i;
        int z1 = k+i;
        delete button[k-1][y1][z1];
        int y2 = k+i;
        int z2 = k-2-i;
        delete button[k-1][y2][z2];
    }
    for(int i=0;i<2*k-2;i++){
        int x1=k-1,y1=i,z1=2*k-2-i;
        for(int j=1;j<k;j++){
            x1++;
            z1--;
            if(z1<0) break;
            delete button[x1][y1][z1];
        }
        int x2=k-1,y2=i,z2=2*k-2-i;
        for(int j=1;j<k;j++){
            x2--;
            y2++;
            if(y2>2*k-2) break;
            delete button[x2][y2][z2];
        }
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<2*k-1;j++)
            delete count[i][j];

    string colorTmp[4];
    f>>k>>colorTmp[0]>>colorTmp[1]>>colorTmp[2]>>colorTmp[3];
    color0 = QString::fromStdString(colorTmp[0]);
    color1 = QString::fromStdString(colorTmp[1]);
    colorOfEdge = QString::fromStdString(colorTmp[2]);
    colorOfNumber = QString::fromStdString(colorTmp[3]);

    fixWidth = fixSize/(2*k-1);
    fixHeight = 112*fixWidth/130;

    //初始化目标
    for(int i=0;i<3;i++)
        for(int j=0;j<2*k-1;j++)
            f>>target[i][j];
    int posX,posY;
    QPalette palette;
    QFont ft;
    int fontSize = 25-k;
    ft.setPointSize(fontSize);

    //横向
    posX = fixSize/2 - (k-1)*(fixWidth-sqrt(3)*fixHeight/6) + menuSize;
    posY = (fixSize-fixHeight)/2 + (k-1)*fixHeight/2 + fixHeight + fontSize/2;
    palette.setColor(QPalette::WindowText,colorOfNumber);
    for(int i=2*k-2;i>=k-1;i--){
        count[0][2*k-2-i] = new QLabel(this);
        count[0][2*k-2-i]->setText(QString::number(target[0][2*k-2-i]));
        count[0][2*k-2-i]->move(posX,posY);
        count[0][2*k-2-i]->setPalette(palette);
        count[0][2*k-2-i]->setFont(ft);
        count[0][2*k-2-i]->setFixedSize(1.5*fontSize,fontSize);
        count[0][2*k-2-i]->show();
        posX += fixWidth-sqrt(3)*fixHeight/6+1;
        posY += fixHeight/2+1;
    }
    posY -= fixHeight;
    for(int i=k-2;i>=0;i--){
            count[0][2*k-2-i] = new QLabel(this);
            count[0][2*k-2-i]->setText(QString::number(target[0][2*k-2-i]));
            count[0][2*k-2-i]->move(posX,posY);
            count[0][2*k-2-i]->setPalette(palette);
            count[0][2*k-2-i]->setFont(ft);
            count[0][2*k-2-i]->setFixedSize(1.5*fontSize,fontSize);
            count[0][2*k-2-i]->show();
        posX += fixWidth-sqrt(3)*fixHeight/6+1;
        posY -= fixHeight/2;
    }

    //左上
    posX = fixSize/2 - (k-1)*(fixWidth-sqrt(3)*fixHeight/6) - fixWidth/4 + menuSize - sqrt(3)*fixHeight/11;
    posY = (fixSize-fixHeight)/2 + (k-1)*fixHeight/2 + fixHeight/4;
    for(int i=0;i<k;i++){
            count[1][i] = new QLabel(this);
            count[1][i]->setText(QString::number(target[1][i]));
            count[1][i]->move(posX,posY);
            count[1][i]->setPalette(palette);
            count[1][i]->setFont(ft);
            count[1][i]->setFixedSize(1.5*fontSize,fontSize);
            count[1][i]->show();
        posY -= fixHeight-1;
    }
    posX += fixWidth-sqrt(3)*fixHeight/6;
    posY += fixHeight/2;
    for(int i=k;i<=2*k-2;i++){
            count[1][i] = new QLabel(this);
            count[1][i]->setText(QString::number(target[1][i]));
            count[1][i]->move(posX,posY);
            count[1][i]->setPalette(palette);
            count[1][i]->setFont(ft);
            count[1][i]->setFixedSize(1.5*fontSize,fontSize);
            count[1][i]->show();
        posX += fixWidth-sqrt(3)*fixHeight/6;
        posY -= fixHeight/2;
    }

    //右上
    posX = fixSize/2 + fixWidth/2 + menuSize ;
    posY = (fixSize-fixHeight)/2 - (k-1)*fixHeight + fixHeight/4;
    for(int i=0;i<k;i++){
            count[2][i] = new QLabel(this);
            count[2][i]->setText(QString::number(target[2][i]));
            count[2][i]->move(posX,posY);
            count[2][i]->setPalette(palette);
            count[2][i]->setFont(ft);
            count[2][i]->setFixedSize(fontSize*1.5,fontSize);
            count[2][i]->show();
        posX += fixWidth-sqrt(3)*fixHeight/6;
        posY += fixHeight/2;
    }
    posX -= fixWidth-sqrt(3)*fixHeight/6;
    posY += fixHeight/2;
    for(int i=k;i<=2*k-2;i++){
            count[2][i] = new QLabel(this);
            count[2][i]->setText(QString::number(target[2][i]));
            count[2][i]->move(posX,posY);
            count[2][i]->setPalette(palette);
            count[2][i]->setFont(ft);
            count[2][i]->setFixedSize(fontSize*1.5,fontSize);
            count[2][i]->show();
        posY += fixHeight;
    }

    //初始化按钮
    int temp;

    button[k-1][k-1][k-1] = new HexagonButton(colorOfEdge,group,k-1,k-1,k-1);
    button[k-1][k-1][k-1]->setFixedSize(fixWidth,fixHeight);
    int x = (fixSize - fixWidth)/2 + menuSize;
    int y = (fixSize - fixHeight)/2;
    button[k-1][k-1][k-1]->move(x,y);
    f>>temp;
    button[k-1][k-1][k-1]->setColor(temp);
    if(button[k-1][k-1][k-1]->getColor() == 0)
        button[k-1][k-1][k-1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
    else
        button[k-1][k-1][k-1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
    button[k-1][k-1][k-1]->show();
    //button[k-1][k-1][k-1]->setText(QString::number(k-1)+","+QString::number(k-1)+","+QString::number(k-1));
    connect(button[k-1][k-1][k-1],&QPushButton::clicked,this,&CPlay::changeColor);

    //先搭建中间一列
    for(int i=0;i<k-1;i++){
        //上方的
        int y1 = k-2-i;
        int z1 = k+i;
        f>>temp;
        button[k-1][y1][z1] = new HexagonButton(colorOfEdge,group,k-1,y1,z1);
        button[k-1][y1][z1]->setFixedSize(fixWidth,fixHeight);
        button[k-1][y1][z1]->move(x,y-(i+1)*fixHeight);
        button[k-1][y1][z1]->setColor(temp);
        if(button[k-1][y1][z1]->getColor() == 0)
            button[k-1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        else
            button[k-1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
        button[k-1][y1][z1]->show();
        //button[k-1][y1][z1]->setText(QString::number(k-1)+","+QString::number(y1)+","+QString::number(z1));
        connect(button[k-1][y1][z1],&QPushButton::clicked,this,&CPlay::changeColor);
        //下方的
        int y2 = k+i;
        int z2 = k-2-i;
        f>>temp;
        button[k-1][y2][z2] = new HexagonButton(colorOfEdge,group,k-1,y2,z2);
        button[k-1][y2][z2]->setFixedSize(fixWidth,fixHeight);
        button[k-1][y2][z2]->move(x,y+(i+1)*fixHeight);
        button[k-1][y2][z2]->setColor(temp);
        if(button[k-1][y2][z2]->getColor() == 0)
            button[k-1][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
        else
            button[k-1][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
        button[k-1][y2][z2]->show();
        //button[k-1][y2][z2]->setText(QString::number(k-1)+","+QString::number(y2)+","+QString::number(z2));
        connect(button[k-1][y2][z2],&QPushButton::clicked,this,&CPlay::changeColor);
    }

    //从中间向左下、右下两端端发散
    for(int i=0;i<2*k-2;i++){//中间列的最下方按钮无法继续发散
        //中间按钮的坐标，用于定位
        int positionX = x;
        int positionY = y+(i-k+1)*fixHeight;
        //向左下延伸
        int x1=k-1,y1=i,z1=2*k-2-i;
        for(int j=1;j<k;j++){
            x1++;
            z1--;
            if(z1<0) break;
            button[x1][y1][z1] = new HexagonButton(colorOfEdge,group,x1,y1,z1);
            button[x1][y1][z1]->setFixedSize(fixWidth,fixHeight);
            button[x1][y1][z1]->move(positionX-j*(fixWidth-sqrt(3)*fixHeight/6), positionY+j*fixHeight/2);
            f>>temp;
            button[x1][y1][z1]->setColor(temp);
            if(button[x1][y1][z1]->getColor() == 0)
                button[x1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
            else
                button[x1][y1][z1]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
            button[x1][y1][z1]->show();
            //button[x1][y1][z1]->setText(QString::number(x1)+","+QString::number(y1)+","+QString::number(z1));
            connect(button[x1][y1][z1],&QPushButton::clicked,this,&CPlay::changeColor);
        }

        //向右下延伸
        int x2=k-1,y2=i,z2=2*k-2-i;
        for(int j=1;j<k;j++){
            x2--;
            y2++;
            if(y2>2*k-2) break;
            button[x2][y2][z2] = new HexagonButton(colorOfEdge,group,x2,y2,z2);
            button[x2][y2][z2]->setFixedSize(fixWidth,fixHeight);
            button[x2][y2][z2]->move(positionX+j*(fixWidth-sqrt(3)*fixHeight/6), positionY+j*fixHeight/2);
            f>>temp;
            button[x2][y2][z2]->setColor(temp);
            if(button[x2][y2][z2]->getColor() == 0)
                button[x2][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color0));
            else
                button[x2][y2][z2]->setStyleSheet(QString("QPushButton{background:%1;}").arg(color1));
            button[x2][y2][z2]->show();
            //button[x2][y2][z2]->setText(QString::number(x2)+","+QString::number(y2)+","+QString::number(z2));
            connect(button[x2][y2][z2],&QPushButton::clicked,this,&CPlay::changeColor);
        }

    }
    f.close();

    delete setColor0L;
    setColor0L = new QLabel(group);
    setColor0L->setFixedSize(100,15);
    setColor0L->setText("底色：(原"+color0+")");
    setColor0L->move(10,220);
    setColor0L->show();
    delete setColor1L;
    setColor1L = new QLabel(group);
    setColor1L->setFixedSize(100,15);
    setColor1L->setText("变色：(原"+color1+")");
    setColor1L->move(10,240);
    setColor1L->show();
    setColor0->setCurrentIndex(0);
    setColor1->setCurrentIndex(0);
    setNumber->setCurrentIndex(0);

    flag = false;
}

void CPlay::answerGraph(){
    QString str = QFileDialog::getOpenFileName(
                this,tr("读取文件"),"",tr("*.txt"));
    fstream f(str.toLocal8Bit(),ios::in);
    if(!f.is_open()) {
        QMessageBox::warning(this,"warning","未进行答题");
        return;
    }

    //删除原有按钮
    delete button[k-1][k-1][k-1];
    for(int i=0;i<k-1;i++){
        int y1 = k-2-i;
        int z1 = k+i;
        delete button[k-1][y1][z1];
        int y2 = k+i;
        int z2 = k-2-i;
        delete button[k-1][y2][z2];
    }
    for(int i=0;i<2*k-2;i++){
        int x1=k-1,y1=i,z1=2*k-2-i;
        for(int j=1;j<k;j++){
            x1++;
            z1--;
            if(z1<0) break;
            delete button[x1][y1][z1];
        }
        int x2=k-1,y2=i,z2=2*k-2-i;
        for(int j=1;j<k;j++){
            x2--;
            y2++;
            if(y2>2*k-2) break;
            delete button[x2][y2][z2];
        }
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<2*k-1;j++)
            delete count[i][j];

    string colorTmp[4];
    f>>k>>colorTmp[0]>>colorTmp[1]>>colorTmp[2]>>colorTmp[3];
    color0 = QString::fromStdString(colorTmp[0]);
    color1 = QString::fromStdString(colorTmp[1]);
    colorOfEdge = QString::fromStdString(colorTmp[2]);
    colorOfNumber = QString::fromStdString(colorTmp[3]);

    fixWidth = fixSize/(2*k-1);
    fixHeight = 112*fixWidth/130;

    createButton(group);

    //初始化目标
    for(int i=0;i<3;i++)
        for(int j=0;j<2*k-1;j++)
            f>>target[i][j];
    f.close();

    int posX,posY;
    QPalette palette;
    QFont ft;
    int fontSize = 25-k;
    ft.setPointSize(fontSize);

    //横向
    posX = fixSize/2 - (k-1)*(fixWidth-sqrt(3)*fixHeight/6) + menuSize;
    posY = (fixSize-fixHeight)/2+ (k-1)*fixHeight/2 + fixHeight + fontSize/2;
    palette.setColor(QPalette::WindowText,colorOfNumber);
    for(int i=2*k-2;i>=k-1;i--){
        count[0][2*k-2-i] = new QLabel(this);
        count[0][2*k-2-i]->setText(QString::number(target[0][i]));
        count[0][2*k-2-i]->move(posX,posY);
        count[0][2*k-2-i]->setPalette(palette);
        count[0][2*k-2-i]->setFont(ft);
        count[0][2*k-2-i]->setFixedSize(fontSize*1.5,fontSize);
        count[0][2*k-2-i]->show();
        posX += fixWidth-sqrt(3)*fixHeight/6+1;
        posY += fixHeight/2+1;
    }
    posY -= fixHeight;
    for(int i=k-2;i>=0;i--){
            count[0][2*k-2-i] = new QLabel(this);
            count[0][2*k-2-i]->setText(QString::number(target[0][i]));
            count[0][2*k-2-i]->move(posX,posY);
            count[0][2*k-2-i]->setPalette(palette);
            count[0][2*k-2-i]->setFont(ft);
            count[0][2*k-2-i]->setFixedSize(fontSize*1.5,fontSize);
            count[0][2*k-2-i]->show();
        posX += fixWidth-sqrt(3)*fixHeight/6+1;
        posY -= fixHeight/2;
    }

    //左上
    posX = fixSize/2 - (k-1)*(fixWidth-sqrt(3)*fixHeight/6) - fixWidth/4 + menuSize - sqrt(3)*fixHeight/11;
    posY = (fixSize-fixHeight)/2 + (k-1)*fixHeight/2 + fixHeight/4;
    for(int i=0;i<k;i++){
            count[1][i] = new QLabel(this);
            count[1][i]->setText(QString::number(target[1][i]));
            count[1][i]->move(posX,posY);
            count[1][i]->setPalette(palette);
            count[1][i]->setFont(ft);
            count[1][i]->setFixedSize(fontSize*1.5,fontSize);
            count[1][i]->show();
        posY -= fixHeight-1;
    }
    posX += fixWidth-sqrt(3)*fixHeight/6;
    posY += fixHeight/2;
    for(int i=k;i<=2*k-2;i++){
            count[1][i] = new QLabel(this);
            count[1][i]->setText(QString::number(target[1][i]));
            count[1][i]->move(posX,posY);
            count[1][i]->setPalette(palette);
            count[1][i]->setFont(ft);
            count[1][i]->setFixedSize(fontSize*1.5,fontSize);
            count[1][i]->show();
        posX += fixWidth-sqrt(3)*fixHeight/6;
        posY -= fixHeight/2;
    }

    //右上
    posX = fixSize/2 + fixWidth/2 + menuSize;
    posY = (fixSize-fixHeight)/2 - (k-1)*fixHeight + fixHeight/4;
    for(int i=0;i<k;i++){
            count[2][i] = new QLabel(this);
            count[2][i]->setText(QString::number(target[2][i]));
            count[2][i]->move(posX,posY);
            count[2][i]->setPalette(palette);
            count[2][i]->setFont(ft);
            count[2][i]->setFixedSize(fontSize*1.5,fontSize);
            count[2][i]->show();
        posX += fixWidth-sqrt(3)*fixHeight/6;
        posY += fixHeight/2;
    }
    posX -= fixWidth-sqrt(3)*fixHeight/6;
    posY += fixHeight/2;
    for(int i=k;i<=2*k-2;i++){
            count[2][i] = new QLabel(this);
            count[2][i]->setText(QString::number(target[2][i]));
            count[2][i]->move(posX,posY);
            count[2][i]->setPalette(palette);
            count[2][i]->setFont(ft);
            count[2][i]->setFixedSize(fontSize*1.5,fontSize);
            count[2][i]->show();
        posY += fixHeight;
    }

    delete setColor0L;
    setColor0L = new QLabel(group);
    setColor0L->setFixedSize(100,15);
    setColor0L->setText("底色：(原"+color0+")");
    setColor0L->move(10,220);
    setColor0L->show();
    delete setColor1L;
    setColor1L = new QLabel(group);
    setColor1L->setFixedSize(100,15);
    setColor1L->setText("变色：(原"+color1+")");
    setColor1L->move(10,240);
    setColor1L->show();
    setColor0->setCurrentIndex(0);
    setColor1->setCurrentIndex(0);
    setNumber->setCurrentIndex(0);

    flag = true;

}

void CPlay::newGraph(){
    //删除原有按钮
    delete button[k-1][k-1][k-1];
    for(int i=0;i<k-1;i++){
        int y1 = k-2-i;
        int z1 = k+i;
        delete button[k-1][y1][z1];
        int y2 = k+i;
        int z2 = k-2-i;
        delete button[k-1][y2][z2];
    }
    for(int i=0;i<2*k-2;i++){
        int x1=k-1,y1=i,z1=2*k-2-i;
        for(int j=1;j<k;j++){
            x1++;
            z1--;
            if(z1<0) break;
            delete button[x1][y1][z1];
        }
        int x2=k-1,y2=i,z2=2*k-2-i;
        for(int j=1;j<k;j++){
            x2--;
            y2++;
            if(y2>2*k-2) break;
            delete button[x2][y2][z2];
        }
    }
    for(int i=0;i<3;i++)
        for(int j=0;j<2*k-1;j++)
            delete count[i][j];

    string tempColor[4];
    fstream f;
    f.open("setting.txt",ios::out);
    f<<4<<'\n';
    f<<"white"<<'\n'<<"black"<<'\n'<<"green"<<"\n"<<"red";
    f.close();
    k=4;
    color0 = "white";
    color1 = "black";
    colorOfEdge = "green";
    colorOfNumber = "red";

    flag = false;

    fixWidth = fixSize/(2*k-1);
    fixHeight = 112*fixWidth/130;

    createButton(group);

    calculate();

    delete setColor0L;
    setColor0L = new QLabel(group);
    setColor0L->setFixedSize(100,15);
    setColor0L->setText("底色：(原"+color0+")");
    setColor0L->move(10,220);
    setColor0L->show();
    delete setColor1L;
    setColor1L = new QLabel(group);
    setColor1L->setFixedSize(100,15);
    setColor1L->setText("变色：(原"+color1+")");
    setColor1L->move(10,240);
    setColor1L->show();
    setColor0->setCurrentIndex(0);
    setColor1->setCurrentIndex(0);
    setNumber->setCurrentIndex(0);
}

void CPlay::isUnique(){
    if(flag) {
        QMessageBox::warning(this,"warning","答题模式禁止此操作");
        return;
    }
    int numOfAnswer = 0;//用于记录解的个数

    //在不考虑块与块的关联性的前提下，计算解的个数
    //创建一个三维数组，用来对应各个按钮
    int positionOfButton[19][19][19];
    for(int i=0;i<19;i++)
        for(int j=0;j<19;j++)
            for(int k=0;k<19;k++)
                positionOfButton[i][j][k]=0;
    //创建2维数组一个用于组合数的构建，两个用于验证
    int sumOfButtonOfLight[3][19];
    for(int i=0;i<3;i++)
        for(int j=0;j<19;j++)
            sumOfButtonOfLight[i][j]=0;

    for(int i=0;i<=2*k-2;i++)
        sumOfButtonOfLight[0][i] = count[0][i]->text().toInt();//m

    int *a;
    int n,m;
    vector<QString> vec[2*k-1];
    QString temp = "";

    //前半部分（从低到高）
    for(int i=2*k-2;i>=k-1;i--){
        n = 3*k-2-i;//2*k-2-i对应到0~k-1，再加上k为当前列的格数
        m = sumOfButtonOfLight[0][2*k-2-i];
        if(m != 0){
            a = new int[m];
            for(int i=0;i<m;i++) a[i] = i+1;
            for(int j=m;a[0]<=(n-m+1);){
                for(;a[m-1]<=n;a[m-1]++){
                    for(int t=0;t<m;t++){
                        //坐标的三个量之间用,分开
                        temp+=QString::number(i);//x
                        temp+=",";
                        temp+=QString::number(a[t]-1);//y用于组合数的生成（从0到k）
                        temp+=",";
                        temp+=QString::number(3*k-3-i-a[t]+1);//z,x+y+z=3*k-3
                        //坐标与坐标之间用空格分开
                        temp+=" ";
                    }
                    vec[2*k-2-i].push_back(temp);
                    temp = "";
                }
                for(j=m-2;j>=0;j--){
                    a[j]++;
                    if(a[j]<=(j+n-m+1)) break;
                }
                for(j++;j>0 && j<m;j++) a[j] = a[j-1]+1;
            }
            delete [] a;
        }else{
            vec[2*k-2-i].push_back("");
        }
    }
    //后半部分（从高到低）
    for(int i=k-2;i>=0;i--){
        n = i+k;//直接加上k就是格数
        m = sumOfButtonOfLight[0][2*k-2-i];
        if(m != 0){
            a = new int[m];
            for(int i=0;i<m;i++) a[i] = i+1;
            for(int j=0;a[0]<=(n-m+1);){
                for(;a[m-1]<=n;a[m-1]++){
                    for(int t=0;t<m;t++){
                        temp+=QString::number(i);
                        temp+=",";
                        temp+=QString::number(k-2-i+a[t]);//由于后半部分y不是从0开始的，要整体加上一个值
                        temp+=",";
                        temp+=QString::number(2*k-1-a[t]);
                        temp+=" ";
                    }
                    vec[2*k-2-i].push_back(temp);
                    temp = "";
                }
                for(j=m-2;j>=0;j--){
                    a[j]++;
                    if(a[j]<=(j+n-m+1)) break;
                }
                for(j++;j>0 && j<m;j++) a[j] = a[j-1]+1;
            }
            delete [] a;
        }else{
            vec[2*k-2-i].push_back("");
        }
    }

    unsigned NO[2*k-1];
    for(int i=0;i<2*k-1;i++) NO[i] = 0;
    bool isOK = true;
    while(true){
        temp = "";
        for(int i=0;i<2*k-1;i++){
            temp += vec[i][NO[i]];
        }

        QStringList POS = temp.split(" ");
        for(int i=0;i<POS.size();i++){
            if(POS[i]!=""){
                QStringList xyz = POS[i].split(",");
                int x = xyz[0].toInt();
                int y = xyz[1].toInt();
                int z = xyz[2].toInt();
                positionOfButton[x][y][z] = 1;
//                cout<<"("<<x<<","<<y<<","<<z<<")"<<'\t';
            }
        }
//        cout<<'\n';

        for(int i=0;i<k;i++)
            for(int j=2*k-2;j>=k-1-i;j--)
                sumOfButtonOfLight[1][i]+=positionOfButton[j][3*k-3-i-j][i];
        for(int i=k;i<=2*k-2;i++)
            for(int j=3*k-3-i;j>=0;j--)
                sumOfButtonOfLight[1][i]+=positionOfButton[j][3*k-3-i-j][i];

        for(int i=0;i<k;i++)
            for(int j=2*k-2;j>=k-1-i;j--)
                sumOfButtonOfLight[2][i]+=positionOfButton[3*k-3-i-j][i][j];
        for(int i=k;i<=2*k-2;i++)
            for(int j=3*k-3-i;j>=0;j--)
                sumOfButtonOfLight[2][i]+=positionOfButton[3*k-3-i-j][i][j];

        for(int i=1;i<=2;i++)
            for(int j=0;j<2*k-1;j++)
                if(sumOfButtonOfLight[i][j] != count[i][j]->text().toInt()) isOK = false;

        if(isOK) numOfAnswer++;

        //重置，以便下次使用
        isOK = true;
        for(int i=0;i<19;i++)
            for(int j=0;j<19;j++)
                for(int k=0;k<19;k++)
                    positionOfButton[i][j][k]=0;
        for(int i=1;i<3;i++)
            for(int j=0;j<19;j++)
                sumOfButtonOfLight[i][j]=0;
        //递推下种情况
        NO[0]++;
        for(int i=0;i<2*k-2;i++)
            if(NO[i] == vec[i].size()){
                NO[i] = 0;
                NO[i+1]++;
            }
        if(NO[2*k-2] == vec[2*k-2].size()) break;//所有情形都考虑后退出
    }



    if(numOfAnswer > 1){
        QMessageBox::information(this,"确认结果","有多解的情况");
    }else if(numOfAnswer == 1){
        QMessageBox::information(this,"确认结果","有唯一解");
    }else{
        QMessageBox::warning(this,"确认结果","出错");
    }

}
