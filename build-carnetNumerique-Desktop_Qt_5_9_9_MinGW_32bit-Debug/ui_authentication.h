/********************************************************************************
** Form generated from reading UI file 'authentication.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATION_H
#define UI_AUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_authentication
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_nomAdmin;
    QSpacerItem *horizontalSpacer;
    QLineEdit *NomAdminValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_motDePasse;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *MotDePasseValue;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ConfirNomAdmin;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *ConfirMotDePasseValue;
    QHBoxLayout *horizontalLayout;
    QLabel *label_MailTelAdmin;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *MailTelValue;
    QPushButton *bouton_saveIdConexion;

    void setupUi(QWidget *authentication)
    {
        if (authentication->objectName().isEmpty())
            authentication->setObjectName(QStringLiteral("authentication"));
        authentication->resize(400, 300);
        groupBox = new QGroupBox(authentication);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 351, 221));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_nomAdmin = new QLabel(groupBox);
        label_nomAdmin->setObjectName(QStringLiteral("label_nomAdmin"));

        horizontalLayout_3->addWidget(label_nomAdmin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        NomAdminValue = new QLineEdit(groupBox);
        NomAdminValue->setObjectName(QStringLiteral("NomAdminValue"));

        horizontalLayout_3->addWidget(NomAdminValue);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_motDePasse = new QLabel(groupBox);
        label_motDePasse->setObjectName(QStringLiteral("label_motDePasse"));

        horizontalLayout_2->addWidget(label_motDePasse);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        MotDePasseValue = new QLineEdit(groupBox);
        MotDePasseValue->setObjectName(QStringLiteral("MotDePasseValue"));

        horizontalLayout_2->addWidget(MotDePasseValue);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ConfirNomAdmin = new QLabel(groupBox);
        label_ConfirNomAdmin->setObjectName(QStringLiteral("label_ConfirNomAdmin"));

        horizontalLayout_4->addWidget(label_ConfirNomAdmin);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        ConfirMotDePasseValue = new QLineEdit(groupBox);
        ConfirMotDePasseValue->setObjectName(QStringLiteral("ConfirMotDePasseValue"));

        horizontalLayout_4->addWidget(ConfirMotDePasseValue);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_MailTelAdmin = new QLabel(groupBox);
        label_MailTelAdmin->setObjectName(QStringLiteral("label_MailTelAdmin"));

        horizontalLayout->addWidget(label_MailTelAdmin);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        MailTelValue = new QLineEdit(groupBox);
        MailTelValue->setObjectName(QStringLiteral("MailTelValue"));

        horizontalLayout->addWidget(MailTelValue);


        verticalLayout->addLayout(horizontalLayout);

        bouton_saveIdConexion = new QPushButton(groupBox);
        bouton_saveIdConexion->setObjectName(QStringLiteral("bouton_saveIdConexion"));
        bouton_saveIdConexion->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(bouton_saveIdConexion);


        retranslateUi(authentication);

        QMetaObject::connectSlotsByName(authentication);
    } // setupUi

    void retranslateUi(QWidget *authentication)
    {
        authentication->setWindowTitle(QApplication::translate("authentication", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("authentication", "Authentification", Q_NULLPTR));
        label_nomAdmin->setText(QApplication::translate("authentication", "Nom d'utilisateur", Q_NULLPTR));
        label_motDePasse->setText(QApplication::translate("authentication", "Mot de passe", Q_NULLPTR));
        label_ConfirNomAdmin->setText(QApplication::translate("authentication", "Confirmation du <br/> mot de passe", Q_NULLPTR));
        label_MailTelAdmin->setText(QApplication::translate("authentication", "adresse mail <br/> ou N\302\260 t\303\251l\303\251phone", Q_NULLPTR));
        bouton_saveIdConexion->setText(QApplication::translate("authentication", "Valider", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class authentication: public Ui_authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
