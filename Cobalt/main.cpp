#include "mainwindow.h"
#include "newitem.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow home;
    home.show();
    return a.exec();
}

void MainWindow::handleButton()
{

}

void MainWindow::on_actionNew_item_triggered()
{
    newItem *wdg = new newItem;
    wdg->show();
}

void newItem::handleButton()
{

}
