#ifndef MENU_H
#define MENU_H

#include <QWidget>

#include "widget.h"

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

private:
    Ui::Menu *ui;
    Widget* widget;
};

#endif // MENU_H
