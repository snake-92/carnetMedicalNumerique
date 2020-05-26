#ifndef DIALOGINFOPATIENT_H
#define DIALOGINFOPATIENT_H

#include <QDialog>

namespace Ui {
class DialogInfoPatient;
}

class DialogInfoPatient : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInfoPatient(QWidget *parent = 0);
    ~DialogInfoPatient();

private:
    Ui::DialogInfoPatient *ui;
};

#endif // DIALOGINFOPATIENT_H
