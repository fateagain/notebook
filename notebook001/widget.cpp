#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout_2);
    connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(onCurrentComboBox(int)));
    connect(ui->textEdit,SIGNAL(cursorPositionChanged()),this,SLOT(onCusorPosition()));
}
Widget::~Widget()
{
    delete ui;
}



void Widget::on_bntopen_clicked()
{
    ui->textEdit->clear();
    QString fileName=QFileDialog::getOpenFileName(this,tr("Open File"),
                                                    "E:/qt/",
                                                    tr("Text file(*.txt)"));
    file.setFileName(fileName);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream in(&file);
    QString str=ui->comboBox->currentText();
    in.setEncoding(QStringConverter::Utf8);
    while(!in.atEnd()){
        QString str=in.readLine();
        //qDebug()<<str;
        ui->textEdit->append(str);
    }

}


void Widget::on_bntsave_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Open File"),
                                    "E:/qt/untitled.txt",
                                   tr("Text file(*.txt)"));
    file.setFileName(fileName);
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);
    out<<ui->textEdit->toPlainText();


}


void Widget::on_bntclose_clicked()
{
    if(file.isOpen()){
        ui->textEdit->clear();
        file.close();
    }
}

void Widget::onCurrentComboBox(int index)
{

}

void Widget::onCusorPosition()
{
    QTextCursor cursor=ui->textEdit->textCursor();
    QString l="L:"+QString::number(cursor.blockNumber()+1)+"C:"+QString::number(cursor.columnNumber()+1);
    ui->label->setText(l);
}



