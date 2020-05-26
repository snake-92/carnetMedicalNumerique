#include "profil.h"

profil::profil(QObject *parent) : QObject(parent)
{
    QDir dataFolder("");
    dataFolder.mkpath("profil/public");
    publicFile.setFileName("profil/public/publicDataFile.xml"); // creation du fichier de données publiques

}


profil::~profil()
{

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
 * @file enregistre tout le profil public dans fichier xml
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
    writer.writeTextElement("date", mDateNaissance);
    writer.writeTextElement("taille", QString::number(mTaille));
    writer.writeTextElement("groupe", mGroupeSanguin);
    writer.writeTextElement("adress", mAdresse);
    writer.writeTextElement("tel", mTel);
    writer.writeTextElement("profession", mProfession);
    writer.writeTextElement("medecin", mMedecin);
    writer.writeTextElement("contact", mPersonneContact);

    writer.writeEndElement(); // Ferme l'element public
    writer.writeEndDocument(); // Finalise le document XML

    publicFile.close();
}

// setters
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

void profil::setAdresse(QString adress){
    mAdresse = adress;
}

void profil::setTel(QString tel){
    mTel = tel;
}

void profil::setProfession(QString profession){
    mProfession = profession;
}

void profil::setMedecin(QString med){
    mMedecin = med;
}

void profil::setPersonContact(QString contact){
    mPersonneContact = contact;
}


// getters
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

QString profil::getAdresse(){
    return mAdresse;
}

QString profil::getTel(){
    return mTel;
}

QString profil::getProfession(){
    return mProfession;
}

QString profil::getMedecin(){
    return mMedecin;
}

QString profil::getPersonContact(){
    return mPersonneContact;
}
