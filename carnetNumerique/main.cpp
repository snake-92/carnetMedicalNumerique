#include "appligui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    appliGui w;
    w.show();

    return a.exec();
}

// nous sommes les meilleurs!!!
