#ifndef APPLIGUI_H
#define APPLIGUI_H

#include <QMainWindow>
#include "profil.h"

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
    creerProfil();

private slots:
    void on_BoutonCreerProfil_clicked();

private:
    Ui::appliGui *ui;
    QVector<profil> personne;
};

#endif // APPLIGUI_H
