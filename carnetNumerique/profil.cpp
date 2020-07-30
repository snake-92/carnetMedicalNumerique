#include "profil.h"

profil::profil(QObject *parent) : QObject(parent)
{
    //QDir dataFolder("");
    //dataFolder.mkpath("data/profil/profil_1/public");

    //pathFile = "data/profil/profil_1/public";

    //publicFile.setFileName("data/profil/profil_1/public/publicDataFile.xml"); // creation du fichier de données publiques
}


profil::~profil()
{
}

/**
 * @param : QString pseudo
 * @return cree le dossier du profil avec le nom pseudo
*/
void profil::creerFichierProfil(QString pseudo) // creation du fichier publique avec le nom du profil
{
    QDir dataFolder("");
    dataFolder.mkpath("data/profil/"+pseudo); // creation du dossier du profil
    pathFile = "data/profil/"+pseudo;
    publicFile.setFileName(pathFile+"/"+pseudo+"_publicData.xml"); // creation du fichier de données publiques
}


/**
 * @file
 * @param
 * @return Un instant correspondant à l'instant présent
*/
void profil::saveConnectionId(QString mNomProfil, QString mMotDePasse) // pour enregistrer le mot de passe et le nom de profil dans un fichier
{

}


bool profil::connection() // lorsqu’on se connecte à l’application
{
    bool verification;
    return verification;
}


/**
 * @file enregistre toutes les infos le profil public dans fichier xml
*/
void profil::saveProfilPublic()
{
    publicFile.open(QFile::WriteOnly | QFile::Text);
    QXmlStreamWriter writer(&publicFile);

    writer.setAutoFormatting(true); // Active l'indentation automatique du fichier XML pour une meilleur visibilité
    writer.writeStartDocument(); // Insert la norme de codification du fichier XML :

    writer.writeStartElement("public");

    writer.writeTextElement("nom", mNom);
    writer.writeTextElement("prenom", mPrenom);
    writer.writeTextElement("sexe", mSexe);
    writer.writeTextElement("date", mDateNaissance);
    writer.writeTextElement("taille", QString::number(mTaille));
    writer.writeTextElement("poids", QString::number(mPoids));
    writer.writeTextElement("groupe", mGroupeSanguin);
    writer.writeTextElement("adress", mAdresse);
    writer.writeTextElement("tel", mTel);
    writer.writeTextElement("profession", mProfession);

    writer.writeStartElement("medecin");
    writer.writeTextElement("nom", mMedecin.nom);
    writer.writeTextElement("tel", mMedecin.numTel);
    writer.writeEndElement();

    writer.writeStartElement("contact");
    writer.writeTextElement("nom", mContact.nom);
    writer.writeTextElement("tel", mContact.numTel);
    writer.writeEndElement();

    writer.writeEndElement(); // Ferme l'element public
    writer.writeEndDocument(); // Finalise le document XML

    publicFile.close();
}


/* ******************************************************************
   **************                 setters               *************
   ******************************************************************/
void profil::setNom(QString nom){
    mNom = nom;
}


void profil::setPrenom(QString prenom){
    mPrenom = prenom;
}


void profil::setSexe(QString s){
    mSexe = s;
}

void profil::setGroupSanguin(QString groupe){
    mGroupeSanguin = groupe;
}

void profil::setDateNaissance(QString date){
    mDateNaissance = date;
}

void profil::setTaille(double taille){
    mTaille = taille;
}

void profil::setPoids(double poids){
    mPoids = poids;
}

void profil::setAdresse(QString adress){
    mAdresse = adress;
}

void profil::setTel(QString tel){
    mTel = tel;
}

void profil::setProfession(QString profession){
    mProfession = profession;
}

void profil::setMedecin(QString med, QString tel){
    mMedecin.nom = med;
    mMedecin.numTel = tel;
}

void profil::setPersonContact(QString contact, QString tel){
    mContact.nom = contact;
    mContact.numTel = tel;
}


/* ******************************************************************
   **************                 getters               *************
   ******************************************************************/
QString profil::getNom(){
    return mNom;
}

QString profil::getPrenom(){
    return mPrenom;
}

QString profil::getSexe(){
    return mSexe;
}

QString profil::getGroupSanguin(){
    return mGroupeSanguin;
}

QString profil::getDateNaissance(){
    return mDateNaissance;
}

double profil::getTaille(){
    return mTaille;
}

double profil::getPoids(){
    return mPoids;
}

QString profil::getAdresse(){
    return mAdresse;
}

QString profil::getTel(){
    return mTel;
}

QString profil::getProfession(){
    return mProfession;
}

QString profil::getMedecinNom(){
    return mMedecin.nom;
}

QString profil::getMedecinTel(){
    return mMedecin.numTel;
}

QString profil::getPersonContactNom(){
    return mContact.nom;
}

QString profil::getPersonContactTel(){
    return mContact.numTel;
}

QString profil::getPathFile(){
    return pathFile;
}
