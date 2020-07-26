#ifndef PROFILCOMPLET_H
#define PROFILCOMPLET_H

#include "profil.h"

class profilComplet : public profil
{
    Q_OBJECT
public:
    profilComplet();

private:
    QString mAllergie;
    QString mPatologie;
    QString mInterventionChirurgical;
    QString mVaccin;
    QString mdetailleHistorique;
    QString mRisqueParticulier;
    QString mInfoComplementaire;
};

#endif // PROFILCOMPLET_H
