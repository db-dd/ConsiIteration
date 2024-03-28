//#include "mainwindow.h"
#include "cplay.h"
//#include "play.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    CPlay p;
    p.show();
//    Play p;
//    p.show();


    return a.exec();
}
