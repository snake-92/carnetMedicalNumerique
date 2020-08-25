#include "appligui.h"
#include <QApplication>
#include "formlogin.h"
#include "formmessagerie.h"
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // creation du repertoir d'Admin

    appliGui w;

    FormMessagerie messgerie;
    //messgerie.show();
   // login.idfileExists();
    // faire les tests d'authentification dans le main
    //w.show();

   QString fileName("profilAdmin/idConnexion/IdConnexion.dat");
    QFile file(fileName);
    if(QFileInfo::exists(fileName))
    {
        qDebug () << "file exists" << endl;
        w.show(); // affiche menu principal


    }
    else
    {
        qDebug () << "file does not exists" << endl;
         FormLogin *login = new FormLogin;

       login->show(); // appelle affiche fenetre creation


    }







    return a.exec();
}

// nous sommes les meilleurs!!!
