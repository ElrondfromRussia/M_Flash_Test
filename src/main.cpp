#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setDesktopSettingsAware(false);
    QApplication::setAttribute(Qt::AA_Use96Dpi);
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::FramelessWindowHint | Qt::X11BypassWindowManagerHint);
    w.show();

    return a.exec();
}
