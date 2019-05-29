#ifndef MENU_H
#define MENU_H

#include <QWidget>

#include "widget.h"
#include "settings.h"

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

private:
    Ui::Menu *ui;
    Widget* widget;
    Settings* settings;
};

#endif // MENU_H
