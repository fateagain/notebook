/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *top;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *bntclose;
    QPushButton *bntsave;
    QPushButton *bntopen;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;
    QWidget *bottom;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(423, 311);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("emblem-unreadable");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("icon/c1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
            icon.addFile(QString::fromUtf8(":/icon/c1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
            icon.addFile(QString::fromUtf8(":/icon/c1.png"), QSize(), QIcon::Mode::Disabled, QIcon::State::Off);
            icon.addFile(QString::fromUtf8(":/icon/c1.png"), QSize(), QIcon::Mode::Disabled, QIcon::State::On);
            icon.addFile(QString::fromUtf8(":/icon/c1.png"), QSize(), QIcon::Mode::Active, QIcon::State::Off);
            icon.addFile(QString::fromUtf8(":/icon/c1.png"), QSize(), QIcon::Mode::Active, QIcon::State::On);
            icon.addFile(QString::fromUtf8(":/icon/c1.png"), QSize(), QIcon::Mode::Selected, QIcon::State::Off);
            icon.addFile(QString::fromUtf8(":/icon/c1.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        }
        Widget->setWindowIcon(icon);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(-10, 0, 309, 276));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        top = new QWidget(layoutWidget);
        top->setObjectName("top");
        top->setMinimumSize(QSize(120, 40));
        top->setBaseSize(QSize(0, 50));
        top->setAcceptDrops(false);
        top->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 0)"));
        layoutWidget1 = new QWidget(top);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 0, 488, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        bntclose = new QPushButton(layoutWidget1);
        bntclose->setObjectName("bntclose");
        bntclose->setMinimumSize(QSize(16, 16));
        bntclose->setBaseSize(QSize(16, 16));
        bntclose->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        bntclose->setStyleSheet(QString::fromUtf8("QPushButton{backgroud-color:rgb(255, 255, 255);color:rgb(255, 42, 14)}\n"
"QPushButton:hover{backgroud-color:rgb(255, 255, 255);color:rgb(0, 0, 0)}\n"
""));
        bntclose->setIconSize(QSize(0, 32));
        bntclose->setAutoDefault(false);

        horizontalLayout->addWidget(bntclose);

        bntsave = new QPushButton(layoutWidget1);
        bntsave->setObjectName("bntsave");
        bntsave->setStyleSheet(QString::fromUtf8("QPushButton{backgroud-color:rgb(255, 255, 255);color:rgb(255, 42, 14)}\n"
"QPushButton:hover{backgroud-color:rgb(255, 255, 255);color:rgb(0, 0, 0)}\n"
""));

        horizontalLayout->addWidget(bntsave);

        bntopen = new QPushButton(layoutWidget1);
        bntopen->setObjectName("bntopen");
        bntopen->setStyleSheet(QString::fromUtf8("QPushButton{backgroud-color:rgb(255, 255, 255);color:rgb(255, 42, 14)}\n"
"QPushButton:hover{backgroud-color:rgb(255, 255, 255);color:rgb(0, 0, 0)}\n"
""));

        horizontalLayout->addWidget(bntopen);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(top);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setBaseSize(QSize(100, 100));

        verticalLayout->addWidget(textEdit);

        bottom = new QWidget(layoutWidget);
        bottom->setObjectName("bottom");
        bottom->setMinimumSize(QSize(0, 40));
        bottom->setBaseSize(QSize(0, 40));
        bottom->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 0)"));
        horizontalLayout_4 = new QHBoxLayout(bottom);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(120, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label = new QLabel(bottom);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(bottom);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(bottom);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\210\221\347\232\204\350\256\260\344\272\213\346\234\254", nullptr));
        bntclose->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        bntsave->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
        bntopen->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\254\254\344\270\200\350\241\214\347\254\254\344\270\200\345\210\227", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "Utf8", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "ansi", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
