#include "qtcode.h"

qtcode::qtcode(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_qtcode)
{
    ui->setupUi(this);
}

qtcode::~qtcode()
{
    delete ui; 
}