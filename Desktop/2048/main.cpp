#include "pro_2048.h"
#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pro_2048 w;
    w.show();

    return a.exec();
}
