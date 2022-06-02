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
#include <QtWidgets/QStatusBar>
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
    QLabel *ST_Name;
    QLineEdit *ED_Name;
    QLabel *ST_Type;
    QComboBox *CB_Type;
    QLabel *ST_SubType;
    QComboBox *CB_SubType;
    QLabel *ST_ID;
    QLineEdit *ED_ID;
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
        scrollArea->setGeometry(QRect(10, 10, 771, 491));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 769, 489));
        formLayoutWidget = new QWidget(scrollAreaWidgetContents);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(-1, -1, 771, 491));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        ST_Name = new QLabel(formLayoutWidget);
        ST_Name->setObjectName(QString::fromUtf8("ST_Name"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ST_Name);

        ED_Name = new QLineEdit(formLayoutWidget);
        ED_Name->setObjectName(QString::fromUtf8("ED_Name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, ED_Name);

        ST_Type = new QLabel(formLayoutWidget);
        ST_Type->setObjectName(QString::fromUtf8("ST_Type"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ST_Type);

        CB_Type = new QComboBox(formLayoutWidget);
        CB_Type->addItem(QString());
        CB_Type->addItem(QString());
        CB_Type->addItem(QString());
        CB_Type->addItem(QString());
        CB_Type->setObjectName(QString::fromUtf8("CB_Type"));

        formLayout->setWidget(1, QFormLayout::FieldRole, CB_Type);

        ST_SubType = new QLabel(formLayoutWidget);
        ST_SubType->setObjectName(QString::fromUtf8("ST_SubType"));

        formLayout->setWidget(2, QFormLayout::LabelRole, ST_SubType);

        CB_SubType = new QComboBox(formLayoutWidget);
        CB_SubType->setObjectName(QString::fromUtf8("CB_SubType"));
        CB_SubType->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, CB_SubType);

        ST_ID = new QLabel(formLayoutWidget);
        ST_ID->setObjectName(QString::fromUtf8("ST_ID"));

        formLayout->setWidget(3, QFormLayout::LabelRole, ST_ID);

        ED_ID = new QLineEdit(formLayoutWidget);
        ED_ID->setObjectName(QString::fromUtf8("ED_ID"));

        formLayout->setWidget(3, QFormLayout::FieldRole, ED_ID);

        scrollArea->setWidget(scrollAreaWidgetContents);
        B = new QPushButton(centralwidget);
        B->setObjectName(QString::fromUtf8("B"));
        B->setGeometry(QRect(20, 510, 80, 25));
        newItem->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newItem);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        ST_Name->setText(QCoreApplication::translate("newItem", "Name:", nullptr));
        ST_Type->setText(QCoreApplication::translate("newItem", "Type:", nullptr));
        CB_Type->setItemText(0, QCoreApplication::translate("newItem", "any", nullptr));
        CB_Type->setItemText(1, QCoreApplication::translate("newItem", "tool", nullptr));
        CB_Type->setItemText(2, QCoreApplication::translate("newItem", "armor", nullptr));
        CB_Type->setItemText(3, QCoreApplication::translate("newItem", "block", nullptr));

        ST_SubType->setText(QCoreApplication::translate("newItem", "Subtype:", nullptr));
        ST_ID->setText(QCoreApplication::translate("newItem", "ID:", nullptr));
        B->setText(QCoreApplication::translate("newItem", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newItem: public Ui_newItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWITEM_H
