#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <QObject>


class MenuPrincipal: public QObject
{
    Q_OBJECT
public:
    MenuPrincipal();
    ~MenuPrincipal();
    void saveMessage(QString nomSignant, QString adresseSoignant, QString date, QString message);
    QString readMessage();
    void saveOrdonnance();
    void readOrdonnance();


    // setter
    void setNomSoignant(QString);
    void setAdressesSoignant(QString);
    void setdateSoin(QString);
    void setmessageSoignant(QString);



    //getters

    QString getNomSoignant();
    QString getAdressesSoignant();
    QString getdateSoin();
    QString getmessageSoignant();


private:
    QString nomSoignant;
    QString adressesSoignant;
    QString dateSoin;
    QString messageSoignant;
};

#endif // MENUPRINCIPAL_H
