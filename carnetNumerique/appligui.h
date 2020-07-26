#ifndef APPLIGUI_H
#define APPLIGUI_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>
#include <QComboBox>
#include <QWidgetAction>
#include "dialoginfopatient.h"

namespace Ui {
class appliGui;
}

class appliGui : public QMainWindow
{
    Q_OBJECT

public:
    explicit appliGui(QWidget *parent = 0);
    ~appliGui();

signals:

private slots:
    void closeEvent(QCloseEvent *event);
    void on_BoutonCreerProfil_clicked();
    void on_pushButtonAfficheInfo_clicked();
    void on_pushButtonModif_clicked();
    void name_profil_clicked(QString);
    void rempli_comboBox(QString pseudo);

private:
    Ui::appliGui *ui;
    DialogInfoPatient* fen;
    QString mPseudo;  // nom du profil
    QList<QAction*> changeProfil;
    QComboBox *comboBox;
};

#endif // APPLIGUI_H
