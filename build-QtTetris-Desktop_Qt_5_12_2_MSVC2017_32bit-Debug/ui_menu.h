/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *startGameButton;
    QPushButton *showLeaderboard;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(350, 450);
        Menu->setMaximumSize(QSize(350, 450));
        QFont font;
        font.setPointSize(12);
        Menu->setFont(font);
        verticalLayout = new QVBoxLayout(Menu);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("qproperty-alignment: AlignCenter;"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 20);
        startGameButton = new QPushButton(Menu);
        startGameButton->setObjectName(QString::fromUtf8("startGameButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startGameButton->sizePolicy().hasHeightForWidth());
        startGameButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(startGameButton, 0, 1, 1, 1);

        showLeaderboard = new QPushButton(Menu);
        showLeaderboard->setObjectName(QString::fromUtf8("showLeaderboard"));
        sizePolicy1.setHeightForWidth(showLeaderboard->sizePolicy().hasHeightForWidth());
        showLeaderboard->setSizePolicy(sizePolicy1);
        showLeaderboard->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(showLeaderboard, 1, 1, 1, 1);

        exitButton = new QPushButton(Menu);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy1.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(exitButton, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Menu);
        QObject::connect(exitButton, SIGNAL(clicked()), Menu, SLOT(close()));

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", nullptr));
        label->setText(QApplication::translate("Menu", "Tetris", nullptr));
        startGameButton->setText(QApplication::translate("Menu", "Start game!", nullptr));
        showLeaderboard->setText(QApplication::translate("Menu", "Show leaderboard", nullptr));
        exitButton->setText(QApplication::translate("Menu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
