#ifndef PROFIL_H
#define PROFIL_H

#include <QObject>
#include <QFile>
#include <QDialog>
#include <QtXml/QtXml>
#include <qdom.h>


class profil : public QObject
{
    Q_OBJECT


public:
    explicit profil(QObject *parent = nullptr);
    ~profil();
    struct Admin {
        QString mMotDePasse;
        QString mNomAdmin;
        QString mMailTelAdmin;
    };
    Admin identifiant; //je déclare une instance de ma structure



    void saveConnectionId(Admin admin);

   // bool connection(bool is_admin);



    // setters
    void setNom(QString);
    void setPrenom(QString);
    void setSexe(QString);
    void setGroupSanguin(QString);
    void setDateNaissance(QString);
    void setTaille(double);
    void setAdresse(QString);
    void setTel(QString);
    void setProfession(QString);
    void setMedecin(QString);
    void setPersonContact(QString);
    void setNomAdmin(QString); // JM
    void setMotDePasse(QString); //JM
    void setMailTelAdmin(QString);

    // getters
    QString getNom();
    QString getPrenom();
    QString getSexe();
    QString getGroupSanguin();
    QString getDateNaissance();
    double getTaille();
    QString getAdresse();
    QString getTel();
    QString getProfession();
    QString getMedecin();
    QString getPersonContact();
    QString getNomAdmin();
    QString getMailTelAdmin();
    QString getMotDePasse();



signals:

public slots:
    void saveProfilPublic();

private:
    QString mNom; // pourra être mis dans le profil complet
    QString mPrenom; // pourra être mis dans le profil complet
    QString mSexe;
    QString mGroupeSanguin;
    QString mDateNaissance;
    double mTaille;
    QString mAdresse;
    QString mTel;
    QString mProfession;
    QString mMedecin;
    QString mPersonneContact;
    QString mNomProfil;




    QFile publicFile;
};

#endif // PROFIL_H
//
