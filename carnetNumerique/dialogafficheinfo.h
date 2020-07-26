#ifndef DIALOGAFFICHEINFO_H
#define DIALOGAFFICHEINFO_H

#include <QDialog>
#include <QFile>
#include <qdom.h>
#include <qdebug.h>

namespace Ui {
class DialogAfficheInfo;
}

class DialogAfficheInfo : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAfficheInfo(QWidget *parent = 0);
    ~DialogAfficheInfo();

    void afficheInfo();

private slots:
    void on_pushButtonFermer_clicked();

private:
    Ui::DialogAfficheInfo *ui;
    QFile filePublic; // TODO: envoyer le nom du fichier lors de la création de cette class
};

#endif // DIALOGAFFICHEINFO_H
