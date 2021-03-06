#include "dialoginfopatient.h"
#include "ui_dialoginfopatient.h"
#include <qinputdialog.h>


DialogInfoPatient::DialogInfoPatient(QWidget *parent, bool modif) :
    QDialog(parent),
    ui(new Ui::DialogInfoPatient)
{
    ui->setupUi(this);

	adminProfil = true;

    EnableModif = modif; // permet de savoir si ouvre cette fenêtre pour creer ou modifier un profil

    // imposer la saisie de nombre dans les champs "N° de tél"
    ui->lineEditTel->setValidator(new QIntValidator(0, 9999999999, this));
    ui->lineEditTelContact->setValidator(new QIntValidator(0, 9999999999, this));
    ui->lineEditTelMedecin->setValidator(new QIntValidator(0, 9999999999, this));

    if(modif){
        remplirLaPage();
    }
}


DialogInfoPatient::~DialogInfoPatient()
{
    delete ui;
}


void DialogInfoPatient::setInAdminProfil(bool b){
	adminProfil = b;
}


/**
 * @return Initialise tout les attributs du profil et les enregistre dans le fichier publique
*/
void DialogInfoPatient::on_buttonBox_accepted()
{
    // TO DO verification d'identité

    // creation d'un nouveau profil
	bool testPseudo;
    profil nouveauProfil;

	if(!EnableModif && !adminProfil){

		pseudoProfil = QInputDialog::getText (this, "nom du profil", "Entrer le nom de votre profil");
		testPseudo = pseudoExist(pseudoProfil);

		if(!testPseudo){// test si le profil existe déjà

			nouveauProfil.creerFichierProfil(pseudoProfil);

			// envoi l'information de creation de profil
			emit newprofil(pseudoProfil);

			// enregistrement du nom de profil dans le fichier temporaire
			QFile file("data/temp/temp.txt");
			if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
				QTextStream out(&file);
				out << pseudoProfil;
				file.close();
			}
		}else{
			int choice = QMessageBox::warning(this, tr("Création de profil"),
										   tr("Ce nom de profil existe déjà!"),
										   QMessageBox::Cancel,
										   QMessageBox::Cancel);
		}
    }

	if(adminProfil){
		nouveauProfil.creerFichierProfil("admin", true); // specifie que c'est la creation du profil admin avec le "true"

		// envoi l'information de creation de profil
		emit newprofil("admin");

		// enregistrement du nom de profil dans le fichier temporaire
		QFile file("data/temp/temp.txt");
		if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
			QTextStream out(&file);
			out << "admin";
			file.close();
		}
	}


	if(!testPseudo){
		// recuperation des infos
		nouveauProfil.setNom(ui->lineEditNom->text());
		nouveauProfil.setPrenom(ui->lineEditPrenom->text());

		if(ui->radioButtonM->isChecked()){
			nouveauProfil.setSexe("M");
		}
		if(ui->radioButtonMme->isChecked()){
			nouveauProfil.setSexe("F");
		}

		nouveauProfil.setAdresse(ui->lineEditEmail->text());
		nouveauProfil.setDateNaissance(ui->dateEditDate->text());
		nouveauProfil.setProfession(ui->lineEditProfession->text());
		nouveauProfil.setTel(ui->lineEditTel->text());
		nouveauProfil.setGroupSanguin(ui->comboBoxGroupe->currentText() + ui->comboBoxRhesus->currentText());
		nouveauProfil.setTaille(ui->doubleSpinBoxTaille->value());
		nouveauProfil.setPoids(ui->doubleSpinBoxPoids->value());
		nouveauProfil.setPersonContact(ui->lineEditContact->text(), ui->lineEditTelContact->text());
		nouveauProfil.setMedecin(ui->lineEditNomMedecin->text(), ui->lineEditTelMedecin->text());

		nouveauProfil.saveProfilPublic(); // sauvegarder dans le fichier publique

		hide();
	}
}


void DialogInfoPatient::on_buttonBox_rejected()// bouton annuler
{
    hide();
}


/**
 * @file utilise le fichier du profil
 * @return Rempli les champs de saisi avec les informations du profil pour qu'il puisse faire les modifs
*/
void DialogInfoPatient::remplirLaPage(){

    // TO DO : faudrais utiliser l'instance profil pour recuperer ses infos avec les getters

    // recuperer le pseudo
    QString pseudo;
    QFile filetemp("data/temp/temp.txt");
    if (filetemp.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream out(&filetemp);
        out >> pseudo;
        filetemp.close();
    }

    QFile file;
    //file.setFileName("data/profil/profil_1/public/publicDataFile.xml");
    // ouverture du fichier contenant le profil ouvert
    file.setFileName("data/profil/"+pseudo+"/"+pseudo+"_publicData.xml");

    QDomDocument xmlBOM;

    file.open(QFile::ReadOnly | QFile::Text);

    xmlBOM.setContent(&file);

    QDomElement root = xmlBOM.documentElement();
    QDomElement element = root.firstChild().toElement();
    QDomElement sousElement;

    while(!element.isNull())
    {
        if (element.tagName()=="nom")
            ui->lineEditNom->setText(element.text());

        if (element.tagName()=="prenom")
            ui->lineEditPrenom->setText(element.text());

        if (element.tagName()=="sexe"){
            if(element.text() == "M")
                ui->radioButtonM->setChecked(true);
            else if("F")
                ui->radioButtonMme->setChecked(true);
        }

        if (element.tagName()=="taille")
            ui->doubleSpinBoxTaille->setValue(element.text().toDouble());

        if (element.tagName()=="poids")
            ui->doubleSpinBoxPoids->setValue(element.text().toDouble());

        if (element.tagName()=="date")
            ui->dateEditDate->setDate(QDate::fromString(element.text(), "dd/MM/yyyy"));

        if (element.tagName()=="tel")
            ui->lineEditTel->setText(element.text());

        if (element.tagName()=="adress")
            ui->lineEditEmail->setText(element.text());

        if (element.tagName()=="profession")
            ui->lineEditProfession->setText(element.text());

        if (element.tagName()=="medecin"){
            sousElement = element.firstChild().toElement();
            while(!sousElement.isNull())
            {
                if (sousElement.tagName()=="nom")
                    ui->lineEditNomMedecin->setText(sousElement.text());
                if (sousElement.tagName()=="tel")
                    ui->lineEditTelMedecin->setText(sousElement.text());

                sousElement = sousElement.nextSibling().toElement();
            }
        }

        if (element.tagName()=="contact"){
            sousElement = element.firstChild().toElement();
            while(!sousElement.isNull())
            {
                if (sousElement.tagName()=="nom")
                    ui->lineEditContact->setText(sousElement.text());
                if (sousElement.tagName()=="tel")
                    ui->lineEditTelContact->setText(sousElement.text());

                sousElement = sousElement.nextSibling().toElement();
            }
        }
        element = element.nextSibling().toElement();
    }

    file.close();
}


bool DialogInfoPatient::pseudoExist(QString pseudo){
	bool trouver = false;

	// lister tous les noms de profils dans le dossier profil
	QDir repertoireProfil("data/profil/");
	QStringList list = repertoireProfil.entryList();

	for(int i=2; i<list.length(); i++){ // comparaison avec les autres pseudo
		if(pseudo == list[i]){
			trouver = true;
			break; // si les pseudo entrer existe déjà retourner true
		}
	}
	return trouver;
}


void DialogInfoPatient::setEnableModif(bool b){
	EnableModif = b;
	remplirLaPage();
}
