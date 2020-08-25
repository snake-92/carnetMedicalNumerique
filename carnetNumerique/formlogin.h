#ifndef FORMLOGIN_H
#define FORMLOGIN_H

#include <QWidget>
#include <QMessageBox>
#include "profil.h"
#include "appligui.h"
#include <QFileInfo>

class appliGui; // forward declaration;
class profil;
struct Admin;
namespace Ui {
class FormLogin;
}


class FormLogin : public QWidget
{
    Q_OBJECT

public:
    explicit FormLogin(QWidget *parent = nullptr);
    ~FormLogin();
    void idfileExists();
    bool connection();
signals:
    void adminSignal();
public slots:
    void on_bouton_saveIdConexion_clicked();

private:
    Ui::FormLogin *ui;
    QString nomAdmin;
    QString PassWord;
    QString confirmPassWord;
    QString userInputPass;
    QString MailTel;

    profil *AdminProfil;
    appliGui *Wprincipale;

};

#endif // FORMLOGIN_H
