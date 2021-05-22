#include "greetings.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Greetings w;
    w.show();
    return a.exec();
}
