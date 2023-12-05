#include "addalarmdialog.h"
#include "ui_addalarmdialod.h"

addalarmdialog::addalarmdialog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addalarmdialog)
{
    ui->setupUi(this);
}

addalarmdialog::~addalarmdialog()
{
    delete ui;
}
