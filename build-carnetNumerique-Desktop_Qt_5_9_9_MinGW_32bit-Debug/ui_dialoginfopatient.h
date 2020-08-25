/********************************************************************************
** Form generated from reading UI file 'dialoginfopatient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINFOPATIENT_H
#define UI_DIALOGINFOPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogInfoPatient
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogInfoPatient)
    {
        if (DialogInfoPatient->objectName().isEmpty())
            DialogInfoPatient->setObjectName(QStringLiteral("DialogInfoPatient"));
        DialogInfoPatient->resize(648, 676);
        verticalLayoutWidget = new QWidget(DialogInfoPatient);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 631, 661));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_2 = new QRadioButton(verticalLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(verticalLayoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton = new QRadioButton(verticalLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogInfoPatient);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogInfoPatient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogInfoPatient, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogInfoPatient);
    } // setupUi

    void retranslateUi(QDialog *DialogInfoPatient)
    {
        DialogInfoPatient->setWindowTitle(QApplication::translate("DialogInfoPatient", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogInfoPatient", "Informations g\303\251n\303\251rales", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("DialogInfoPatient", "RadioButton", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("DialogInfoPatient", "RadioButton", Q_NULLPTR));
        radioButton->setText(QApplication::translate("DialogInfoPatient", "RadioButton", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogInfoPatient", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("DialogInfoPatient", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogInfoPatient: public Ui_DialogInfoPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINFOPATIENT_H
