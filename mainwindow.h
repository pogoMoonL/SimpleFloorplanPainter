#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// QMainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     // null vs nullptr[c++11] ; explicit
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *);    //繪製背景圖
    // 目前用不到下面兩個
    // void keyPressEvent(QKeyEvent *event);	//鍵盤事件
    // void mousePressEvent(QMouseEvent *event);	//滑鼠點下事件
private:
    int win_width;      // 視窗寬度
    int win_height;     // 視窗高度
};
#endif // MAINWINDOW_H
