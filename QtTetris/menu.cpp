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
    QString filename = "Leaderboard.txt";
    QFile scores(filename);

    scores.open(QIODevice::ReadOnly | QIODevice::Text);

    vector<QString> vscores;

    while(!scores.atEnd())
    {
        QString str = scores.readLine();
        vscores.push_back(str);
    }

    QString temp;
      int n = vscores.size();
      for (int i = 0; i < n; ++i)
        for (int j = n - 1; j > i; --j)
          if (vscores[j - 1] > vscores[j])
          {
            temp = vscores[j - 1];
            vscores[j - 1] = vscores[j];
            vscores[j] = temp;
          }

    scores.close();
}
