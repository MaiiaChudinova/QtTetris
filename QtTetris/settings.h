#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    int difficulty();

private:
    Ui::Settings *ui;

private slots:
    void slotOnOkayButton();

};

#endif // SETTINGS_H
