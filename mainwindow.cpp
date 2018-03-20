#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "popupform.h"
#include "secondpopupform.h"
#include <QMenu>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_menu = new QMenu(this);
    m_second_menu = new QMenu(this);
    m_popup = new PopupForm(this);
    m_second_popup = new SecondPopupForm(this);
    QVBoxLayout *menu_layout = new QVBoxLayout;
    QVBoxLayout *second_menu_layout = new QVBoxLayout;
    menu_layout->addWidget(m_popup);
    second_menu_layout->addWidget(m_second_popup);
    menu_layout->setMargin(0);
    second_menu_layout->setMargin(0);
    m_menu->setLayout(menu_layout);
    m_second_menu->setLayout(second_menu_layout);

    setContextMenuPolicy(Qt::CustomContextMenu);

    ui->plainTextEdit->setContextMenuPolicy(Qt::CustomContextMenu);

    connect(ui->plainTextEdit, &QPlainTextEdit::customContextMenuRequested,
            this, [&](const QPoint &p)
    {
        m_second_menu->popup(mapToParent(p));
    });

    connect(this, &MainWindow::customContextMenuRequested, this,
            [&](const QPoint &p)
    {
        m_menu->popup(mapToGlobal(p));
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
