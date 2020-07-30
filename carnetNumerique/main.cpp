#include "appligui.h"
#include <QApplication>
#include <qdir.h>
#include <qDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QDir dataFolder("");
    dataFolder.mkpath("data/profil"); // chemin vers les dossiers des profils
    dataFolder.mkpath("data/temp"); // chemin vers les fichiers temporaires
    QFile tempFile;
    tempFile.setFileName("data/temp/temp.txt"); // sauvegarde du profil connecté

    appliGui w;
    w.show();

    return a.exec();
}
