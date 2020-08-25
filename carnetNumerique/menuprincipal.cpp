#include "menuprincipal.h"

#include<iostream>
#include<fstream>
#include <QFile>
#include <QDebug>


using namespace std;

MenuPrincipal::MenuPrincipal()
{

}
MenuPrincipal::~MenuPrincipal()
{

}

void MenuPrincipal::saveMessage(QString nomSignant, QString adresseSoignant, QString date, QString message)
{
    ofstream wfile("profilAdmin/Ami.txt", ios::out | ios::app);
    if(!wfile) {
        qDebug("cannot open file in write mode");
        return;
    }
    else
    {
        wfile.write((char *) &nomSignant, sizeof(QString)*nomSignant.size());
        wfile.write((char *) &adresseSoignant, sizeof(QString)*adresseSoignant.size());
        wfile.write((char *) &date, sizeof(QString)*date.size());
        wfile.write((char *) &message, sizeof(QString)*message.size());

         wfile.close();
    }

     // test de bonne écriture
    if(!wfile.good()) {
       qDebug("Error occurred at writing time!");
       return;
    }

}







QString MenuPrincipal::readMessage()
{
    //QString filename="profilAdmin/Ami.txt";
      // QFile file(filename);
       string line;
       string result;
       QString contentfile;
       ifstream myfile ("profilAdmin/Ami.txt");

       if (myfile.is_open())
        {
           while ( getline (myfile,line) )
              {
                result += line;
              }
              myfile.close();
            }
       contentfile = QString::fromStdString(result);
       return contentfile;

       }










       /*if(!file.exists()){
           qDebug() << "no le fichier n'exixt pas "<< endl;
       }else{
           qDebug() << filename<<" Votre fichoier existe...";
       }
       QString line;

       if (file.open(QIODevice::ReadOnly| QIODevice::Text)){
           QTextStream stream(&file);
           while (!stream.atEnd()){
               line = stream.readLine();
             //  ui->textEdit->setText(ui->textEdit->toPlainText()+line+"\n");
               qDebug() << "linea: "<<line;
           }
       }
       file.close();
       return line; */








// setter implementation
void MenuPrincipal:: setNomSoignant(QString nom)
{
    nomSoignant = nom;
}

void MenuPrincipal:: setAdressesSoignant(QString adresse)
{
    adressesSoignant = adresse;
}

void MenuPrincipal:: setdateSoin(QString date)
{
    dateSoin = date;
}
void MenuPrincipal:: setmessageSoignant(QString message)
{
    messageSoignant = message;

}


// getter implementation


// setter implementation
QString MenuPrincipal:: getNomSoignant()
{
    return nomSoignant;
}

QString MenuPrincipal:: getAdressesSoignant()
{
   return adressesSoignant;
}

QString MenuPrincipal:: getdateSoin()
{
    return dateSoin;
}
QString MenuPrincipal:: getmessageSoignant()
{
    return messageSoignant ;

}
