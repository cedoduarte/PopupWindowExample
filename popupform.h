#ifndef POPUPFORM_H
#define POPUPFORM_H

#include <QWidget>

namespace Ui
{
class PopupForm;
}

class PopupForm : public QWidget
{
    Q_OBJECT
public:
    explicit PopupForm(QWidget *parent = nullptr);
    ~PopupForm();
private:
    Ui::PopupForm *ui;
};

#endif // POPUPFORM_H
