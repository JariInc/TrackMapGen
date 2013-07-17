#include "trackmapgen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TrackMapGen w;
    w.show();
    
    return a.exec();
}
