#ifndef SECONDPOPUPFORM_H
#define SECONDPOPUPFORM_H

#include <QWidget>

namespace Ui
{
class SecondPopupForm;
}

class SecondPopupForm : public QWidget
{
    Q_OBJECT
public:
    explicit SecondPopupForm(QWidget *parent = nullptr);
    ~SecondPopupForm();
private:
    Ui::SecondPopupForm *ui;
};

#endif // SECONDPOPUPFORM_H
