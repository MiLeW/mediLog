#include "medilog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mediLog w;
    w.show();

    return a.exec();
}
