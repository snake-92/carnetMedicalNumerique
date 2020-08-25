#ifndef FORMMESSAGERIE_H
#define FORMMESSAGERIE_H

#include <QWidget>
#include "menuprincipal.h"



namespace Ui {
class FormMessagerie;
}

class FormMessagerie : public QWidget
{
    Q_OBJECT

public:
    explicit FormMessagerie(QWidget *parent = nullptr);
    ~FormMessagerie();
    void show_reading_interface();
    void show_writting_interface();

private slots:
    void on_B_save_message_clicked();

    void on_B_read_message_clicked();

    void on_B_retour_menu_principal_clicked();

    void on_B_write_message_clicked();

private:
    Ui::FormMessagerie *ui;
    MenuPrincipal *mp;
};

#endif // FORMMESSAGERIE_H
