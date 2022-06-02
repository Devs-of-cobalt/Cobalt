#include "newitem.h"
#include "ui_newitem.h"

enum eItemType {
    ANY,
    TOOL,
    ARMOR,
    BLOCK
};

newItem::newItem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newItem)
{
    ui->setupUi(this);

    ui->ED_Name->setText("");
}

newItem::~newItem()
{
    delete ui;
}


void newItem::on_CB_Type_currentIndexChanged(int index)
{
    ui->CB_SubType->clear();

    eItemType type = static_cast<eItemType>(index);
    switch(type) {
    case ANY:
        ui->CB_SubType->setEnabled(false);
        break;

    case TOOL:
        ui->CB_SubType->setEnabled(true);
        ui->CB_SubType->addItems({"axe", "hoe", "pickaxe", "shovel", "sword"});
        break;

    case ARMOR:
        ui->CB_SubType->setEnabled(true);
        ui->CB_SubType->addItems({"head", "chest", "legs", "feet"});
        break;

    case BLOCK:
        ui->CB_SubType->setEnabled(false);
        break;
    }
}


void newItem::on_B_clicked()
{
    if (!ui->ED_ID->text().contains(":")) {
        QMessageBox *error = new QMessageBox(QMessageBox::Warning, "Invalid ID", "Please include the mod id in the item id (mod_id:item_id).");
        error->open();
    } else if (ui->ED_Name->text().isEmpty()) {
        QMessageBox *error = new QMessageBox(QMessageBox::Warning, "Invalid Name", "Please give a name to your item!");
        error->open();
    } else {
        hide();
    }
}
