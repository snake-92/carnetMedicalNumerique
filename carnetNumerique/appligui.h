#ifndef APPLIGUI_H
#define APPLIGUI_H

#include <QMainWindow>
#include "profil.h"
#include "formlogin.h"
#include "formmessagerie.h"
#include <QDialog>

namespace Ui {
class appliGui;
}

class FormLogin;// forward declaration
class FormMessagerie;


//projet en cours

class appliGui : public QMainWindow
{
    Q_OBJECT

public:
    explicit appliGui(QWidget *parent = 0);
    ~appliGui();
    FormLogin *authentified;
    FormMessagerie * message;

signals:
   // creerProfil();

private slots:
    void on_BoutonCreerProfil_clicked();

    void on_actionLire_message_triggered();

    void on_actionEcrire_message_triggered();

private:
    Ui::appliGui *ui;
    QVector<profil> personne;
};

#endif // APPLIGUI_H
