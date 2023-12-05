#include "addalarmdialog.h"
#include "ui_addalarmdialod.h"

addalarmdialod::addalarmdialod(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addalarmdialod)
{
    ui->setupUi(this);
}

addalarmdialod::~addalarmdialod()
{
    delete ui;
}
