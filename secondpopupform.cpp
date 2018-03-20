#include "secondpopupform.h"
#include "ui_secondpopupform.h"

SecondPopupForm::SecondPopupForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SecondPopupForm)
{
    ui->setupUi(this);
    setWindowFlag(Qt::Popup);
}

SecondPopupForm::~SecondPopupForm()
{
    delete ui;
}
