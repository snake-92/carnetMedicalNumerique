#include "dialogafficheinfo.h"
#include "ui_dialogafficheinfo.h"

DialogAfficheInfo::DialogAfficheInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAfficheInfo)
{
    ui->setupUi(this);

    qDebug() << "constructeur !! ";

    //filePublic.setFileName("data/profil/new_profil/new_profil_publicData.xml");
    //filePublic.setFileName("data/profil/profil_1/public/publicDataFile.xml");

    afficheInfo();
}


DialogAfficheInfo::~DialogAfficheInfo()
{
    delete ui;
}


void DialogAfficheInfo::on_pushButtonFermer_clicked()
{
    hide();
}


void DialogAfficheInfo::afficheInfo(){


    QString pseudo;
    QFile filetemp("data/temp/temp.txt");
    if (filetemp.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream out(&filetemp);
        out >> pseudo;
        filetemp.close();
    }

    filePublic.setFileName("data/profil/"+pseudo+"/"+pseudo+"_publicData.xml");


    QDomDocument xmlBOM;

    filePublic.open(QFile::ReadOnly | QFile::Text);

    xmlBOM.setContent(&filePublic);

    QDomElement root = xmlBOM.documentElement();

    QDomElement element = root.firstChild().toElement();
    QDomElement sousElement;

    while(!element.isNull())
    {
        if (element.tagName()=="nom")
            ui->labelNom->setText(element.text());

        if (element.tagName()=="prenom")
            ui->labelPrenom->setText(element.text());

        if (element.tagName()=="sexe")
            ui->labelSexe->setText(element.text());

        if (element.tagName()=="taille")
            ui->labelTaille->setText(element.text());

        if (element.tagName()=="poids")
            ui->labelPoids->setText(element.text());

        if (element.tagName()=="date")
            ui->labelDateNaissance->setText(element.text());

        if (element.tagName()=="tel")
            ui->labelTel->setText(element.text());

        if (element.tagName()=="adress")
            ui->labelAdresse->setText(element.text());

        if (element.tagName()=="profession")
            ui->labelProfession->setText(element.text());

        if (element.tagName()=="medecin"){
            sousElement = element.firstChild().toElement();
            while(!sousElement.isNull())
            {
                //if (sousElement.tagName()=="nom")
                //if (sousElement.tagName()=="tel")
                sousElement = sousElement.nextSibling().toElement();
            }
        }

        if (element.tagName()=="contact"){
            sousElement = element.firstChild().toElement();
            while(!sousElement.isNull())
            {
                //if (sousElement.tagName()=="nom")
                //if (sousElement.tagName()=="tel")
                sousElement = sousElement.nextSibling().toElement();
            }
        }

        element = element.nextSibling().toElement();
    }

    filePublic.close();

}
