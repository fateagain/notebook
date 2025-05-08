#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <iostream>
#include <QFileDialog>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    QFile file;
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    void on_bntopen_clicked();

    void on_bntsave_clicked();

    void on_bntclose_clicked();

    void onCurrentComboBox(int);

    void onCusorPosition();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
