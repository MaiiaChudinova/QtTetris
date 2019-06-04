#include "leaderboard.h"
#include "ui_leaderboard.h"
#include <QFile>
#include <QMessageBox>
#include <vector>
#include <set>

Leaderboard::Leaderboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Leaderboard)
{
    ui->setupUi(this);

    QString filename = "Leaderboard.txt";
    QFile scores(filename);

    if (!scores.exists())
    {
        QMessageBox::information(this,"info","Leaderboard is empty.");
        return;
    }
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
    if (ui->scores->count() == 0)
        ui->scores->addItem("Leaderboard is empty.");

}

Leaderboard::~Leaderboard()
{
    delete ui;
}
