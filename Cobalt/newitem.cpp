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

    ui->nameLineEdit->setText("");
}

newItem::~newItem()
{
    delete ui;
}


void newItem::on_CB_Type_currentIndexChanged(int index)
{
    ui->subTypeComboBox->clear();

    eItemType type = static_cast<eItemType>(index);
    switch(type) {
    case ANY:
        ui->subTypeComboBox->setEnabled(false);
        break;

    case TOOL:
        ui->subTypeComboBox->setEnabled(true);
        ui->subTypeComboBox->addItems({"axe", "hoe", "pickaxe", "shovel", "sword"});
        break;

    case ARMOR:
        ui->subTypeComboBox->setEnabled(true);
        ui->subTypeComboBox->addItems({"head", "chest", "legs", "feet"});
        break;

    case BLOCK:
        ui->subTypeComboBox->setEnabled(false);
        break;
    }
}


void newItem::on_B_clicked()
{
    if (!ui->iDLineEdit->text().contains(":")) {
        QMessageBox *error = new QMessageBox(QMessageBox::Warning, "Invalid ID", "Please include the mod id in the item id (mod_id:item_id).");
        error->open();
    } else if (ui->nameLineEdit->text().isEmpty()) {
        QMessageBox *error = new QMessageBox(QMessageBox::Warning, "Invalid Name", "Please give a name to your item!");
        error->open();
    } else {
        hide();
    }
}
