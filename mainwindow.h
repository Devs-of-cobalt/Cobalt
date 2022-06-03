#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "C:\Qt\6.1.2\mingw81_64\include\QtWidgets\QMainWindow"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void handleButton();

    void on_actionNew_item_triggered();

private:
    Ui::MainWindow* ui;
    QAction* createItemButton;
};
#endif // MAINWINDOW_H
