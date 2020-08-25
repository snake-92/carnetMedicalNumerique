#include "formmessagerie.h"
#include "ui_formmessagerie.h"

FormMessagerie::FormMessagerie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormMessagerie)
{
    ui->setupUi(this);
}

FormMessagerie::~FormMessagerie()
{
    delete ui;
}

void FormMessagerie::show_reading_interface()
{
    ui->B_save_message->setEnabled(false);
    ui->B_read_message->setEnabled(true);
    ui->B_write_message->setEnabled(true);



    ui->nomMedValue->setVisible(false);
    ui->nomMedLab->setVisible(false);

    ui->adressMedValue->setVisible(false);
    ui->adresseMedLabe->setVisible(false);


    ui->dateLab->setVisible(false);
    ui->dateValue->setVisible(false);
    mp = new MenuPrincipal;
    QString messegeOnFile = mp->readMessage();
    ui->messageValue->clear();
    ui->messageValue->setText(ui->messageValue->toPlainText()+messegeOnFile+"\n");


    show();

}

 void FormMessagerie::show_writting_interface()
 {
     ui->B_save_message->setEnabled(true);
     ui->B_read_message->setEnabled(true);

     ui->nomMedValue->setVisible(true);
     ui->nomMedLab->setVisible(true);

     ui->adressMedValue->setVisible(true);
     ui->adresseMedLabe->setVisible(true);


     ui->dateLab->setVisible(true);
     ui->dateValue->setVisible(true);
      ui->messageValue->clear(); // le contenue de linterfce


     show();

 }


void FormMessagerie::on_B_save_message_clicked()
{
    /* on recupère les entrées du medecin et on
     * fait appel à la fonction de sauvegarde */



    mp = new MenuPrincipal;
    mp->setNomSoignant(ui->nomMedValue->text());
    mp->setdateSoin(ui->dateValue->text());
    mp->setAdressesSoignant(ui->adressMedValue->text());
    mp->setmessageSoignant(ui->messageValue->toPlainText());
    // toPlainText: Returns the content of the QTextEdit text field as plain text.


    QString nMed = mp->getNomSoignant();
    QString adMed = mp->getdateSoin();
    QString date = mp->getAdressesSoignant();
    QString mesMed = mp->getmessageSoignant();

    mp->saveMessage(nMed,adMed,date,mesMed);
    delete mp;

}

void FormMessagerie::on_B_read_message_clicked()
{
   show_reading_interface();

}

void FormMessagerie::on_B_retour_menu_principal_clicked()
{
    close();
}



void FormMessagerie::on_B_write_message_clicked()
{
   show_writting_interface();


}
