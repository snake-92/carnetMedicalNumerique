#ifndef PROFILCOMPLET_H
#define PROFILCOMPLET_H

#include "profil.h"

class profilComplet : public profil
{
	Q_OBJECT
public:
	profilComplet();

	void saveProfilComplet();

private:
	struct{
		QString medecin;
		QString data;
		QString prescriptions;
		QString message;
	}consult;

	QFile privateFile; // fichier privée
};

#endif // PROFILCOMPLET_H
