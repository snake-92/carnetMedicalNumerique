#include "dialogafficheinfo.h"
#include "ui_dialogafficheinfo.h"

DialogAfficheInfo::DialogAfficheInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAfficheInfo)
{
    ui->setupUi(this);
}

DialogAfficheInfo::~DialogAfficheInfo()
{
    delete ui;
}
