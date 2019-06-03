#ifndef MENU_H
#define MENU_H

#include <QWidget>

#include "widget.h"
#include "settings.h"
#include "leaderboard.h"

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void slotOnStartGameButton();
    void slotOnSettingsButton();
    void slotOnShowLeaderboardButton();

private:
    Ui::Menu *ui;
    Widget* widget;
    Settings* settings = new Settings();
    Leaderboard* leaderboard;
};

#endif // MENU_H
