#ifndef DIALOGINFOPATIENT_H
#define DIALOGINFOPATIENT_H

#include <QDialog>
#include "profil.h"
#include <qdebug.h>

namespace Ui {
class DialogInfoPatient;
}

class DialogInfoPatient : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInfoPatient(QWidget *parent = 0, bool modif = false);
    ~DialogInfoPatient();

    void remplirLaPage();

signals:
    void newprofil(QString);

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::DialogInfoPatient *ui;
    bool EnableModif;
    QString pseudoProfil;
};

#endif // DIALOGINFOPATIENT_H
