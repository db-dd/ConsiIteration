#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "cplay.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{   
    ui->setupUi(this);

    ql[0] = new QLabel("请设定一条边上的六边形数值（0-10）",this);
    ql[0]->setFixedSize(200,50);
    ql[0]->move(100,100);

    number[0] = new QLineEdit(this);
    number[0]->setFixedSize(200,50);
    number[0]->move(350,100);

    ql[1] = new QLabel("上方从左至右目标值：",this);
    ql[1]->setFixedSize(200,50);
    ql[1]->move(100,175);

    number[1] = new QLineEdit(this);
    number[1]->setFixedSize(350,50);
    number[1]->move(350,175);
    number[1]->setPlaceholderText("用空格分割，开始和末尾应无空格，全0则不进行目标判定");

    ql[2] = new QLabel("左上方从左至右目标值：",this);
    ql[2]->setFixedSize(200,50);
    ql[2]->move(100,250);

    number[2] = new QLineEdit(this);
    number[2]->setFixedSize(350,50);
    number[2]->move(350,250);
    number[2]->setPlaceholderText("用空格分割，开始和末尾应无空格，全0则不进行目标判定");

    ql[3] = new QLabel("右上方从左至右目标值：",this);
    ql[3]->setFixedSize(200,50);
    ql[3]->move(100,325);

    number[3] = new QLineEdit(this);
    number[3]->setFixedSize(350,50);
    number[3]->move(350,325);
    number[3]->setPlaceholderText("用空格分割，开始和末尾应无空格，全0则不进行目标判定");

    for(int i=0;i<3;i++)
        for(int j=0;j<19;j++)
            source[i][j]=0;

    start = new QPushButton(this);
    start->setText("开始");
    start->setFixedSize(100,50);
    start->move(300,400);

    connect(start,&QPushButton::clicked,this,&MainWindow::play);

}

MainWindow::~MainWindow(){}

void MainWindow::play(){
    int k = number[0]->text().toInt();
    QString str[3];
    str[0] = number[1]->text();
    QStringList subStr1 = str[0].split(" ");
    str[1] = number[2]->text();
    QStringList subStr2 = str[1].split(" ");
    str[2] = number[3]->text();
    QStringList subStr3 = str[2].split(" ");

    if(subStr1.size()!=2*k-1 || subStr2.size()!=2*k-1 || subStr3.size()!=2*k-1){
        QMessageBox::warning(this,"warning","输入数据有误");
        return;
    }

    for(int i=0;i<2*k-1;i++) source[0][i] = subStr1[i].toInt();
    for(int i=0;i<2*k-1;i++) source[1][i] = subStr2[i].toInt();
    for(int i=0;i<2*k-1;i++) source[2][i] = subStr3[i].toInt();

//    CPlay *temp = new CPlay(k,source);
//    temp->show();
//    this->close();
}
//    this->setFixedSize(1000,800);

//    bt[1] = new HexagonButton(this);
//    bt[1]->setFixedSize(100,100);
//    bt[1]->move(450,50);
//    bt[1]->setStyleSheet("background-color:white");

//    bt[2] = new HexagonButton(this);
//    bt[2]->setFixedSize(100,100);
//    bt[2]->move(450,150);
//    bt[2]->setStyleSheet("background-color:white");

//    bt[3] = new HexagonButton(this);
//    bt[3]->setFixedSize(100,100);
//    bt[3]->move(450,250);
//    bt[3]->setStyleSheet("background-color:white");

//    bt[4] = new HexagonButton(this);
//    bt[4]->setFixedSize(100,100);
//    bt[4]->move(450,350);
//    bt[4]->setStyleSheet("background-color:white");

//    bt[5] = new HexagonButton(this);
//    bt[5]->setFixedSize(100,100);
//    bt[5]->move(450,450);
//    bt[5]->setStyleSheet("background-color:white");

//    bt[6] = new HexagonButton(this);
//    bt[6]->setFixedSize(100,100);
//    bt[6]->move(450,550);
//    bt[6]->setStyleSheet("background-color:white");

//    bt[7] = new HexagonButton(this);
//    bt[7]->setFixedSize(100,100);
//    bt[7]->move(450,650);
//    bt[7]->setStyleSheet("background-color:white");

//    bt[8] = new HexagonButton(this);
//    bt[8]->setFixedSize(100,100);
//    bt[8]->move(375,50+30*sqrt(3));
//    bt[8]->setStyleSheet("background-color:white");

//    bt[9] = new HexagonButton(this);
//    bt[9]->setFixedSize(100,100);
//    bt[9]->move(375,150+30*sqrt(3));
//    bt[9]->setStyleSheet("background-color:white");

//    bt[10] = new HexagonButton(this);
//    bt[10]->setFixedSize(100,100);
//    bt[10]->move(375,250+30*sqrt(3));
//    bt[10]->setStyleSheet("background-color:white");

//    bt[11] = new HexagonButton(this);
//    bt[11]->setFixedSize(100,100);
//    bt[11]->move(375,350+30*sqrt(3));
//    bt[11]->setStyleSheet("background-color:white");

//    bt[12] = new HexagonButton(this);
//    bt[12]->setFixedSize(100,100);
//    bt[12]->move(375,450+30*sqrt(3));
//    bt[12]->setStyleSheet("background-color:white");

//    bt[13] = new HexagonButton(this);
//    bt[13]->setFixedSize(100,100);
//    bt[13]->move(375,550+30*sqrt(3));
//    bt[13]->setStyleSheet("background-color:white");

//    bt[14] = new HexagonButton(this);
//    bt[14]->setFixedSize(100,100);
//    bt[14]->move(525,50+30*sqrt(3));
//    bt[14]->setStyleSheet("background-color:white");

//    bt[15] = new HexagonButton(this);
//    bt[15]->setFixedSize(100,100);
//    bt[15]->move(525,150+30*sqrt(3));
//    bt[15]->setStyleSheet("background-color:white");

//    bt[16] = new HexagonButton(this);
//    bt[16]->setFixedSize(100,100);
//    bt[16]->move(525,250+30*sqrt(3));
//    bt[16]->setStyleSheet("background-color:white");

//    bt[17] = new HexagonButton(this);
//    bt[17]->setFixedSize(100,100);
//    bt[17]->move(525,350+30*sqrt(3));
//    bt[17]->setStyleSheet("background-color:white");

//    bt[18] = new HexagonButton(this);
//    bt[18]->setFixedSize(100,100);
//    bt[18]->move(525,450+30*sqrt(3));
//    bt[18]->setStyleSheet("background-color:white");

//    bt[19] = new HexagonButton(this);
//    bt[19]->setFixedSize(100,100);
//    bt[19]->move(525,550+30*sqrt(3));
//    bt[19]->setStyleSheet("background-color:white");

//    bt[20]= new HexagonButton(this);
//    bt[20]->setFixedSize(100,100);
//    bt[20]->move(300,50+60*sqrt(3));
//    bt[20]->setStyleSheet("background-color:white");

//    bt[21]= new HexagonButton(this);
//    bt[21]->setFixedSize(100,100);
//    bt[21]->move(300,150+60*sqrt(3));
//    bt[21]->setStyleSheet("background-color:white");

//    bt[22]= new HexagonButton(this);
//    bt[22]->setFixedSize(100,100);
//    bt[22]->move(300,250+60*sqrt(3));
//    bt[22]->setStyleSheet("background-color:white");

//    bt[23]= new HexagonButton(this);
//    bt[23]->setFixedSize(100,100);
//    bt[23]->move(300,350+60*sqrt(3));
//    bt[23]->setStyleSheet("background-color:white");

//    bt[24]= new HexagonButton(this);
//    bt[24]->setFixedSize(100,100);
//    bt[24]->move(300,450+60*sqrt(3));
//    bt[24]->setStyleSheet("background-color:white");

//    bt[25]= new HexagonButton(this);
//    bt[25]->setFixedSize(100,100);
//    bt[25]->move(600,50+60*sqrt(3));
//    bt[25]->setStyleSheet("background-color:white");

//    bt[26]= new HexagonButton(this);
//    bt[26]->setFixedSize(100,100);
//    bt[26]->move(600,150+60*sqrt(3));
//    bt[26]->setStyleSheet("background-color:white");

//    bt[27]= new HexagonButton(this);
//    bt[27]->setFixedSize(100,100);
//    bt[27]->move(600,250+60*sqrt(3));
//    bt[27]->setStyleSheet("background-color:white");

//    bt[28]= new HexagonButton(this);
//    bt[28]->setFixedSize(100,100);
//    bt[28]->move(600,350+60*sqrt(3));
//    bt[28]->setStyleSheet("background-color:white");

//    bt[29]= new HexagonButton(this);
//    bt[29]->setFixedSize(100,100);
//    bt[29]->move(600,450+60*sqrt(3));
//    bt[29]->setStyleSheet("background-color:white");

//    bt[30]= new HexagonButton(this);
//    bt[30]->setFixedSize(100,100);
//    bt[30]->move(225,50+90*sqrt(3));
//    bt[30]->setStyleSheet("background-color:white");

//    bt[31]= new HexagonButton(this);
//    bt[31]->setFixedSize(100,100);
//    bt[31]->move(225,150+90*sqrt(3));
//    bt[31]->setStyleSheet("background-color:white");

//    bt[32]= new HexagonButton(this);
//    bt[32]->setFixedSize(100,100);
//    bt[32]->move(225,250+90*sqrt(3));
//    bt[32]->setStyleSheet("background-color:white");

//    bt[33]= new HexagonButton(this);
//    bt[33]->setFixedSize(100,100);
//    bt[33]->move(225,350+90*sqrt(3));
//    bt[33]->setStyleSheet("background-color:white");

//    bt[34]= new HexagonButton(this);
//    bt[34]->setFixedSize(100,100);
//    bt[34]->move(675,50+90*sqrt(3));
//    bt[34]->setStyleSheet("background-color:white");

//    bt[35]= new HexagonButton(this);
//    bt[35]->setFixedSize(100,100);
//    bt[35]->move(675,150+90*sqrt(3));
//    bt[35]->setStyleSheet("background-color:white");

//    bt[36]= new HexagonButton(this);
//    bt[36]->setFixedSize(100,100);
//    bt[36]->move(675,250+90*sqrt(3));
//    bt[36]->setStyleSheet("background-color:white");

//    bt[37]= new HexagonButton(this);
//    bt[37]->setFixedSize(100,100);
//    bt[37]->move(675,350+90*sqrt(3));
//    bt[37]->setStyleSheet("background-color:white");

//    for(int i=0;i<3;i++)
//        for(int j=0;j<7;j++)
//            count[i][j]=0;

//    QPalette q1;
//    q1.setColor(QPalette::WindowText,Qt::red);
//    showCount[0][0] = new QLabel(this);
//    showCount[0][0]->setText(QString::number(count[0][0]));
//    showCount[0][0]->move(275,30+90*sqrt(3));
//    showCount[0][0]->setPalette(q1);

//    showCount[0][1] = new QLabel(this);
//    showCount[0][1]->setText(QString::number(count[0][1]));
//    showCount[0][1]->move(350,30+60*sqrt(3));
//    showCount[0][1]->setPalette(q1);

//    showCount[0][2] = new QLabel(this);
//    showCount[0][2]->setText(QString::number(count[0][2]));
//    showCount[0][2]->move(425,30+30*sqrt(3));
//    showCount[0][2]->setPalette(q1);

//    showCount[0][3] = new QLabel(this);
//    showCount[0][3]->setText(QString::number(count[0][3]));
//    showCount[0][3]->move(500,30);
//    showCount[0][3]->setPalette(q1);

//    showCount[0][4] = new QLabel(this);
//    showCount[0][4]->setText(QString::number(count[0][4]));
//    showCount[0][4]->move(575,30+30*sqrt(3));
//    showCount[0][4]->setPalette(q1);

//    showCount[0][5] = new QLabel(this);
//    showCount[0][5]->setText(QString::number(count[0][5]));
//    showCount[0][5]->move(650,30+60*sqrt(3));
//    showCount[0][5]->setPalette(q1);

//    showCount[0][6] = new QLabel(this);
//    showCount[0][6]->setText(QString::number(count[0][6]));
//    showCount[0][6]->move(725,30+90*sqrt(3));
//    showCount[0][6]->setPalette(q1);

//    QPalette q2;
//    q2.setColor(QPalette::WindowText,Qt::green);
//    showCount[1][0] = new QLabel(this);
//    showCount[1][0]->setText(QString::number(count[1][0]));
//    showCount[1][0]->move(225,350+90*sqrt(3));
//    showCount[1][0]->setPalette(q2);

//    showCount[1][1] = new QLabel(this);
//    showCount[1][1]->setText(QString::number(count[1][1]));
//    showCount[1][1]->move(225,250+90*sqrt(3));
//    showCount[1][1]->setPalette(q2);

//    showCount[1][2] = new QLabel(this);
//    showCount[1][2]->setText(QString::number(count[1][2]));
//    showCount[1][2]->move(225,150+90*sqrt(3));
//    showCount[1][2]->setPalette(q2);

//    showCount[1][3] = new QLabel(this);
//    showCount[1][3]->setText(QString::number(count[1][3]));
//    showCount[1][3]->move(225,50+90*sqrt(3));
//    showCount[1][3]->setPalette(q2);

//    showCount[1][4] = new QLabel(this);
//    showCount[1][4]->setText(QString::number(count[1][4]));
//    showCount[1][4]->move(300,50+60*sqrt(3));
//    showCount[1][4]->setPalette(q2);

//    showCount[1][5] = new QLabel(this);
//    showCount[1][5]->setText(QString::number(count[1][5]));
//    showCount[1][5]->move(375,50+30*sqrt(3));
//    showCount[1][5]->setPalette(q2);

//    showCount[1][6] = new QLabel(this);
//    showCount[1][6]->setText(QString::number(count[1][6]));
//    showCount[1][6]->move(450,50);
//    showCount[1][6]->setPalette(q2);

//    QPalette q3;
//    q3.setColor(QPalette::WindowText,Qt::blue);
//    showCount[2][0] = new QLabel(this);
//    showCount[2][0]->setText(QString::number(count[2][0]));
//    showCount[2][0]->move(225,120+90*sqrt(3));
//    showCount[2][0]->setPalette(q3);

//    showCount[2][1] = new QLabel(this);
//    showCount[2][1]->setText(QString::number(count[2][1]));
//    showCount[2][1]->move(225,220+90*sqrt(3));
//    showCount[2][1]->setPalette(q3);

//    showCount[2][2] = new QLabel(this);
//    showCount[2][2]->setText(QString::number(count[2][2]));
//    showCount[2][2]->move(225,320+90*sqrt(3));
//    showCount[2][2]->setPalette(q3);

//    showCount[2][3] = new QLabel(this);
//    showCount[2][3]->setText(QString::number(count[2][3]));
//    showCount[2][3]->move(225,420+90*sqrt(3));
//    showCount[2][3]->setPalette(q3);

//    showCount[2][4] = new QLabel(this);
//    showCount[2][4]->setText(QString::number(count[2][4]));
//    showCount[2][4]->move(300,420+120*sqrt(3));
//    showCount[2][4]->setPalette(q3);

//    showCount[2][5] = new QLabel(this);
//    showCount[2][5]->setText(QString::number(count[2][5]));
//    showCount[2][5]->move(375,420+150*sqrt(3));
//    showCount[2][5]->setPalette(q3);

//    showCount[2][6] = new QLabel(this);
//    showCount[2][6]->setText(QString::number(count[2][6]));
//    showCount[2][6]->move(450,420+180*sqrt(3));
//    showCount[2][6]->setPalette(q3);

//    connect(bt[1],&QPushButton::clicked,this,&MainWindow::changeColor1);
//    connect(bt[2],&QPushButton::clicked,this,&MainWindow::changeColor2);
//    connect(bt[3],&QPushButton::clicked,this,&MainWindow::changeColor3);
//    connect(bt[4],&QPushButton::clicked,this,&MainWindow::changeColor4);
//    connect(bt[5],&QPushButton::clicked,this,&MainWindow::changeColor5);
//    connect(bt[6],&QPushButton::clicked,this,&MainWindow::changeColor6);
//    connect(bt[7],&QPushButton::clicked,this,&MainWindow::changeColor7);
//    connect(bt[8],&QPushButton::clicked,this,&MainWindow::changeColor8);
//    connect(bt[9],&QPushButton::clicked,this,&MainWindow::changeColor9);
//    connect(bt[10],&QPushButton::clicked,this,&MainWindow::changeColor10);
//    connect(bt[11],&QPushButton::clicked,this,&MainWindow::changeColor11);
//    connect(bt[12],&QPushButton::clicked,this,&MainWindow::changeColor12);
//    connect(bt[13],&QPushButton::clicked,this,&MainWindow::changeColor13);
//    connect(bt[14],&QPushButton::clicked,this,&MainWindow::changeColor14);
//    connect(bt[15],&QPushButton::clicked,this,&MainWindow::changeColor15);
//    connect(bt[16],&QPushButton::clicked,this,&MainWindow::changeColor16);
//    connect(bt[17],&QPushButton::clicked,this,&MainWindow::changeColor17);
//    connect(bt[18],&QPushButton::clicked,this,&MainWindow::changeColor18);
//    connect(bt[19],&QPushButton::clicked,this,&MainWindow::changeColor19);
//    connect(bt[20],&QPushButton::clicked,this,&MainWindow::changeColor20);
//    connect(bt[21],&QPushButton::clicked,this,&MainWindow::changeColor21);
//    connect(bt[22],&QPushButton::clicked,this,&MainWindow::changeColor22);
//    connect(bt[23],&QPushButton::clicked,this,&MainWindow::changeColor23);
//    connect(bt[24],&QPushButton::clicked,this,&MainWindow::changeColor24);
//    connect(bt[25],&QPushButton::clicked,this,&MainWindow::changeColor25);
//    connect(bt[26],&QPushButton::clicked,this,&MainWindow::changeColor26);
//    connect(bt[27],&QPushButton::clicked,this,&MainWindow::changeColor27);
//    connect(bt[28],&QPushButton::clicked,this,&MainWindow::changeColor28);
//    connect(bt[29],&QPushButton::clicked,this,&MainWindow::changeColor29);
//    connect(bt[30],&QPushButton::clicked,this,&MainWindow::changeColor30);
//    connect(bt[31],&QPushButton::clicked,this,&MainWindow::changeColor31);
//    connect(bt[32],&QPushButton::clicked,this,&MainWindow::changeColor32);
//    connect(bt[33],&QPushButton::clicked,this,&MainWindow::changeColor33);
//    connect(bt[34],&QPushButton::clicked,this,&MainWindow::changeColor34);
//    connect(bt[35],&QPushButton::clicked,this,&MainWindow::changeColor35);
//    connect(bt[36],&QPushButton::clicked,this,&MainWindow::changeColor36);
//    connect(bt[37],&QPushButton::clicked,this,&MainWindow::changeColor37);

//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}

//void MainWindow::displayCount(){

//    count[0][0] = bt[30]->getColor()+bt[31]->getColor()+bt[32]->getColor()+bt[33]->getColor();
//    count[0][1] = bt[20]->getColor()+bt[21]->getColor()+bt[22]->getColor()+bt[23]->getColor()+bt[24]->getColor();
//    count[0][2] = bt[8]->getColor()+bt[9]->getColor()+bt[10]->getColor()+bt[11]->getColor()+bt[12]->getColor()+bt[13]->getColor();
//    count[0][3] = bt[1]->getColor()+bt[2]->getColor()+bt[3]->getColor()+bt[4]->getColor()+bt[5]->getColor()+bt[6]->getColor()+bt[7]->getColor();
//    count[0][4] = bt[14]->getColor()+bt[15]->getColor()+bt[16]->getColor()+bt[17]->getColor()+bt[18]->getColor()+bt[19]->getColor();
//    count[0][5] = bt[25]->getColor()+bt[26]->getColor()+bt[27]->getColor()+bt[28]->getColor()+bt[29]->getColor();
//    count[0][6] = bt[34]->getColor()+bt[35]->getColor()+bt[36]->getColor()+bt[37]->getColor();

//    count[1][0] = bt[33]->getColor()+bt[24]->getColor()+bt[13]->getColor()+bt[7]->getColor();
//    count[1][1] = bt[32]->getColor()+bt[23]->getColor()+bt[12]->getColor()+bt[6]->getColor()+bt[19]->getColor();
//    count[1][2] = bt[31]->getColor()+bt[22]->getColor()+bt[11]->getColor()+bt[5]->getColor()+bt[18]->getColor()+bt[29]->getColor();
//    count[1][3] = bt[30]->getColor()+bt[21]->getColor()+bt[10]->getColor()+bt[4]->getColor()+bt[17]->getColor()+bt[28]->getColor()+bt[37]->getColor();
//    count[1][4] = bt[20]->getColor()+bt[9]->getColor()+bt[3]->getColor()+bt[16]->getColor()+bt[27]->getColor()+bt[36]->getColor();
//    count[1][5] = bt[8]->getColor()+bt[2]->getColor()+bt[15]->getColor()+bt[26]->getColor()+bt[35]->getColor();
//    count[1][6] = bt[1]->getColor()+bt[14]->getColor()+bt[25]->getColor()+bt[34]->getColor();

//    count[2][0] = bt[30]->getColor()+bt[20]->getColor()+bt[8]->getColor()+bt[1]->getColor();
//    count[2][1] = bt[31]->getColor()+bt[21]->getColor()+bt[9]->getColor()+bt[2]->getColor()+bt[14]->getColor();
//    count[2][2] = bt[32]->getColor()+bt[22]->getColor()+bt[10]->getColor()+bt[3]->getColor()+bt[15]->getColor()+bt[25]->getColor();
//    count[2][3] = bt[33]->getColor()+bt[23]->getColor()+bt[11]->getColor()+bt[4]->getColor()+bt[16]->getColor()+bt[26]->getColor()+bt[34]->getColor();
//    count[2][4] = bt[24]->getColor()+bt[12]->getColor()+bt[5]->getColor()+bt[17]->getColor()+bt[27]->getColor()+bt[35]->getColor();
//    count[2][5] = bt[13]->getColor()+bt[6]->getColor()+bt[18]->getColor()+bt[28]->getColor()+bt[36]->getColor();
//    count[2][6] = bt[7]->getColor()+bt[19]->getColor()+bt[29]->getColor()+bt[37]->getColor();

//    for(int i=0;i<3;i++)
//        for(int j=0;j<7;j++)
//            delete showCount[i][j];

//    QPalette q1;
//    q1.setColor(QPalette::WindowText,Qt::red);
//    showCount[0][0] = new QLabel(this);
//    showCount[0][0]->setText(QString::number(count[0][0]));
//    showCount[0][0]->move(275,30+90*sqrt(3));
//    showCount[0][0]->setPalette(q1);
//    showCount[0][0]->show();

//    showCount[0][1] = new QLabel(this);
//    showCount[0][1]->setText(QString::number(count[0][1]));
//    showCount[0][1]->move(350,30+60*sqrt(3));
//    showCount[0][1]->setPalette(q1);
//    showCount[0][1]->show();

//    showCount[0][2] = new QLabel(this);
//    showCount[0][2]->setText(QString::number(count[0][2]));
//    showCount[0][2]->move(425,30+30*sqrt(3));
//    showCount[0][2]->setPalette(q1);
//    showCount[0][2]->show();

//    showCount[0][3] = new QLabel(this);
//    showCount[0][3]->setText(QString::number(count[0][3]));
//    showCount[0][3]->move(500,30);
//    showCount[0][3]->setPalette(q1);
//    showCount[0][3]->show();

//    showCount[0][4] = new QLabel(this);
//    showCount[0][4]->setText(QString::number(count[0][4]));
//    showCount[0][4]->move(575,30+30*sqrt(3));
//    showCount[0][4]->setPalette(q1);
//    showCount[0][4]->show();

//    showCount[0][5] = new QLabel(this);
//    showCount[0][5]->setText(QString::number(count[0][5]));
//    showCount[0][5]->move(650,30+60*sqrt(3));
//    showCount[0][5]->setPalette(q1);
//    showCount[0][5]->show();

//    showCount[0][6] = new QLabel(this);
//    showCount[0][6]->setText(QString::number(count[0][6]));
//    showCount[0][6]->move(725,30+90*sqrt(3));
//    showCount[0][6]->setPalette(q1);
//    showCount[0][6]->show();

//    QPalette q2;
//    q2.setColor(QPalette::WindowText,Qt::green);
//    showCount[1][0] = new QLabel(this);
//    showCount[1][0]->setText(QString::number(count[1][0]));
//    showCount[1][0]->move(225,350+90*sqrt(3));
//    showCount[1][0]->setPalette(q2);
//    showCount[1][0]->show();

//    showCount[1][1] = new QLabel(this);
//    showCount[1][1]->setText(QString::number(count[1][1]));
//    showCount[1][1]->move(225,250+90*sqrt(3));
//    showCount[1][1]->setPalette(q2);
//    showCount[1][1]->show();

//    showCount[1][2] = new QLabel(this);
//    showCount[1][2]->setText(QString::number(count[1][2]));
//    showCount[1][2]->move(225,150+90*sqrt(3));
//    showCount[1][2]->setPalette(q2);
//    showCount[1][2]->show();

//    showCount[1][3] = new QLabel(this);
//    showCount[1][3]->setText(QString::number(count[1][3]));
//    showCount[1][3]->move(225,50+90*sqrt(3));
//    showCount[1][3]->setPalette(q2);
//    showCount[1][3]->show();

//    showCount[1][4] = new QLabel(this);
//    showCount[1][4]->setText(QString::number(count[1][4]));
//    showCount[1][4]->move(300,50+60*sqrt(3));
//    showCount[1][4]->setPalette(q2);
//    showCount[1][4]->show();

//    showCount[1][5] = new QLabel(this);
//    showCount[1][5]->setText(QString::number(count[1][5]));
//    showCount[1][5]->move(375,50+30*sqrt(3));
//    showCount[1][5]->setPalette(q2);
//    showCount[1][5]->show();

//    showCount[1][6] = new QLabel(this);
//    showCount[1][6]->setText(QString::number(count[1][6]));
//    showCount[1][6]->move(450,50);
//    showCount[1][6]->setPalette(q2);
//    showCount[1][6]->show();

//    QPalette q3;
//    q3.setColor(QPalette::WindowText,Qt::blue);
//    showCount[2][0] = new QLabel(this);
//    showCount[2][0]->setText(QString::number(count[2][0]));
//    showCount[2][0]->move(225,120+90*sqrt(3));
//    showCount[2][0]->setPalette(q3);
//    showCount[2][0]->show();

//    showCount[2][1] = new QLabel(this);
//    showCount[2][1]->setText(QString::number(count[2][1]));
//    showCount[2][1]->move(225,220+90*sqrt(3));
//    showCount[2][1]->setPalette(q3);
//    showCount[2][1]->show();

//    showCount[2][2] = new QLabel(this);
//    showCount[2][2]->setText(QString::number(count[2][2]));
//    showCount[2][2]->move(225,320+90*sqrt(3));
//    showCount[2][2]->setPalette(q3);
//    showCount[2][2]->show();

//    showCount[2][3] = new QLabel(this);
//    showCount[2][3]->setText(QString::number(count[2][3]));
//    showCount[2][3]->move(225,420+90*sqrt(3));
//    showCount[2][3]->setPalette(q3);
//    showCount[2][3]->show();

//    showCount[2][4] = new QLabel(this);
//    showCount[2][4]->setText(QString::number(count[2][4]));
//    showCount[2][4]->move(300,420+120*sqrt(3));
//    showCount[2][4]->setPalette(q3);
//    showCount[2][4]->show();

//    showCount[2][5] = new QLabel(this);
//    showCount[2][5]->setText(QString::number(count[2][5]));
//    showCount[2][5]->move(375,420+150*sqrt(3));
//    showCount[2][5]->setPalette(q3);
//    showCount[2][5]->show();

//    showCount[2][6] = new QLabel(this);
//    showCount[2][6]->setText(QString::number(count[2][6]));
//    showCount[2][6]->move(450,420+180*sqrt(3));
//    showCount[2][6]->setPalette(q3);
//    showCount[2][6]->show();
//}

//void MainWindow::changeColor1(){
//    if(bt[1]->getColor() == 0){
//        bt[1]->setColor(1);
//        bt[1]->setStyleSheet("background-color:black");
//    }else{
//        bt[1]->setColor(0);
//        bt[1]->setStyleSheet("background-color:white");
//    }

//    if(bt[8]->getColor() == 0){
//        bt[8]->setColor(1);
//        bt[8]->setStyleSheet("background-color:black");
//    }else{
//        bt[8]->setColor(0);
//        bt[8]->setStyleSheet("background-color:white");
//    }

//    if(bt[2]->getColor() == 0){
//        bt[2]->setColor(1);
//        bt[2]->setStyleSheet("background-color:black");
//    }else{
//        bt[2]->setColor(0);
//        bt[2]->setStyleSheet("background-color:white");
//    }

//    if(bt[14]->getColor() == 0){
//        bt[14]->setColor(1);
//        bt[14]->setStyleSheet("background-color:black");
//    }else{
//        bt[14]->setColor(0);
//        bt[14]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor2(){
//    if(bt[1]->getColor() == 0){
//        bt[1]->setColor(1);
//        bt[1]->setStyleSheet("background-color:black");
//    }else{
//        bt[1]->setColor(0);
//        bt[1]->setStyleSheet("background-color:white");
//    }

//    if(bt[8]->getColor() == 0){
//        bt[8]->setColor(1);
//        bt[8]->setStyleSheet("background-color:black");
//    }else{
//        bt[8]->setColor(0);
//        bt[8]->setStyleSheet("background-color:white");
//    }

//    if(bt[2]->getColor() == 0){
//        bt[2]->setColor(1);
//        bt[2]->setStyleSheet("background-color:black");
//    }else{
//        bt[2]->setColor(0);
//        bt[2]->setStyleSheet("background-color:white");
//    }

//    if(bt[14]->getColor() == 0){
//        bt[14]->setColor(1);
//        bt[14]->setStyleSheet("background-color:black");
//    }else{
//        bt[14]->setColor(0);
//        bt[14]->setStyleSheet("background-color:white");
//    }

//    if(bt[9]->getColor() == 0){
//        bt[9]->setColor(1);
//        bt[9]->setStyleSheet("background-color:black");
//    }else{
//        bt[9]->setColor(0);
//        bt[9]->setStyleSheet("background-color:white");
//    }

//    if(bt[3]->getColor() == 0){
//        bt[3]->setColor(1);
//        bt[3]->setStyleSheet("background-color:black");
//    }else{
//        bt[3]->setColor(0);
//        bt[3]->setStyleSheet("background-color:white");
//    }

//    if(bt[15]->getColor() == 0){
//        bt[15]->setColor(1);
//        bt[15]->setStyleSheet("background-color:black");
//    }else{
//        bt[15]->setColor(0);
//        bt[15]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor3(){
//    if(bt[2]->getColor() == 0){
//        bt[2]->setColor(1);
//        bt[2]->setStyleSheet("background-color:black");
//    }else{
//        bt[2]->setColor(0);
//        bt[2]->setStyleSheet("background-color:white");
//    }

//    if(bt[9]->getColor() == 0){
//        bt[9]->setColor(1);
//        bt[9]->setStyleSheet("background-color:black");
//    }else{
//        bt[9]->setColor(0);
//        bt[9]->setStyleSheet("background-color:white");
//    }

//    if(bt[3]->getColor() == 0){
//        bt[3]->setColor(1);
//        bt[3]->setStyleSheet("background-color:black");
//    }else{
//        bt[3]->setColor(0);
//        bt[3]->setStyleSheet("background-color:white");
//    }

//    if(bt[15]->getColor() == 0){
//        bt[15]->setColor(1);
//        bt[15]->setStyleSheet("background-color:black");
//    }else{
//        bt[15]->setColor(0);
//        bt[15]->setStyleSheet("background-color:white");
//    }

//    if(bt[10]->getColor() == 0){
//        bt[10]->setColor(1);
//        bt[10]->setStyleSheet("background-color:black");
//    }else{
//        bt[10]->setColor(0);
//        bt[10]->setStyleSheet("background-color:white");
//    }

//    if(bt[4]->getColor() == 0){
//        bt[4]->setColor(1);
//        bt[4]->setStyleSheet("background-color:black");
//    }else{
//        bt[4]->setColor(0);
//        bt[4]->setStyleSheet("background-color:white");
//    }

//    if(bt[16]->getColor() == 0){
//        bt[16]->setColor(1);
//        bt[16]->setStyleSheet("background-color:black");
//    }else{
//        bt[16]->setColor(0);
//        bt[16]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor4(){
//    if(bt[3]->getColor() == 0){
//        bt[3]->setColor(1);
//        bt[3]->setStyleSheet("background-color:black");
//    }else{
//        bt[3]->setColor(0);
//        bt[3]->setStyleSheet("background-color:white");
//    }

//    if(bt[10]->getColor() == 0){
//        bt[10]->setColor(1);
//        bt[10]->setStyleSheet("background-color:black");
//    }else{
//        bt[10]->setColor(0);
//        bt[10]->setStyleSheet("background-color:white");
//    }

//    if(bt[4]->getColor() == 0){
//        bt[4]->setColor(1);
//        bt[4]->setStyleSheet("background-color:black");
//    }else{
//        bt[4]->setColor(0);
//        bt[4]->setStyleSheet("background-color:white");
//    }

//    if(bt[16]->getColor() == 0){
//        bt[16]->setColor(1);
//        bt[16]->setStyleSheet("background-color:black");
//    }else{
//        bt[16]->setColor(0);
//        bt[16]->setStyleSheet("background-color:white");
//    }

//    if(bt[11]->getColor() == 0){
//        bt[11]->setColor(1);
//        bt[11]->setStyleSheet("background-color:black");
//    }else{
//        bt[11]->setColor(0);
//        bt[11]->setStyleSheet("background-color:white");
//    }

//    if(bt[5]->getColor() == 0){
//        bt[5]->setColor(1);
//        bt[5]->setStyleSheet("background-color:black");
//    }else{
//        bt[5]->setColor(0);
//        bt[5]->setStyleSheet("background-color:white");
//    }

//    if(bt[17]->getColor() == 0){
//        bt[17]->setColor(1);
//        bt[17]->setStyleSheet("background-color:black");
//    }else{
//        bt[17]->setColor(0);
//        bt[17]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor5(){
//    if(bt[4]->getColor() == 0){
//        bt[4]->setColor(1);
//        bt[4]->setStyleSheet("background-color:black");
//    }else{
//        bt[4]->setColor(0);
//        bt[4]->setStyleSheet("background-color:white");
//    }

//    if(bt[11]->getColor() == 0){
//        bt[11]->setColor(1);
//        bt[11]->setStyleSheet("background-color:black");
//    }else{
//        bt[11]->setColor(0);
//        bt[11]->setStyleSheet("background-color:white");
//    }

//    if(bt[5]->getColor() == 0){
//        bt[5]->setColor(1);
//        bt[5]->setStyleSheet("background-color:black");
//    }else{
//        bt[5]->setColor(0);
//        bt[5]->setStyleSheet("background-color:white");
//    }

//    if(bt[17]->getColor() == 0){
//        bt[17]->setColor(1);
//        bt[17]->setStyleSheet("background-color:black");
//    }else{
//        bt[17]->setColor(0);
//        bt[17]->setStyleSheet("background-color:white");
//    }

//    if(bt[12]->getColor() == 0){
//        bt[12]->setColor(1);
//        bt[12]->setStyleSheet("background-color:black");
//    }else{
//        bt[12]->setColor(0);
//        bt[12]->setStyleSheet("background-color:white");
//    }

//    if(bt[6]->getColor() == 0){
//        bt[6]->setColor(1);
//        bt[6]->setStyleSheet("background-color:black");
//    }else{
//        bt[6]->setColor(0);
//        bt[6]->setStyleSheet("background-color:white");
//    }

//    if(bt[18]->getColor() == 0){
//        bt[18]->setColor(1);
//        bt[18]->setStyleSheet("background-color:black");
//    }else{
//        bt[18]->setColor(0);
//        bt[18]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor6(){
//    if(bt[5]->getColor() == 0){
//        bt[5]->setColor(1);
//        bt[5]->setStyleSheet("background-color:black");
//    }else{
//        bt[5]->setColor(0);
//        bt[5]->setStyleSheet("background-color:white");
//    }

//    if(bt[6]->getColor() == 0){
//        bt[6]->setColor(1);
//        bt[6]->setStyleSheet("background-color:black");
//    }else{
//        bt[6]->setColor(0);
//        bt[6]->setStyleSheet("background-color:white");
//    }

//    if(bt[7]->getColor() == 0){
//        bt[7]->setColor(1);
//        bt[7]->setStyleSheet("background-color:black");
//    }else{
//        bt[7]->setColor(0);
//        bt[7]->setStyleSheet("background-color:white");
//    }

//    if(bt[12]->getColor() == 0){
//        bt[12]->setColor(1);
//        bt[12]->setStyleSheet("background-color:black");
//    }else{
//        bt[12]->setColor(0);
//        bt[12]->setStyleSheet("background-color:white");
//    }

//    if(bt[13]->getColor() == 0){
//        bt[13]->setColor(1);
//        bt[13]->setStyleSheet("background-color:black");
//    }else{
//        bt[13]->setColor(0);
//        bt[13]->setStyleSheet("background-color:white");
//    }

//    if(bt[18]->getColor() == 0){
//        bt[18]->setColor(1);
//        bt[18]->setStyleSheet("background-color:black");
//    }else{
//        bt[18]->setColor(0);
//        bt[18]->setStyleSheet("background-color:white");
//    }

//    if(bt[19]->getColor() == 0){
//        bt[19]->setColor(1);
//        bt[19]->setStyleSheet("background-color:black");
//    }else{
//        bt[19]->setColor(0);
//        bt[19]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor7(){
//    if(bt[6]->getColor() == 0){
//        bt[6]->setColor(1);
//        bt[6]->setStyleSheet("background-color:black");
//    }else{
//        bt[6]->setColor(0);
//        bt[6]->setStyleSheet("background-color:white");
//    }

//    if(bt[7]->getColor() == 0){
//        bt[7]->setColor(1);
//        bt[7]->setStyleSheet("background-color:black");
//    }else{
//        bt[7]->setColor(0);
//        bt[7]->setStyleSheet("background-color:white");
//    }

//    if(bt[13]->getColor() == 0){
//        bt[13]->setColor(1);
//        bt[13]->setStyleSheet("background-color:black");
//    }else{
//        bt[13]->setColor(0);
//        bt[13]->setStyleSheet("background-color:white");
//    }

//    if(bt[19]->getColor() == 0){
//        bt[19]->setColor(1);
//        bt[19]->setStyleSheet("background-color:black");
//    }else{
//        bt[19]->setColor(0);
//        bt[19]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor8(){
//    if(bt[8]->getColor() == 0){
//        bt[8]->setColor(1);
//        bt[8]->setStyleSheet("background-color:black");
//    }else{
//        bt[8]->setColor(0);
//        bt[8]->setStyleSheet("background-color:white");
//    }

//    if(bt[9]->getColor() == 0){
//        bt[9]->setColor(1);
//        bt[9]->setStyleSheet("background-color:black");
//    }else{
//        bt[9]->setColor(0);
//        bt[9]->setStyleSheet("background-color:white");
//    }

//    if(bt[20]->getColor() == 0){
//        bt[20]->setColor(1);
//        bt[20]->setStyleSheet("background-color:black");
//    }else{
//        bt[20]->setColor(0);
//        bt[20]->setStyleSheet("background-color:white");
//    }

//    if(bt[1]->getColor() == 0){
//        bt[1]->setColor(1);
//        bt[1]->setStyleSheet("background-color:black");
//    }else{
//        bt[1]->setColor(0);
//        bt[1]->setStyleSheet("background-color:white");
//    }

//    if(bt[2]->getColor() == 0){
//        bt[2]->setColor(1);
//        bt[2]->setStyleSheet("background-color:black");
//    }else{
//        bt[2]->setColor(0);
//        bt[2]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor9(){
//    if(bt[8]->getColor() == 0){
//        bt[8]->setColor(1);
//        bt[8]->setStyleSheet("background-color:black");
//    }else{
//        bt[8]->setColor(0);
//        bt[8]->setStyleSheet("background-color:white");
//    }

//    if(bt[9]->getColor() == 0){
//        bt[9]->setColor(1);
//        bt[9]->setStyleSheet("background-color:black");
//    }else{
//        bt[9]->setColor(0);
//        bt[9]->setStyleSheet("background-color:white");
//    }

//    if(bt[10]->getColor() == 0){
//        bt[10]->setColor(1);
//        bt[10]->setStyleSheet("background-color:black");
//    }else{
//        bt[10]->setColor(0);
//        bt[10]->setStyleSheet("background-color:white");
//    }

//    if(bt[20]->getColor() == 0){
//        bt[20]->setColor(1);
//        bt[20]->setStyleSheet("background-color:black");
//    }else{
//        bt[20]->setColor(0);
//        bt[20]->setStyleSheet("background-color:white");
//    }

//    if(bt[21]->getColor() == 0){
//        bt[21]->setColor(1);
//        bt[21]->setStyleSheet("background-color:black");
//    }else{
//        bt[21]->setColor(0);
//        bt[21]->setStyleSheet("background-color:white");
//    }

//    if(bt[2]->getColor() == 0){
//        bt[2]->setColor(1);
//        bt[2]->setStyleSheet("background-color:black");
//    }else{
//        bt[2]->setColor(0);
//        bt[2]->setStyleSheet("background-color:white");
//    }

//    if(bt[3]->getColor() == 0){
//        bt[3]->setColor(1);
//        bt[3]->setStyleSheet("background-color:black");
//    }else{
//        bt[3]->setColor(0);
//        bt[3]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor10(){
//    if(bt[9]->getColor() == 0){
//        bt[9]->setColor(1);
//        bt[9]->setStyleSheet("background-color:black");
//    }else{
//        bt[9]->setColor(0);
//        bt[9]->setStyleSheet("background-color:white");
//    }

//    if(bt[10]->getColor() == 0){
//        bt[10]->setColor(1);
//        bt[10]->setStyleSheet("background-color:black");
//    }else{
//        bt[10]->setColor(0);
//        bt[10]->setStyleSheet("background-color:white");
//    }

//    if(bt[11]->getColor() == 0){
//        bt[11]->setColor(1);
//        bt[11]->setStyleSheet("background-color:black");
//    }else{
//        bt[11]->setColor(0);
//        bt[11]->setStyleSheet("background-color:white");
//    }

//    if(bt[21]->getColor() == 0){
//        bt[21]->setColor(1);
//        bt[21]->setStyleSheet("background-color:black");
//    }else{
//        bt[21]->setColor(0);
//        bt[21]->setStyleSheet("background-color:white");
//    }

//    if(bt[22]->getColor() == 0){
//        bt[22]->setColor(1);
//        bt[22]->setStyleSheet("background-color:black");
//    }else{
//        bt[22]->setColor(0);
//        bt[22]->setStyleSheet("background-color:white");
//    }

//    if(bt[3]->getColor() == 0){
//        bt[3]->setColor(1);
//        bt[3]->setStyleSheet("background-color:black");
//    }else{
//        bt[3]->setColor(0);
//        bt[3]->setStyleSheet("background-color:white");
//    }

//    if(bt[4]->getColor() == 0){
//        bt[4]->setColor(1);
//        bt[4]->setStyleSheet("background-color:black");
//    }else{
//        bt[4]->setColor(0);
//        bt[4]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor11(){
//    if(bt[10]->getColor() == 0){
//        bt[10]->setColor(1);
//        bt[10]->setStyleSheet("background-color:black");
//    }else{
//        bt[10]->setColor(0);
//        bt[10]->setStyleSheet("background-color:white");
//    }

//    if(bt[11]->getColor() == 0){
//        bt[11]->setColor(1);
//        bt[11]->setStyleSheet("background-color:black");
//    }else{
//        bt[11]->setColor(0);
//        bt[11]->setStyleSheet("background-color:white");
//    }

//    if(bt[12]->getColor() == 0){
//        bt[12]->setColor(1);
//        bt[12]->setStyleSheet("background-color:black");
//    }else{
//        bt[12]->setColor(0);
//        bt[12]->setStyleSheet("background-color:white");
//    }

//    if(bt[22]->getColor() == 0){
//        bt[22]->setColor(1);
//        bt[22]->setStyleSheet("background-color:black");
//    }else{
//        bt[22]->setColor(0);
//        bt[22]->setStyleSheet("background-color:white");
//    }

//    if(bt[23]->getColor() == 0){
//        bt[23]->setColor(1);
//        bt[23]->setStyleSheet("background-color:black");
//    }else{
//        bt[23]->setColor(0);
//        bt[23]->setStyleSheet("background-color:white");
//    }

//    if(bt[4]->getColor() == 0){
//        bt[4]->setColor(1);
//        bt[4]->setStyleSheet("background-color:black");
//    }else{
//        bt[4]->setColor(0);
//        bt[4]->setStyleSheet("background-color:white");
//    }

//    if(bt[5]->getColor() == 0){
//        bt[5]->setColor(1);
//        bt[5]->setStyleSheet("background-color:black");
//    }else{
//        bt[5]->setColor(0);
//        bt[5]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor12(){
//    if(bt[11]->getColor() == 0){
//        bt[11]->setColor(1);
//        bt[11]->setStyleSheet("background-color:black");
//    }else{
//        bt[11]->setColor(0);
//        bt[11]->setStyleSheet("background-color:white");
//    }

//    if(bt[12]->getColor() == 0){
//        bt[12]->setColor(1);
//        bt[12]->setStyleSheet("background-color:black");
//    }else{
//        bt[12]->setColor(0);
//        bt[12]->setStyleSheet("background-color:white");
//    }

//    if(bt[13]->getColor() == 0){
//        bt[13]->setColor(1);
//        bt[13]->setStyleSheet("background-color:black");
//    }else{
//        bt[13]->setColor(0);
//        bt[13]->setStyleSheet("background-color:white");
//    }

//    if(bt[23]->getColor() == 0){
//        bt[23]->setColor(1);
//        bt[23]->setStyleSheet("background-color:black");
//    }else{
//        bt[23]->setColor(0);
//        bt[23]->setStyleSheet("background-color:white");
//    }

//    if(bt[24]->getColor() == 0){
//        bt[24]->setColor(1);
//        bt[24]->setStyleSheet("background-color:black");
//    }else{
//        bt[24]->setColor(0);
//        bt[24]->setStyleSheet("background-color:white");
//    }

//    if(bt[5]->getColor() == 0){
//        bt[5]->setColor(1);
//        bt[5]->setStyleSheet("background-color:black");
//    }else{
//        bt[5]->setColor(0);
//        bt[5]->setStyleSheet("background-color:white");
//    }

//    if(bt[6]->getColor() == 0){
//        bt[6]->setColor(1);
//        bt[6]->setStyleSheet("background-color:black");
//    }else{
//        bt[6]->setColor(0);
//        bt[6]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor13(){
//    if(bt[12]->getColor() == 0){
//        bt[12]->setColor(1);
//        bt[12]->setStyleSheet("background-color:black");
//    }else{
//        bt[12]->setColor(0);
//        bt[12]->setStyleSheet("background-color:white");
//    }

//    if(bt[13]->getColor() == 0){
//        bt[13]->setColor(1);
//        bt[13]->setStyleSheet("background-color:black");
//    }else{
//        bt[13]->setColor(0);
//        bt[13]->setStyleSheet("background-color:white");
//    }

//    if(bt[24]->getColor() == 0){
//        bt[24]->setColor(1);
//        bt[24]->setStyleSheet("background-color:black");
//    }else{
//        bt[24]->setColor(0);
//        bt[24]->setStyleSheet("background-color:white");
//    }

//    if(bt[6]->getColor() == 0){
//        bt[6]->setColor(1);
//        bt[6]->setStyleSheet("background-color:black");
//    }else{
//        bt[6]->setColor(0);
//        bt[6]->setStyleSheet("background-color:white");
//    }

//    if(bt[7]->getColor() == 0){
//        bt[7]->setColor(1);
//        bt[7]->setStyleSheet("background-color:black");
//    }else{
//        bt[7]->setColor(0);
//        bt[7]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor14(){
//    if(bt[14]->getColor() == 0){
//        bt[14]->setColor(1);
//        bt[14]->setStyleSheet("background-color:black");
//    }else{
//        bt[14]->setColor(0);
//        bt[14]->setStyleSheet("background-color:white");
//    }

//    if(bt[15]->getColor() == 0){
//        bt[15]->setColor(1);
//        bt[15]->setStyleSheet("background-color:black");
//    }else{
//        bt[15]->setColor(0);
//        bt[15]->setStyleSheet("background-color:white");
//    }

//    if(bt[1]->getColor() == 0){
//        bt[1]->setColor(1);
//        bt[1]->setStyleSheet("background-color:black");
//    }else{
//        bt[1]->setColor(0);
//        bt[1]->setStyleSheet("background-color:white");
//    }

//    if(bt[2]->getColor() == 0){
//        bt[2]->setColor(1);
//        bt[2]->setStyleSheet("background-color:black");
//    }else{
//        bt[2]->setColor(0);
//        bt[2]->setStyleSheet("background-color:white");
//    }

//    if(bt[25]->getColor() == 0){
//        bt[25]->setColor(1);
//        bt[25]->setStyleSheet("background-color:black");
//    }else{
//        bt[25]->setColor(0);
//        bt[25]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor15(){
//    if(bt[14]->getColor() == 0){
//        bt[14]->setColor(1);
//        bt[14]->setStyleSheet("background-color:black");
//    }else{
//        bt[14]->setColor(0);
//        bt[14]->setStyleSheet("background-color:white");
//    }

//    if(bt[15]->getColor() == 0){
//        bt[15]->setColor(1);
//        bt[15]->setStyleSheet("background-color:black");
//    }else{
//        bt[15]->setColor(0);
//        bt[15]->setStyleSheet("background-color:white");
//    }

//    if(bt[16]->getColor() == 0){
//        bt[16]->setColor(1);
//        bt[16]->setStyleSheet("background-color:black");
//    }else{
//        bt[16]->setColor(0);
//        bt[16]->setStyleSheet("background-color:white");
//    }

//    if(bt[2]->getColor() == 0){
//        bt[2]->setColor(1);
//        bt[2]->setStyleSheet("background-color:black");
//    }else{
//        bt[2]->setColor(0);
//        bt[2]->setStyleSheet("background-color:white");
//    }

//    if(bt[3]->getColor() == 0){
//        bt[3]->setColor(1);
//        bt[3]->setStyleSheet("background-color:black");
//    }else{
//        bt[3]->setColor(0);
//        bt[3]->setStyleSheet("background-color:white");
//    }

//    if(bt[25]->getColor() == 0){
//        bt[25]->setColor(1);
//        bt[25]->setStyleSheet("background-color:black");
//    }else{
//        bt[25]->setColor(0);
//        bt[25]->setStyleSheet("background-color:white");
//    }

//    if(bt[26]->getColor() == 0){
//        bt[26]->setColor(1);
//        bt[26]->setStyleSheet("background-color:black");
//    }else{
//        bt[26]->setColor(0);
//        bt[26]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor16(){
//    if(bt[15]->getColor() == 0){
//        bt[15]->setColor(1);
//        bt[15]->setStyleSheet("background-color:black");
//    }else{
//        bt[15]->setColor(0);
//        bt[15]->setStyleSheet("background-color:white");
//    }

//    if(bt[16]->getColor() == 0){
//        bt[16]->setColor(1);
//        bt[16]->setStyleSheet("background-color:black");
//    }else{
//        bt[16]->setColor(0);
//        bt[16]->setStyleSheet("background-color:white");
//    }

//    if(bt[17]->getColor() == 0){
//        bt[17]->setColor(1);
//        bt[17]->setStyleSheet("background-color:black");
//    }else{
//        bt[17]->setColor(0);
//        bt[17]->setStyleSheet("background-color:white");
//    }

//    if(bt[3]->getColor() == 0){
//        bt[3]->setColor(1);
//        bt[3]->setStyleSheet("background-color:black");
//    }else{
//        bt[3]->setColor(0);
//        bt[3]->setStyleSheet("background-color:white");
//    }

//    if(bt[4]->getColor() == 0){
//        bt[4]->setColor(1);
//        bt[4]->setStyleSheet("background-color:black");
//    }else{
//        bt[4]->setColor(0);
//        bt[4]->setStyleSheet("background-color:white");
//    }

//    if(bt[26]->getColor() == 0){
//        bt[26]->setColor(1);
//        bt[26]->setStyleSheet("background-color:black");
//    }else{
//        bt[26]->setColor(0);
//        bt[26]->setStyleSheet("background-color:white");
//    }

//    if(bt[27]->getColor() == 0){
//        bt[27]->setColor(1);
//        bt[27]->setStyleSheet("background-color:black");
//    }else{
//        bt[27]->setColor(0);
//        bt[27]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor17(){
//    if(bt[16]->getColor() == 0){
//        bt[16]->setColor(1);
//        bt[16]->setStyleSheet("background-color:black");
//    }else{
//        bt[16]->setColor(0);
//        bt[16]->setStyleSheet("background-color:white");
//    }

//    if(bt[17]->getColor() == 0){
//        bt[17]->setColor(1);
//        bt[17]->setStyleSheet("background-color:black");
//    }else{
//        bt[17]->setColor(0);
//        bt[17]->setStyleSheet("background-color:white");
//    }

//    if(bt[18]->getColor() == 0){
//        bt[18]->setColor(1);
//        bt[18]->setStyleSheet("background-color:black");
//    }else{
//        bt[18]->setColor(0);
//        bt[18]->setStyleSheet("background-color:white");
//    }

//    if(bt[4]->getColor() == 0){
//        bt[4]->setColor(1);
//        bt[4]->setStyleSheet("background-color:black");
//    }else{
//        bt[4]->setColor(0);
//        bt[4]->setStyleSheet("background-color:white");
//    }

//    if(bt[5]->getColor() == 0){
//        bt[5]->setColor(1);
//        bt[5]->setStyleSheet("background-color:black");
//    }else{
//        bt[5]->setColor(0);
//        bt[5]->setStyleSheet("background-color:white");
//    }

//    if(bt[27]->getColor() == 0){
//        bt[27]->setColor(1);
//        bt[27]->setStyleSheet("background-color:black");
//    }else{
//        bt[27]->setColor(0);
//        bt[27]->setStyleSheet("background-color:white");
//    }

//    if(bt[28]->getColor() == 0){
//        bt[28]->setColor(1);
//        bt[28]->setStyleSheet("background-color:black");
//    }else{
//        bt[28]->setColor(0);
//        bt[28]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor18(){
//    if(bt[17]->getColor() == 0){
//        bt[17]->setColor(1);
//        bt[17]->setStyleSheet("background-color:black");
//    }else{
//        bt[17]->setColor(0);
//        bt[17]->setStyleSheet("background-color:white");
//    }

//    if(bt[18]->getColor() == 0){
//        bt[18]->setColor(1);
//        bt[18]->setStyleSheet("background-color:black");
//    }else{
//        bt[18]->setColor(0);
//        bt[18]->setStyleSheet("background-color:white");
//    }

//    if(bt[19]->getColor() == 0){
//        bt[19]->setColor(1);
//        bt[19]->setStyleSheet("background-color:black");
//    }else{
//        bt[19]->setColor(0);
//        bt[19]->setStyleSheet("background-color:white");
//    }

//    if(bt[5]->getColor() == 0){
//        bt[5]->setColor(1);
//        bt[5]->setStyleSheet("background-color:black");
//    }else{
//        bt[5]->setColor(0);
//        bt[5]->setStyleSheet("background-color:white");
//    }

//    if(bt[6]->getColor() == 0){
//        bt[6]->setColor(1);
//        bt[6]->setStyleSheet("background-color:black");
//    }else{
//        bt[6]->setColor(0);
//        bt[6]->setStyleSheet("background-color:white");
//    }

//    if(bt[28]->getColor() == 0){
//        bt[28]->setColor(1);
//        bt[28]->setStyleSheet("background-color:black");
//    }else{
//        bt[28]->setColor(0);
//        bt[28]->setStyleSheet("background-color:white");
//    }

//    if(bt[29]->getColor() == 0){
//        bt[29]->setColor(1);
//        bt[29]->setStyleSheet("background-color:black");
//    }else{
//        bt[29]->setColor(0);
//        bt[29]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor19(){
//    if(bt[18]->getColor() == 0){
//        bt[18]->setColor(1);
//        bt[18]->setStyleSheet("background-color:black");
//    }else{
//        bt[18]->setColor(0);
//        bt[18]->setStyleSheet("background-color:white");
//    }

//    if(bt[19]->getColor() == 0){
//        bt[19]->setColor(1);
//        bt[19]->setStyleSheet("background-color:black");
//    }else{
//        bt[19]->setColor(0);
//        bt[19]->setStyleSheet("background-color:white");
//    }

//    if(bt[6]->getColor() == 0){
//        bt[6]->setColor(1);
//        bt[6]->setStyleSheet("background-color:black");
//    }else{
//        bt[6]->setColor(0);
//        bt[6]->setStyleSheet("background-color:white");
//    }

//    if(bt[7]->getColor() == 0){
//        bt[7]->setColor(1);
//        bt[7]->setStyleSheet("background-color:black");
//    }else{
//        bt[7]->setColor(0);
//        bt[7]->setStyleSheet("background-color:white");
//    }

//    if(bt[29]->getColor() == 0){
//        bt[29]->setColor(1);
//        bt[29]->setStyleSheet("background-color:black");
//    }else{
//        bt[29]->setColor(0);
//        bt[29]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor20(){
//    if(bt[20]->getColor() == 0){
//        bt[20]->setColor(1);
//        bt[20]->setStyleSheet("background-color:black");
//    }else{
//        bt[20]->setColor(0);
//        bt[20]->setStyleSheet("background-color:white");
//    }

//    if(bt[21]->getColor() == 0){
//        bt[21]->setColor(1);
//        bt[21]->setStyleSheet("background-color:black");
//    }else{
//        bt[21]->setColor(0);
//        bt[21]->setStyleSheet("background-color:white");
//    }

//    if(bt[30]->getColor() == 0){
//        bt[30]->setColor(1);
//        bt[30]->setStyleSheet("background-color:black");
//    }else{
//        bt[30]->setColor(0);
//        bt[30]->setStyleSheet("background-color:white");
//    }

//    if(bt[8]->getColor() == 0){
//        bt[8]->setColor(1);
//        bt[8]->setStyleSheet("background-color:black");
//    }else{
//        bt[8]->setColor(0);
//        bt[8]->setStyleSheet("background-color:white");
//    }

//    if(bt[9]->getColor() == 0){
//        bt[9]->setColor(1);
//        bt[9]->setStyleSheet("background-color:black");
//    }else{
//        bt[9]->setColor(0);
//        bt[9]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor21(){
//    if(bt[20]->getColor() == 0){
//        bt[20]->setColor(1);
//        bt[20]->setStyleSheet("background-color:black");
//    }else{
//        bt[20]->setColor(0);
//        bt[20]->setStyleSheet("background-color:white");
//    }

//    if(bt[21]->getColor() == 0){
//        bt[21]->setColor(1);
//        bt[21]->setStyleSheet("background-color:black");
//    }else{
//        bt[21]->setColor(0);
//        bt[21]->setStyleSheet("background-color:white");
//    }

//    if(bt[22]->getColor() == 0){
//        bt[22]->setColor(1);
//        bt[22]->setStyleSheet("background-color:black");
//    }else{
//        bt[22]->setColor(0);
//        bt[22]->setStyleSheet("background-color:white");
//    }

//    if(bt[30]->getColor() == 0){
//        bt[30]->setColor(1);
//        bt[30]->setStyleSheet("background-color:black");
//    }else{
//        bt[30]->setColor(0);
//        bt[30]->setStyleSheet("background-color:white");
//    }

//    if(bt[31]->getColor() == 0){
//        bt[31]->setColor(1);
//        bt[31]->setStyleSheet("background-color:black");
//    }else{
//        bt[31]->setColor(0);
//        bt[31]->setStyleSheet("background-color:white");
//    }

//    if(bt[9]->getColor() == 0){
//        bt[9]->setColor(1);
//        bt[9]->setStyleSheet("background-color:black");
//    }else{
//        bt[9]->setColor(0);
//        bt[9]->setStyleSheet("background-color:white");
//    }

//    if(bt[10]->getColor() == 0){
//        bt[10]->setColor(1);
//        bt[10]->setStyleSheet("background-color:black");
//    }else{
//        bt[10]->setColor(0);
//        bt[10]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor22(){
//    if(bt[21]->getColor() == 0){
//        bt[21]->setColor(1);
//        bt[21]->setStyleSheet("background-color:black");
//    }else{
//        bt[21]->setColor(0);
//        bt[21]->setStyleSheet("background-color:white");
//    }

//    if(bt[22]->getColor() == 0){
//        bt[22]->setColor(1);
//        bt[22]->setStyleSheet("background-color:black");
//    }else{
//        bt[22]->setColor(0);
//        bt[22]->setStyleSheet("background-color:white");
//    }

//    if(bt[23]->getColor() == 0){
//        bt[23]->setColor(1);
//        bt[23]->setStyleSheet("background-color:black");
//    }else{
//        bt[23]->setColor(0);
//        bt[23]->setStyleSheet("background-color:white");
//    }

//    if(bt[31]->getColor() == 0){
//        bt[31]->setColor(1);
//        bt[31]->setStyleSheet("background-color:black");
//    }else{
//        bt[31]->setColor(0);
//        bt[31]->setStyleSheet("background-color:white");
//    }

//    if(bt[32]->getColor() == 0){
//        bt[32]->setColor(1);
//        bt[32]->setStyleSheet("background-color:black");
//    }else{
//        bt[32]->setColor(0);
//        bt[32]->setStyleSheet("background-color:white");
//    }

//    if(bt[10]->getColor() == 0){
//        bt[10]->setColor(1);
//        bt[10]->setStyleSheet("background-color:black");
//    }else{
//        bt[10]->setColor(0);
//        bt[10]->setStyleSheet("background-color:white");
//    }

//    if(bt[11]->getColor() == 0){
//        bt[11]->setColor(1);
//        bt[11]->setStyleSheet("background-color:black");
//    }else{
//        bt[11]->setColor(0);
//        bt[11]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor23(){
//    if(bt[22]->getColor() == 0){
//        bt[22]->setColor(1);
//        bt[22]->setStyleSheet("background-color:black");
//    }else{
//        bt[22]->setColor(0);
//        bt[22]->setStyleSheet("background-color:white");
//    }

//    if(bt[23]->getColor() == 0){
//        bt[23]->setColor(1);
//        bt[23]->setStyleSheet("background-color:black");
//    }else{
//        bt[23]->setColor(0);
//        bt[23]->setStyleSheet("background-color:white");
//    }

//    if(bt[24]->getColor() == 0){
//        bt[24]->setColor(1);
//        bt[24]->setStyleSheet("background-color:black");
//    }else{
//        bt[24]->setColor(0);
//        bt[24]->setStyleSheet("background-color:white");
//    }

//    if(bt[32]->getColor() == 0){
//        bt[32]->setColor(1);
//        bt[32]->setStyleSheet("background-color:black");
//    }else{
//        bt[32]->setColor(0);
//        bt[32]->setStyleSheet("background-color:white");
//    }

//    if(bt[33]->getColor() == 0){
//        bt[33]->setColor(1);
//        bt[33]->setStyleSheet("background-color:black");
//    }else{
//        bt[33]->setColor(0);
//        bt[33]->setStyleSheet("background-color:white");
//    }

//    if(bt[11]->getColor() == 0){
//        bt[11]->setColor(1);
//        bt[11]->setStyleSheet("background-color:black");
//    }else{
//        bt[11]->setColor(0);
//        bt[11]->setStyleSheet("background-color:white");
//    }

//    if(bt[12]->getColor() == 0){
//        bt[12]->setColor(1);
//        bt[12]->setStyleSheet("background-color:black");
//    }else{
//        bt[12]->setColor(0);
//        bt[12]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor24(){
//    if(bt[23]->getColor() == 0){
//        bt[23]->setColor(1);
//        bt[23]->setStyleSheet("background-color:black");
//    }else{
//        bt[23]->setColor(0);
//        bt[23]->setStyleSheet("background-color:white");
//    }

//    if(bt[24]->getColor() == 0){
//        bt[24]->setColor(1);
//        bt[24]->setStyleSheet("background-color:black");
//    }else{
//        bt[24]->setColor(0);
//        bt[24]->setStyleSheet("background-color:white");
//    }

//    if(bt[33]->getColor() == 0){
//        bt[33]->setColor(1);
//        bt[33]->setStyleSheet("background-color:black");
//    }else{
//        bt[33]->setColor(0);
//        bt[33]->setStyleSheet("background-color:white");
//    }

//    if(bt[12]->getColor() == 0){
//        bt[12]->setColor(1);
//        bt[12]->setStyleSheet("background-color:black");
//    }else{
//        bt[12]->setColor(0);
//        bt[12]->setStyleSheet("background-color:white");
//    }

//    if(bt[13]->getColor() == 0){
//        bt[13]->setColor(1);
//        bt[13]->setStyleSheet("background-color:black");
//    }else{
//        bt[13]->setColor(0);
//        bt[13]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor25(){
//    if(bt[25]->getColor() == 0){
//        bt[25]->setColor(1);
//        bt[25]->setStyleSheet("background-color:black");
//    }else{
//        bt[25]->setColor(0);
//        bt[25]->setStyleSheet("background-color:white");
//    }

//    if(bt[26]->getColor() == 0){
//        bt[26]->setColor(1);
//        bt[26]->setStyleSheet("background-color:black");
//    }else{
//        bt[26]->setColor(0);
//        bt[26]->setStyleSheet("background-color:white");
//    }

//    if(bt[14]->getColor() == 0){
//        bt[14]->setColor(1);
//        bt[14]->setStyleSheet("background-color:black");
//    }else{
//        bt[14]->setColor(0);
//        bt[14]->setStyleSheet("background-color:white");
//    }

//    if(bt[15]->getColor() == 0){
//        bt[15]->setColor(1);
//        bt[15]->setStyleSheet("background-color:black");
//    }else{
//        bt[15]->setColor(0);
//        bt[15]->setStyleSheet("background-color:white");
//    }

//    if(bt[34]->getColor() == 0){
//        bt[34]->setColor(1);
//        bt[34]->setStyleSheet("background-color:black");
//    }else{
//        bt[34]->setColor(0);
//        bt[34]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor26(){
//    if(bt[25]->getColor() == 0){
//        bt[25]->setColor(1);
//        bt[25]->setStyleSheet("background-color:black");
//    }else{
//        bt[25]->setColor(0);
//        bt[25]->setStyleSheet("background-color:white");
//    }

//    if(bt[26]->getColor() == 0){
//        bt[26]->setColor(1);
//        bt[26]->setStyleSheet("background-color:black");
//    }else{
//        bt[26]->setColor(0);
//        bt[26]->setStyleSheet("background-color:white");
//    }

//    if(bt[27]->getColor() == 0){
//        bt[27]->setColor(1);
//        bt[27]->setStyleSheet("background-color:black");
//    }else{
//        bt[27]->setColor(0);
//        bt[27]->setStyleSheet("background-color:white");
//    }

//    if(bt[15]->getColor() == 0){
//        bt[15]->setColor(1);
//        bt[15]->setStyleSheet("background-color:black");
//    }else{
//        bt[15]->setColor(0);
//        bt[15]->setStyleSheet("background-color:white");
//    }

//    if(bt[16]->getColor() == 0){
//        bt[16]->setColor(1);
//        bt[16]->setStyleSheet("background-color:black");
//    }else{
//        bt[16]->setColor(0);
//        bt[16]->setStyleSheet("background-color:white");
//    }

//    if(bt[34]->getColor() == 0){
//        bt[34]->setColor(1);
//        bt[34]->setStyleSheet("background-color:black");
//    }else{
//        bt[34]->setColor(0);
//        bt[34]->setStyleSheet("background-color:white");
//    }

//    if(bt[35]->getColor() == 0){
//        bt[35]->setColor(1);
//        bt[35]->setStyleSheet("background-color:black");
//    }else{
//        bt[35]->setColor(0);
//        bt[35]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor27(){
//    if(bt[26]->getColor() == 0){
//        bt[26]->setColor(1);
//        bt[26]->setStyleSheet("background-color:black");
//    }else{
//        bt[26]->setColor(0);
//        bt[26]->setStyleSheet("background-color:white");
//    }

//    if(bt[27]->getColor() == 0){
//        bt[27]->setColor(1);
//        bt[27]->setStyleSheet("background-color:black");
//    }else{
//        bt[27]->setColor(0);
//        bt[27]->setStyleSheet("background-color:white");
//    }

//    if(bt[28]->getColor() == 0){
//        bt[28]->setColor(1);
//        bt[28]->setStyleSheet("background-color:black");
//    }else{
//        bt[28]->setColor(0);
//        bt[28]->setStyleSheet("background-color:white");
//    }

//    if(bt[16]->getColor() == 0){
//        bt[16]->setColor(1);
//        bt[16]->setStyleSheet("background-color:black");
//    }else{
//        bt[16]->setColor(0);
//        bt[16]->setStyleSheet("background-color:white");
//    }

//    if(bt[17]->getColor() == 0){
//        bt[17]->setColor(1);
//        bt[17]->setStyleSheet("background-color:black");
//    }else{
//        bt[17]->setColor(0);
//        bt[17]->setStyleSheet("background-color:white");
//    }

//    if(bt[35]->getColor() == 0){
//        bt[35]->setColor(1);
//        bt[35]->setStyleSheet("background-color:black");
//    }else{
//        bt[35]->setColor(0);
//        bt[35]->setStyleSheet("background-color:white");
//    }

//    if(bt[36]->getColor() == 0){
//        bt[36]->setColor(1);
//        bt[36]->setStyleSheet("background-color:black");
//    }else{
//        bt[36]->setColor(0);
//        bt[36]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor28(){
//    if(bt[27]->getColor() == 0){
//        bt[27]->setColor(1);
//        bt[27]->setStyleSheet("background-color:black");
//    }else{
//        bt[27]->setColor(0);
//        bt[27]->setStyleSheet("background-color:white");
//    }

//    if(bt[28]->getColor() == 0){
//        bt[28]->setColor(1);
//        bt[28]->setStyleSheet("background-color:black");
//    }else{
//        bt[28]->setColor(0);
//        bt[28]->setStyleSheet("background-color:white");
//    }

//    if(bt[29]->getColor() == 0){
//        bt[29]->setColor(1);
//        bt[29]->setStyleSheet("background-color:black");
//    }else{
//        bt[29]->setColor(0);
//        bt[29]->setStyleSheet("background-color:white");
//    }

//    if(bt[17]->getColor() == 0){
//        bt[17]->setColor(1);
//        bt[17]->setStyleSheet("background-color:black");
//    }else{
//        bt[17]->setColor(0);
//        bt[17]->setStyleSheet("background-color:white");
//    }

//    if(bt[18]->getColor() == 0){
//        bt[18]->setColor(1);
//        bt[18]->setStyleSheet("background-color:black");
//    }else{
//        bt[18]->setColor(0);
//        bt[18]->setStyleSheet("background-color:white");
//    }

//    if(bt[36]->getColor() == 0){
//        bt[36]->setColor(1);
//        bt[36]->setStyleSheet("background-color:black");
//    }else{
//        bt[36]->setColor(0);
//        bt[36]->setStyleSheet("background-color:white");
//    }

//    if(bt[37]->getColor() == 0){
//        bt[37]->setColor(1);
//        bt[37]->setStyleSheet("background-color:black");
//    }else{
//        bt[37]->setColor(0);
//        bt[37]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor29(){
//    if(bt[28]->getColor() == 0){
//        bt[28]->setColor(1);
//        bt[28]->setStyleSheet("background-color:black");
//    }else{
//        bt[28]->setColor(0);
//        bt[28]->setStyleSheet("background-color:white");
//    }

//    if(bt[29]->getColor() == 0){
//        bt[29]->setColor(1);
//        bt[29]->setStyleSheet("background-color:black");
//    }else{
//        bt[29]->setColor(0);
//        bt[29]->setStyleSheet("background-color:white");
//    }

//    if(bt[18]->getColor() == 0){
//        bt[18]->setColor(1);
//        bt[18]->setStyleSheet("background-color:black");
//    }else{
//        bt[18]->setColor(0);
//        bt[18]->setStyleSheet("background-color:white");
//    }

//    if(bt[19]->getColor() == 0){
//        bt[19]->setColor(1);
//        bt[19]->setStyleSheet("background-color:black");
//    }else{
//        bt[19]->setColor(0);
//        bt[19]->setStyleSheet("background-color:white");
//    }

//    if(bt[37]->getColor() == 0){
//        bt[37]->setColor(1);
//        bt[37]->setStyleSheet("background-color:black");
//    }else{
//        bt[37]->setColor(0);
//        bt[37]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor30(){
//    if(bt[30]->getColor() == 0){
//        bt[30]->setColor(1);
//        bt[30]->setStyleSheet("background-color:black");
//    }else{
//        bt[30]->setColor(0);
//        bt[30]->setStyleSheet("background-color:white");
//    }

//    if(bt[31]->getColor() == 0){
//        bt[31]->setColor(1);
//        bt[31]->setStyleSheet("background-color:black");
//    }else{
//        bt[31]->setColor(0);
//        bt[31]->setStyleSheet("background-color:white");
//    }

//    if(bt[20]->getColor() == 0){
//        bt[20]->setColor(1);
//        bt[20]->setStyleSheet("background-color:black");
//    }else{
//        bt[20]->setColor(0);
//        bt[20]->setStyleSheet("background-color:white");
//    }

//    if(bt[21]->getColor() == 0){
//        bt[21]->setColor(1);
//        bt[21]->setStyleSheet("background-color:black");
//    }else{
//        bt[21]->setColor(0);
//        bt[21]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor31(){
//    if(bt[30]->getColor() == 0){
//        bt[30]->setColor(1);
//        bt[30]->setStyleSheet("background-color:black");
//    }else{
//        bt[30]->setColor(0);
//        bt[30]->setStyleSheet("background-color:white");
//    }

//    if(bt[31]->getColor() == 0){
//        bt[31]->setColor(1);
//        bt[31]->setStyleSheet("background-color:black");
//    }else{
//        bt[31]->setColor(0);
//        bt[31]->setStyleSheet("background-color:white");
//    }

//    if(bt[32]->getColor() == 0){
//        bt[32]->setColor(1);
//        bt[32]->setStyleSheet("background-color:black");
//    }else{
//        bt[32]->setColor(0);
//        bt[32]->setStyleSheet("background-color:white");
//    }

//    if(bt[21]->getColor() == 0){
//        bt[21]->setColor(1);
//        bt[21]->setStyleSheet("background-color:black");
//    }else{
//        bt[21]->setColor(0);
//        bt[21]->setStyleSheet("background-color:white");
//    }

//    if(bt[22]->getColor() == 0){
//        bt[22]->setColor(1);
//        bt[22]->setStyleSheet("background-color:black");
//    }else{
//        bt[22]->setColor(0);
//        bt[22]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor32(){
//    if(bt[31]->getColor() == 0){
//        bt[31]->setColor(1);
//        bt[31]->setStyleSheet("background-color:black");
//    }else{
//        bt[31]->setColor(0);
//        bt[31]->setStyleSheet("background-color:white");
//    }

//    if(bt[32]->getColor() == 0){
//        bt[32]->setColor(1);
//        bt[32]->setStyleSheet("background-color:black");
//    }else{
//        bt[32]->setColor(0);
//        bt[32]->setStyleSheet("background-color:white");
//    }

//    if(bt[33]->getColor() == 0){
//        bt[33]->setColor(1);
//        bt[33]->setStyleSheet("background-color:black");
//    }else{
//        bt[33]->setColor(0);
//        bt[33]->setStyleSheet("background-color:white");
//    }

//    if(bt[22]->getColor() == 0){
//        bt[22]->setColor(1);
//        bt[22]->setStyleSheet("background-color:black");
//    }else{
//        bt[22]->setColor(0);
//        bt[22]->setStyleSheet("background-color:white");
//    }

//    if(bt[23]->getColor() == 0){
//        bt[23]->setColor(1);
//        bt[23]->setStyleSheet("background-color:black");
//    }else{
//        bt[23]->setColor(0);
//        bt[23]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor33(){
//    if(bt[32]->getColor() == 0){
//        bt[32]->setColor(1);
//        bt[32]->setStyleSheet("background-color:black");
//    }else{
//        bt[32]->setColor(0);
//        bt[32]->setStyleSheet("background-color:white");
//    }

//    if(bt[33]->getColor() == 0){
//        bt[33]->setColor(1);
//        bt[33]->setStyleSheet("background-color:black");
//    }else{
//        bt[33]->setColor(0);
//        bt[33]->setStyleSheet("background-color:white");
//    }

//    if(bt[23]->getColor() == 0){
//        bt[23]->setColor(1);
//        bt[23]->setStyleSheet("background-color:black");
//    }else{
//        bt[23]->setColor(0);
//        bt[23]->setStyleSheet("background-color:white");
//    }

//    if(bt[24]->getColor() == 0){
//        bt[24]->setColor(1);
//        bt[24]->setStyleSheet("background-color:black");
//    }else{
//        bt[24]->setColor(0);
//        bt[24]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor34(){
//    if(bt[34]->getColor() == 0){
//        bt[34]->setColor(1);
//        bt[34]->setStyleSheet("background-color:black");
//    }else{
//        bt[34]->setColor(0);
//        bt[34]->setStyleSheet("background-color:white");
//    }

//    if(bt[35]->getColor() == 0){
//        bt[35]->setColor(1);
//        bt[35]->setStyleSheet("background-color:black");
//    }else{
//        bt[35]->setColor(0);
//        bt[35]->setStyleSheet("background-color:white");
//    }

//    if(bt[25]->getColor() == 0){
//        bt[25]->setColor(1);
//        bt[25]->setStyleSheet("background-color:black");
//    }else{
//        bt[25]->setColor(0);
//        bt[25]->setStyleSheet("background-color:white");
//    }

//    if(bt[26]->getColor() == 0){
//        bt[26]->setColor(1);
//        bt[26]->setStyleSheet("background-color:black");
//    }else{
//        bt[26]->setColor(0);
//        bt[26]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor35(){
//    if(bt[34]->getColor() == 0){
//        bt[34]->setColor(1);
//        bt[34]->setStyleSheet("background-color:black");
//    }else{
//        bt[34]->setColor(0);
//        bt[34]->setStyleSheet("background-color:white");
//    }

//    if(bt[35]->getColor() == 0){
//        bt[35]->setColor(1);
//        bt[35]->setStyleSheet("background-color:black");
//    }else{
//        bt[35]->setColor(0);
//        bt[35]->setStyleSheet("background-color:white");
//    }

//    if(bt[36]->getColor() == 0){
//        bt[36]->setColor(1);
//        bt[36]->setStyleSheet("background-color:black");
//    }else{
//        bt[36]->setColor(0);
//        bt[36]->setStyleSheet("background-color:white");
//    }

//    if(bt[26]->getColor() == 0){
//        bt[26]->setColor(1);
//        bt[26]->setStyleSheet("background-color:black");
//    }else{
//        bt[26]->setColor(0);
//        bt[26]->setStyleSheet("background-color:white");
//    }

//    if(bt[27]->getColor() == 0){
//        bt[27]->setColor(1);
//        bt[27]->setStyleSheet("background-color:black");
//    }else{
//        bt[27]->setColor(0);
//        bt[27]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor36(){
//    if(bt[35]->getColor() == 0){
//        bt[35]->setColor(1);
//        bt[35]->setStyleSheet("background-color:black");
//    }else{
//        bt[35]->setColor(0);
//        bt[35]->setStyleSheet("background-color:white");
//    }

//    if(bt[36]->getColor() == 0){
//        bt[36]->setColor(1);
//        bt[36]->setStyleSheet("background-color:black");
//    }else{
//        bt[36]->setColor(0);
//        bt[36]->setStyleSheet("background-color:white");
//    }

//    if(bt[37]->getColor() == 0){
//        bt[37]->setColor(1);
//        bt[37]->setStyleSheet("background-color:black");
//    }else{
//        bt[37]->setColor(0);
//        bt[37]->setStyleSheet("background-color:white");
//    }

//    if(bt[27]->getColor() == 0){
//        bt[27]->setColor(1);
//        bt[27]->setStyleSheet("background-color:black");
//    }else{
//        bt[27]->setColor(0);
//        bt[27]->setStyleSheet("background-color:white");
//    }

//    if(bt[28]->getColor() == 0){
//        bt[28]->setColor(1);
//        bt[28]->setStyleSheet("background-color:black");
//    }else{
//        bt[28]->setColor(0);
//        bt[28]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}

//void MainWindow::changeColor37(){
//    if(bt[36]->getColor() == 0){
//        bt[36]->setColor(1);
//        bt[36]->setStyleSheet("background-color:black");
//    }else{
//        bt[36]->setColor(0);
//        bt[36]->setStyleSheet("background-color:white");
//    }

//    if(bt[37]->getColor() == 0){
//        bt[37]->setColor(1);
//        bt[37]->setStyleSheet("background-color:black");
//    }else{
//        bt[37]->setColor(0);
//        bt[37]->setStyleSheet("background-color:white");
//    }

//    if(bt[28]->getColor() == 0){
//        bt[28]->setColor(1);
//        bt[28]->setStyleSheet("background-color:black");
//    }else{
//        bt[28]->setColor(0);
//        bt[28]->setStyleSheet("background-color:white");
//    }

//    if(bt[29]->getColor() == 0){
//        bt[29]->setColor(1);
//        bt[29]->setStyleSheet("background-color:black");
//    }else{
//        bt[29]->setColor(0);
//        bt[29]->setStyleSheet("background-color:white");
//    }

//    this->displayCount();
//}
