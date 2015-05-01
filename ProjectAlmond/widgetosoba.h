#ifndef WIDGETOSOBA_H
#define WIDGETOSOBA_H

#include <QWidget>
#include <QTextBrowser>
#include <QPushButton>
#include <string>
#include <QString>
#include "GUI/glavniprozor.h"

namespace Ui {
class WidgetOsoba;
}

class WidgetOsoba : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetOsoba(short int sifra, QWidget *parent = 0);
    ~WidgetOsoba();

    void postaviImePrezime(const std::string &ip);

private slots:
    void on_btnOsoba_clicked();

    void on_btnOsoba_pressed();

    void on_btnOsoba_released();

    void on_btnOsoba_toggled(bool checked);

private:
    Ui::WidgetOsoba *ui;

    //QPushButton *btnOsoba;

    short int _sifra;

};

#endif // WIDGETOSOBA_H
