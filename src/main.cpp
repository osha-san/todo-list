#include <QApplication>
#include "gui/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow window;
    window.setWindowTitle("To-Do List Manager");
    window.resize(900,600);
    window.show();


    return app.exec();
}