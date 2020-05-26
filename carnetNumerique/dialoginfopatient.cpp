#include "dialoginfopatient.h"
#include "ui_dialoginfopatient.h"

DialogInfoPatient::DialogInfoPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInfoPatient)
{
    ui->setupUi(this);
}

DialogInfoPatient::~DialogInfoPatient()
{
    delete ui;
}
