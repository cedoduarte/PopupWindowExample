#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class MainWindow;
}

class QMenu;
class PopupForm;
class SecondPopupForm;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    QMenu *m_menu;
    QMenu *m_second_menu;
    PopupForm *m_popup;
    SecondPopupForm *m_second_popup;
};

#endif // MAINWINDOW_H
