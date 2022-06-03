/********************************************************************************
** Form generated from reading UI file 'newitem.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWITEM_H
#define UI_NEWITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newItem
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *typeLabel;
    QComboBox *typeComboBox;
    QLabel *subTypeLabel;
    QComboBox *subTypeComboBox;
    QLabel *iDLabel;
    QLineEdit *iDLineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *damageLabel;
    QSpinBox *damageSpinBox;
    QLabel *durabilityLabel;
    QSpinBox *durabilitySpinBox;
    QLabel *loreLabel;
    QTextEdit *loreTextEdit;
    QPushButton *B;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *newItem)
    {
        if (newItem->objectName().isEmpty())
            newItem->setObjectName(QString::fromUtf8("newItem"));
        newItem->resize(800, 600);
        centralwidget = new QWidget(newItem);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 781, 491));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 779, 489));
        formLayoutWidget = new QWidget(scrollAreaWidgetContents);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(49, 49, 641, 381));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(formLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        typeLabel = new QLabel(formLayoutWidget);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, typeLabel);

        typeComboBox = new QComboBox(formLayoutWidget);
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, typeComboBox);

        subTypeLabel = new QLabel(formLayoutWidget);
        subTypeLabel->setObjectName(QString::fromUtf8("subTypeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, subTypeLabel);

        subTypeComboBox = new QComboBox(formLayoutWidget);
        subTypeComboBox->setObjectName(QString::fromUtf8("subTypeComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, subTypeComboBox);

        iDLabel = new QLabel(formLayoutWidget);
        iDLabel->setObjectName(QString::fromUtf8("iDLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, iDLabel);

        iDLineEdit = new QLineEdit(formLayoutWidget);
        iDLineEdit->setObjectName(QString::fromUtf8("iDLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, iDLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(4, QFormLayout::SpanningRole, horizontalSpacer);

        damageLabel = new QLabel(formLayoutWidget);
        damageLabel->setObjectName(QString::fromUtf8("damageLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, damageLabel);

        damageSpinBox = new QSpinBox(formLayoutWidget);
        damageSpinBox->setObjectName(QString::fromUtf8("damageSpinBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, damageSpinBox);

        durabilityLabel = new QLabel(formLayoutWidget);
        durabilityLabel->setObjectName(QString::fromUtf8("durabilityLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, durabilityLabel);

        durabilitySpinBox = new QSpinBox(formLayoutWidget);
        durabilitySpinBox->setObjectName(QString::fromUtf8("durabilitySpinBox"));

        formLayout->setWidget(6, QFormLayout::FieldRole, durabilitySpinBox);

        loreLabel = new QLabel(formLayoutWidget);
        loreLabel->setObjectName(QString::fromUtf8("loreLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, loreLabel);

        loreTextEdit = new QTextEdit(formLayoutWidget);
        loreTextEdit->setObjectName(QString::fromUtf8("loreTextEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, loreTextEdit);

        scrollArea->setWidget(scrollAreaWidgetContents);
        B = new QPushButton(centralwidget);
        B->setObjectName(QString::fromUtf8("B"));
        B->setGeometry(QRect(20, 510, 80, 25));
        newItem->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newItem);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        newItem->setMenuBar(menubar);
        statusbar = new QStatusBar(newItem);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        newItem->setStatusBar(statusbar);

        retranslateUi(newItem);

        QMetaObject::connectSlotsByName(newItem);
    } // setupUi

    void retranslateUi(QMainWindow *newItem)
    {
        newItem->setWindowTitle(QCoreApplication::translate("newItem", "MainWindow", nullptr));
        nameLabel->setText(QCoreApplication::translate("newItem", "Name", nullptr));
        typeLabel->setText(QCoreApplication::translate("newItem", "Type", nullptr));
        subTypeLabel->setText(QCoreApplication::translate("newItem", "SubType", nullptr));
        iDLabel->setText(QCoreApplication::translate("newItem", "ID", nullptr));
        damageLabel->setText(QCoreApplication::translate("newItem", "Damage", nullptr));
        durabilityLabel->setText(QCoreApplication::translate("newItem", "Durability", nullptr));
        loreLabel->setText(QCoreApplication::translate("newItem", "Lore", nullptr));
        B->setText(QCoreApplication::translate("newItem", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newItem: public Ui_newItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWITEM_H
