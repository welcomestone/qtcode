#pragma once
#include "ui_qtcode.h"
#include <QMainWindow>

class qtcode : public QMainWindow {
    Q_OBJECT
    
public:
    qtcode(QWidget* parent = nullptr);
    ~qtcode();

private:
    Ui_qtcode* ui;
};