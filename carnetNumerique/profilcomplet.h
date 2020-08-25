#ifndef PROFILCOMPLET_H
#define PROFILCOMPLET_H

#include "profil.h"

class profilComplet : public profil
{
	Q_OBJECT
public:
	profilComplet();

	void saveProfilComplet();
	void saveAllergie(QString msg);

private:
	struct{
		QString precedant;
		QString allergies;
		QString risquesParticulier;
	}consult;

	QFile privateFile; // fichier privée
};

#endif // PROFILCOMPLET_H
