/********************************************************************************
** Form generated from reading UI file 'qtcode.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCODE_H
#define UI_QTCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtcode
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *qtcode)
    {
        if (qtcode->objectName().isEmpty())
            qtcode->setObjectName("qtcode");
        qtcode->resize(800, 600);
        centralwidget = new QWidget(qtcode);
        centralwidget->setObjectName("centralwidget");
        qtcode->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qtcode);
        menubar->setObjectName("menubar");
        qtcode->setMenuBar(menubar);
        statusbar = new QStatusBar(qtcode);
        statusbar->setObjectName("statusbar");
        qtcode->setStatusBar(statusbar);

        retranslateUi(qtcode);

        QMetaObject::connectSlotsByName(qtcode);
    } // setupUi

    void retranslateUi(QMainWindow *qtcode)
    {
        qtcode->setWindowTitle(QCoreApplication::translate("qtcode", "qtcode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtcode: public Ui_qtcode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCODE_H
