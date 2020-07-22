#include "mainwindow.h"
#include "Phase2.h"
#include "Phase1.h"
#include "Phase2KO.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
