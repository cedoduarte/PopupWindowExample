#include "popupform.h"
#include "ui_popupform.h"

PopupForm::PopupForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PopupForm)
{
    ui->setupUi(this);
    setWindowFlag(Qt::Popup);
}

PopupForm::~PopupForm()
{
    delete ui;
}
