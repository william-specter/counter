#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationDisplayName("Counter");
    a.setApplicationName("Counter");
    a.setStyle("fusion");

    Widget w;
    w.show();

    return a.exec();
}
