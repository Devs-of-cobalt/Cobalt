#include "newitem.h"
#include "ui_newitem.h"
#include <fstream>
#include <QList>

enum eItemType {
    NONE,
    TOOL,
    ARMOR,
    BLOCK
};

newItem::newItem(QWidget* parent) : QMainWindow(parent), ui(new Ui::newItem) {
    ui->setupUi(this);

    ui->nameLineEdit->setText("");

    ui->subTypeComboBox->setEnabled(false);

    ui->typeComboBox->addItems({ "none", "tools", "armor", "block" });
}

newItem::~newItem() {
    delete ui;
}

void newItem::on_B_clicked() {
    if (ui->nameLineEdit->text().isEmpty()) {
        QMessageBox* error = new QMessageBox(QMessageBox::Warning, "Invalid Name", "Please give a name to your item!");
        error->open();
    } else {
        QList<QString> lore;
        lore = ui->loreTextEdit->toPlainText().split("\n").toList();

        hide();
    }
}

bool isNotAlNum(QChar c) {
    return !isalnum(c.toLatin1());
}

QList<QString> test(std::string fileName, std::string searchFor) {
    // ffuck you
    #define ff word.removeIf(isNotAlNum);list.emplaceBack(word);
    int searchForSize = searchFor.length();
    // Le faire fonctionner avec le système de resources qt? (En utilisant QFile au lieu de ifstream)
    std::ifstream file(fileName);
    QList<QString> list;
    bool found = false;

    if (file.is_open()) {
        QString word = "";
        while (file) {
            char c = file.get();
            if (found) {
                word += c;

                if (c == ',') {
                    ff
                    goto end;
                } else if (c == '|') {
                    ff
                    word = "";
                }
            } else {
                word += c;
                for (int i = 0; i < searchForSize; ++i) {
                    if (word[word.length()-i] != searchFor[searchForSize-i])
                        break;
                    else if (i == searchForSize-1) {
                        found = true;
                        word = "";
                    }
                }
            }
        }
    } else
        return static_cast<QList<QString>>("ERROR");

    end:
    #undef ff
    list.squeeze();
    return list;
}

void newItem::on_typeComboBox_currentIndexChanged(int index) {
    ui->subTypeComboBox->clear();

    switch (static_cast<eItemType>(index)) {
    case TOOL:
        ui->subTypeComboBox->setEnabled(true);
        //ui->subTypeComboBox->addItems({"axe", "hoe", "pickaxe", "shovel", "sword"});
        ui->subTypeComboBox->addItems(test("C:/Users/micha/OneDrive/Documents/Cobalt/mods/args.jsonc", "type"));
        break;

    case ARMOR:
        ui->subTypeComboBox->setEnabled(true);
        //ui->subTypeComboBox->addItems({"head", "chest", "legs", "feet"});
        ui->subTypeComboBox->addItems(test("args.jsonc", "armor"));
        break;

    default:
        ui->subTypeComboBox->setEnabled(false);
        break;
    }
}
