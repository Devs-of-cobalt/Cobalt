#ifndef NEWITEM_H
#define NEWITEM_H

#include <QMainWindow>
#include <QLineEdit>
#include <QMessageBox>

namespace Ui {
class newItem;
}

class newItem : public QMainWindow
{
    Q_OBJECT

public:
    explicit newItem(QWidget *parent = nullptr);
    ~newItem();

private slots:
    void handleButton();

    void on_B_clicked();

    void on_typeComboBox_currentIndexChanged(int index);

private:
    Ui::newItem *ui;
    QLineEdit *ED_Name;
};

#endif // NEWITEM_H
