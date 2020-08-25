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

	void creerFichierProfil(QString pseudo, bool admin=false);

    void saveConnectionId(QString mNomProfil, QString mMotDePasse);
    bool connection();

    // setters
    void setNom(QString);
    void setPrenom(QString);
    void setSexe(QString);
    void setGroupSanguin(QString);
    void setDateNaissance(QString);
    void setTaille(double);
    void setPoids(double);
    void setAdresse(QString);
    void setTel(QString);
    void setProfession(QString);
    void setMedecin(QString, QString);
    void setPersonContact(QString, QString);

    // getters
    QString getNom();
    QString getPrenom();
    QString getSexe();
    QString getGroupSanguin();
    QString getDateNaissance();
    double getTaille();
    double getPoids();
    QString getAdresse();
    QString getTel();
    QString getProfession();
    QString getMedecinNom();
    QString getMedecinTel();
    QString getPersonContactNom();
    QString getPersonContactTel();

    QString getPathFile();

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
    double mPoids;
    QString mAdresse;
    QString mTel;
    QString mProfession;

    struct{
        QString nom;
        QString numTel;
    }mMedecin;
    //QString mMedecin;

    struct{
        QString nom;
        QString numTel;
    }mContact;
    //QString mPersonneContact;

    QString mNomProfil;
    QString mMotDePasse;

    QFile publicFile; // fichier public
    QString pathFile; // chemin vers le fichier public
};

#endif // PROFIL_H
//
