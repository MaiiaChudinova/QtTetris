#include "menu.h"
#include "ui_menu.h"
#include <QFile>
#include <iostream>
#include <vector>
using namespace std;


Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    connect(ui->startGameButton, SIGNAL(clicked()), this, SLOT(slotOnStartGameButton()));
    connect(ui->settingsButton, SIGNAL(clicked()), this, SLOT(slotOnSettingsButton()));
    connect(ui->showLeaderboardButton, SIGNAL(clicked()), this, SLOT(slotOnShowLeaderboardButton()));
}

Menu::~Menu()
{
    delete ui;
}

void Menu::slotOnStartGameButton()
{
    this->hide();
    widget = new Widget();
    widget->show();
}

void Menu::slotOnSettingsButton()
{
    settings = new Settings();
    settings->show();
}

void Menu::slotOnShowLeaderboardButton()
{


    leaderboard = new Leaderboard();



    leaderboard->show();

}
