#include "appligui.h"
#include "ui_appligui.h"
#include "dialogafficheinfo.h"
#include <qdebug.h>

appliGui::appliGui(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::appliGui)
{
    ui->setupUi(this);

    // chercher tous les profils pour les mettre dans le menu
    QDir repertoireProfil("data/profil/");
    QStringList list = repertoireProfil.entryList();
    qDebug()<< list;

    comboBox = new QComboBox(ui->menuCharger_un_profil);
    QWidgetAction *checkableAction = new QWidgetAction(ui->menuCharger_un_profil);
    checkableAction->setDefaultWidget(comboBox);
    ui->menuCharger_un_profil->addAction(checkableAction);

    for(int i=2; i<list.length(); i++){
        comboBox->addItem(list[i]);
    }

    connect(comboBox, SIGNAL(currentTextChanged(QString)), this, SLOT(name_profil_clicked(QString)));

    fen = new DialogInfoPatient(this);
    connect(fen, SIGNAL(newprofil(QString)), this, SLOT(rempli_comboBox(QString)));
}

appliGui::~appliGui()
{
    delete ui;
}

void appliGui::closeEvent(QCloseEvent *event)
{
    // supression du fichier temporaire
    QFile::remove("data/temp/temp.txt");
}


void appliGui::rempli_comboBox(QString pseudo){
    qDebug()<<"pass...";
    comboBox->addItem(pseudo);
}


void appliGui::name_profil_clicked(QString pseudo){
    // TODO: tester si le profil est deja ouvert
    // TODO: tester si le chemin existe vers se profil

    // message box pour demander la validation du changement de profil
    int choice = QMessageBox::question(this, tr("Changement de profil"),
                                   tr("voulez-vous changer de profil?"),
                                   QMessageBox::Ok | QMessageBox::Cancel,
                                   QMessageBox::Ok);

    // TODO: apres avoir validé changer le nom pseudo dans le fichier
    // TODO: changer les chemins pour les fichiers publiques et privé
}


void appliGui::on_BoutonCreerProfil_clicked() // creer un nouveau profil
{
    //DialogInfoPatient fenetreSaisieInfo(this);
    fen->exec();
}


void appliGui::on_pushButtonAfficheInfo_clicked() // afficher les infos du profil
{
    DialogAfficheInfo fenetreAfficheInfo(this);
    fenetreAfficheInfo.exec();
}


void appliGui::on_pushButtonModif_clicked()  // modifier les infos du profil
{
    DialogInfoPatient fenetreSaisieInfo(this, true);
    fenetreSaisieInfo.exec();
}
