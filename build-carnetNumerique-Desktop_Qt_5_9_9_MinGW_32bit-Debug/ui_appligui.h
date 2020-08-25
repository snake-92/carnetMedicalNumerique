/********************************************************************************
** Form generated from reading UI file 'appligui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLIGUI_H
#define UI_APPLIGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appliGui
{
public:
    QAction *actionmessage;
    QAction *actionordonnance;
    QAction *actionimprimer;
    QAction *actionFermer;
    QAction *actionAjouter_pi_ce_jointe;
    QAction *actionConsulter_les_pi_ces_jointes;
    QAction *actionLire_info;
    QAction *actionA_propos;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *BoutonConsulterProfilPublic;
    QPushButton *BoutonConsulterProfilComplet;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BoutonCreerProfil;
    QPushButton *BoutonModifierProfil;
    QMenuBar *menuBar;
    QMenu *menumenu_principal;
    QMenu *menuPi_ces_jointes;
    QMenu *menuInfo_pratique;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *appliGui)
    {
        if (appliGui->objectName().isEmpty())
            appliGui->setObjectName(QStringLiteral("appliGui"));
        appliGui->resize(628, 412);
        actionmessage = new QAction(appliGui);
        actionmessage->setObjectName(QStringLiteral("actionmessage"));
        actionordonnance = new QAction(appliGui);
        actionordonnance->setObjectName(QStringLiteral("actionordonnance"));
        actionimprimer = new QAction(appliGui);
        actionimprimer->setObjectName(QStringLiteral("actionimprimer"));
        actionFermer = new QAction(appliGui);
        actionFermer->setObjectName(QStringLiteral("actionFermer"));
        actionAjouter_pi_ce_jointe = new QAction(appliGui);
        actionAjouter_pi_ce_jointe->setObjectName(QStringLiteral("actionAjouter_pi_ce_jointe"));
        actionConsulter_les_pi_ces_jointes = new QAction(appliGui);
        actionConsulter_les_pi_ces_jointes->setObjectName(QStringLiteral("actionConsulter_les_pi_ces_jointes"));
        actionLire_info = new QAction(appliGui);
        actionLire_info->setObjectName(QStringLiteral("actionLire_info"));
        actionA_propos = new QAction(appliGui);
        actionA_propos->setObjectName(QStringLiteral("actionA_propos"));
        centralWidget = new QWidget(appliGui);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 20, 391, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BoutonConsulterProfilPublic = new QPushButton(verticalLayoutWidget);
        BoutonConsulterProfilPublic->setObjectName(QStringLiteral("BoutonConsulterProfilPublic"));
        BoutonConsulterProfilPublic->setMinimumSize(QSize(150, 50));

        horizontalLayout->addWidget(BoutonConsulterProfilPublic);

        BoutonConsulterProfilComplet = new QPushButton(verticalLayoutWidget);
        BoutonConsulterProfilComplet->setObjectName(QStringLiteral("BoutonConsulterProfilComplet"));
        BoutonConsulterProfilComplet->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(BoutonConsulterProfilComplet);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        BoutonCreerProfil = new QPushButton(verticalLayoutWidget);
        BoutonCreerProfil->setObjectName(QStringLiteral("BoutonCreerProfil"));
        BoutonCreerProfil->setMinimumSize(QSize(0, 50));

        horizontalLayout_2->addWidget(BoutonCreerProfil);

        BoutonModifierProfil = new QPushButton(verticalLayoutWidget);
        BoutonModifierProfil->setObjectName(QStringLiteral("BoutonModifierProfil"));
        BoutonModifierProfil->setMinimumSize(QSize(0, 50));

        horizontalLayout_2->addWidget(BoutonModifierProfil);


        verticalLayout->addLayout(horizontalLayout_2);

        appliGui->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(appliGui);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 628, 21));
        menumenu_principal = new QMenu(menuBar);
        menumenu_principal->setObjectName(QStringLiteral("menumenu_principal"));
        menuPi_ces_jointes = new QMenu(menuBar);
        menuPi_ces_jointes->setObjectName(QStringLiteral("menuPi_ces_jointes"));
        menuInfo_pratique = new QMenu(menuBar);
        menuInfo_pratique->setObjectName(QStringLiteral("menuInfo_pratique"));
        appliGui->setMenuBar(menuBar);
        mainToolBar = new QToolBar(appliGui);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        appliGui->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(appliGui);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        appliGui->setStatusBar(statusBar);

        menuBar->addAction(menumenu_principal->menuAction());
        menuBar->addAction(menuPi_ces_jointes->menuAction());
        menuBar->addAction(menuInfo_pratique->menuAction());
        menumenu_principal->addAction(actionmessage);
        menumenu_principal->addAction(actionordonnance);
        menumenu_principal->addAction(actionimprimer);
        menumenu_principal->addSeparator();
        menumenu_principal->addAction(actionFermer);
        menuPi_ces_jointes->addAction(actionAjouter_pi_ce_jointe);
        menuPi_ces_jointes->addAction(actionConsulter_les_pi_ces_jointes);
        menuInfo_pratique->addAction(actionLire_info);
        menuInfo_pratique->addSeparator();
        menuInfo_pratique->addAction(actionA_propos);

        retranslateUi(appliGui);

        QMetaObject::connectSlotsByName(appliGui);
    } // setupUi

    void retranslateUi(QMainWindow *appliGui)
    {
        appliGui->setWindowTitle(QApplication::translate("appliGui", "appliGui", Q_NULLPTR));
        actionmessage->setText(QApplication::translate("appliGui", "Message", Q_NULLPTR));
        actionordonnance->setText(QApplication::translate("appliGui", "Ordonnance", Q_NULLPTR));
        actionimprimer->setText(QApplication::translate("appliGui", "Imprimer", Q_NULLPTR));
        actionFermer->setText(QApplication::translate("appliGui", "Fermer", Q_NULLPTR));
        actionAjouter_pi_ce_jointe->setText(QApplication::translate("appliGui", "Ajouter pi\303\250ce jointe", Q_NULLPTR));
        actionConsulter_les_pi_ces_jointes->setText(QApplication::translate("appliGui", "Consulter les pi\303\250ces jointes", Q_NULLPTR));
        actionLire_info->setText(QApplication::translate("appliGui", "Lire info", Q_NULLPTR));
        actionA_propos->setText(QApplication::translate("appliGui", "A propos", Q_NULLPTR));
        BoutonConsulterProfilPublic->setText(QApplication::translate("appliGui", "Consulter profil public", Q_NULLPTR));
        BoutonConsulterProfilComplet->setText(QApplication::translate("appliGui", "consulter profil complet", Q_NULLPTR));
        BoutonCreerProfil->setText(QApplication::translate("appliGui", "Cr\303\251er Profil", Q_NULLPTR));
        BoutonModifierProfil->setText(QApplication::translate("appliGui", "Modifier Profil", Q_NULLPTR));
        menumenu_principal->setTitle(QApplication::translate("appliGui", "Menu principal", Q_NULLPTR));
        menuPi_ces_jointes->setTitle(QApplication::translate("appliGui", "Pi\303\250ces jointes", Q_NULLPTR));
        menuInfo_pratique->setTitle(QApplication::translate("appliGui", "Info pratique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class appliGui: public Ui_appliGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLIGUI_H
