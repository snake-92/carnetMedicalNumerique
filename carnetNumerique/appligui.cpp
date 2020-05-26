#include "appligui.h"
#include "ui_appligui.h"

appliGui::appliGui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::appliGui)
{
    ui->setupUi(this);
}

appliGui::~appliGui()
{
    delete ui;
}

void appliGui::on_BoutonCreerProfil_clicked()
{

    QDialog fenetreSaisieInfo(this);

    fenetreSaisieInfo.exec();

    profil p;
    //personne.push(p);

    p.saveProfilPublic();
}
