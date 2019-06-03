#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    connect(ui->okayButton, SIGNAL(clicked()), this, SLOT(slotOnOkayButton()));

}

Settings::~Settings()
{
    delete ui;
}

int Settings::difficulty()
{
    if (ui->diff1->isChecked())
        return 1;
    if (ui->diff2->isChecked())
        return 2;
    if (ui->diff3->isChecked())
        return 3;
    if (ui->diff4->isChecked())
        return 4;
    return 3;
}

void Settings::slotOnOkayButton()
{
    this->hide();
}
