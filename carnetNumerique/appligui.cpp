#include "appligui.h"
#include "ui_appligui.h"
#include<iostream>
#include<stdio.h>




using namespace std;
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
    bool continuer = false;
    authentified = new FormLogin;
  continuer= authentified->connection();
   if(continuer==true)
   {
       QDialog fenetreSaisieInfo(this);
       fenetreSaisieInfo.exec();
   }
   else
   {
       cout<<"le mot de passe n'est pas juste réessayer"<<endl;
   }

   delete authentified;
}


void appliGui::on_actionLire_message_triggered()
{
    message = new FormMessagerie;
    message->show_reading_interface();

}

void appliGui::on_actionEcrire_message_triggered()
{
    message = new FormMessagerie;
    message->show_writting_interface();


}
