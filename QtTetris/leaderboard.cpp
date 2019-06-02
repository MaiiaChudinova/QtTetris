#include "leaderboard.h"
#include "ui_leaderboard.h"
#include <QFile>
#include <vector>
#include <set>

Leaderboard::Leaderboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Leaderboard)
{
    ui->setupUi(this);

    QString filename = "Leaderboard.txt";
    QFile scores(filename);

    scores.open(QIODevice::ReadOnly | QIODevice::Text);

    std::vector<QString> vscores;

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

    for (int i = n - 1; i > 0; --i)
        ui->scores->addItem(vscores[i]);

    /*std::set<QString> s;
    for (int i = n - 1; i >= 1; --i)
        s.insert(vscores[i]);

    std::set<QString>::iterator it = s.begin();


    //int x = *it;

    for (int i = 0; i < s.size(); ++i)
    {
        std::advance(it, i);
        vscores[i] = *it;
    }
    for (int i = s.size() - 1; i >= 0; --i)
        ui->scores->addItem(vscores[i]);*/
}

Leaderboard::~Leaderboard()
{
    delete ui;
}
