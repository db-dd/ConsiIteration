#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "hexagonbutton.h"
#include <QLabel>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();
    void play();

private:
    Ui::MainWindow *ui;
    QLabel *ql[4];
    QLineEdit *number[4];
    int source[3][19];
    QPushButton *start;
};
#endif // MAINWINDOW_H
