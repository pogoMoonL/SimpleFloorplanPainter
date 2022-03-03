#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //   QApplication基於QWidget所創造的class
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}
