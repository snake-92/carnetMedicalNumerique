#ifndef DIALOGAFFICHEINFO_H
#define DIALOGAFFICHEINFO_H

#include <QDialog>

namespace Ui {
class DialogAfficheInfo;
}

class DialogAfficheInfo : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAfficheInfo(QWidget *parent = 0);
    ~DialogAfficheInfo();

private:
    Ui::DialogAfficheInfo *ui;
};

#endif // DIALOGAFFICHEINFO_H
