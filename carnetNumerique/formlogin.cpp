#include "formlogin.h"
#include "ui_formlogin.h"
#include<iostream>
#include<fstream>
#include <QInputDialog>
#include "appligui.h"



using namespace std;



FormLogin::FormLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormLogin)
{
    ui->setupUi(this);
}

FormLogin::~FormLogin()
{
    delete ui;
}

 void FormLogin::on_bouton_saveIdConexion_clicked()
{
    // vérifier que tout les champs ne sont pas vide
    // attribuer les valeur aux variable du profil avec les setter
    bool passNotvoid =false;
    bool nameMailNotVoid = false;
    bool passEqual = false;
    AdminProfil = new profil;

    if(!ui->MotDePasseValue->text().isEmpty() && !ui->ConfirMotDePasseValue->text().isEmpty())
    {
        passNotvoid = true;
        if(ui->MotDePasseValue->text() == ui->ConfirMotDePasseValue->text())
        {
            AdminProfil->setMotDePasse(ui->ConfirMotDePasseValue->text());
            passEqual= true;

        }
        else
            {
                QMessageBox::warning(this, "Mots de passe différents","Attention verifier les mots de passe!");
            }

    }

    if(! ui->NomAdminValue->text().isEmpty() && !ui->MailTelValue->text().isEmpty())
    {
        AdminProfil->setNomAdmin(ui->NomAdminValue->text());
        AdminProfil->setMailTelAdmin(ui->MailTelValue->text());
        nameMailNotVoid = true;

    }

    if(nameMailNotVoid && passNotvoid) // si aucun champs n'est vide et passe confirmer
    {
        // appel de la fonction de sauvegarde des identifiants
        // on accède aux valeurs par des getters
        AdminProfil->identifiant.mNomAdmin = AdminProfil->getNomAdmin() ;
        AdminProfil->identifiant.mMotDePasse =AdminProfil->getMotDePasse() ;
        AdminProfil->identifiant.mMailTelAdmin = AdminProfil->getMailTelAdmin();

       // on passe alors la structure à la fonction de sauvegarde
        AdminProfil->saveConnectionId( AdminProfil->identifiant);
        close(); // on ferme la fenêtre d'activation ou de creation de compte
        Wprincipale = new appliGui;
        Wprincipale->show(); // on affiche la principale
    }
    else
    {
        QMessageBox::warning(this, "Champs non remplir","Attention! Merci de remplir tous les champs");
    }

}




// fonction d'authentification

bool FormLogin:: connection()
{
    bool ok = false;
    // boite de dialogue pour entrer le passe user
        QString userInputPass = QInputDialog::getText(this, "Autorisation d'accès",
                                               "Entrez votre mot de passe",
                                               QLineEdit::Normal, QString(), &ok);

        FILE *p = fopen("profilAdmin/idConnexion/IdConnexion.dat","rb");
    AdminProfil =new profil;
    bool continuer = false;

    size_t n = fread(&AdminProfil->identifiant, sizeof(AdminProfil->identifiant), 1, p);
    if (n != 1)
    {
          qDebug () << "complicado de lire le fichier d'authentification" << endl;
    }
    else
    {
     QString   idonefile = AdminProfil->identifiant.mMotDePasse;
     qDebug() <<idonefile;
     string idonefileString = idonefile.toUtf8().constData();

     cout<< idonefileString<<endl;
      cout<< "HHHHHHHHHHHHHHHH" <<endl;

          if (ok && !userInputPass.isEmpty())
          {

              if(userInputPass.toUtf8().constData()!=idonefile.toUtf8().constData())
              {

                  QMessageBox::critical(this, "Autorisation d'accès",
                                        "Votre mot de passe n'est pas valide, merci de ressayer");
                  return continuer;
              }
              else
              {
                 return continuer = true;
              }


          }
          else
          {
              QMessageBox::critical(this, "Autorisation d'accès",
                                    "Vous n'avez pas saisir votre mot de passe!,Merci d'entrer le mot de passe");
          }
    }

    delete AdminProfil;
         return continuer;

}
