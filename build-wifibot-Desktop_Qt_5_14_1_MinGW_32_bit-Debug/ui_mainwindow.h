/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnUI_quitter;
    QPushButton *btnUI_resume;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnUI_Start;
    QPushButton *btnUI_haut;
    QPushButton *btnUI_haut_2;
    QPushButton *btnUI_haut_3;
    QPushButton *btnUI_haut_4;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(964, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnUI_quitter = new QPushButton(centralwidget);
        btnUI_quitter->setObjectName(QString::fromUtf8("btnUI_quitter"));
        btnUI_quitter->setGeometry(QRect(800, 30, 120, 35));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        btnUI_quitter->setFont(font);
        btnUI_resume = new QPushButton(centralwidget);
        btnUI_resume->setObjectName(QString::fromUtf8("btnUI_resume"));
        btnUI_resume->setGeometry(QRect(660, 30, 120, 35));
        btnUI_resume->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 20, 161, 41));
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-size:40px; "));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 901, 2));
        label_2->setStyleSheet(QString::fromUtf8("background-color: white;"));
        btnUI_Start = new QPushButton(centralwidget);
        btnUI_Start->setObjectName(QString::fromUtf8("btnUI_Start"));
        btnUI_Start->setGeometry(QRect(690, 240, 100, 100));
        btnUI_Start->setMaximumSize(QSize(100, 100));
        btnUI_Start->setMouseTracking(false);
        btnUI_Start->setFocusPolicy(Qt::ClickFocus);
        btnUI_Start->setStyleSheet(QString::fromUtf8("background:#cc0000;\n"
"font:bold 20px Arial;\n"
"border-radius:50px;\n"
"border:none;\n"
"color:#fff;"));
        btnUI_haut = new QPushButton(centralwidget);
        btnUI_haut->setObjectName(QString::fromUtf8("btnUI_haut"));
        btnUI_haut->setGeometry(QRect(690, 130, 81, 91));
        btnUI_haut->setStyleSheet(QString::fromUtf8("border: 0 solid rgb(47, 47, 47);\n"
"border-right-width: 50px;\n"
"border-left-width: 50px;\n"
"border-bottom: 100px solid blue;"));
        btnUI_haut_2 = new QPushButton(centralwidget);
        btnUI_haut_2->setObjectName(QString::fromUtf8("btnUI_haut_2"));
        btnUI_haut_2->setGeometry(QRect(800, 250, 91, 81));
        btnUI_haut_2->setStyleSheet(QString::fromUtf8("border: 0 solid rgb(47, 47, 47);\n"
"border-top-width: 50px;\n"
"border-left: 100px solid blue;\n"
"border-bottom-width: 50px;"));
        btnUI_haut_3 = new QPushButton(centralwidget);
        btnUI_haut_3->setObjectName(QString::fromUtf8("btnUI_haut_3"));
        btnUI_haut_3->setGeometry(QRect(570, 240, 91, 81));
        btnUI_haut_3->setStyleSheet(QString::fromUtf8("border: 0 solid rgb(47, 47, 47);\n"
"border-top-width: 50px;\n"
"border-right: 100px solid blue;\n"
"border-bottom-width: 50px;"));
        btnUI_haut_4 = new QPushButton(centralwidget);
        btnUI_haut_4->setObjectName(QString::fromUtf8("btnUI_haut_4"));
        btnUI_haut_4->setGeometry(QRect(700, 360, 81, 91));
        btnUI_haut_4->setStyleSheet(QString::fromUtf8("border: 0 solid rgb(47, 47, 47);\n"
"border-right-width: 50px;\n"
"border-left-width: 50px;\n"
"border-top: 100px solid blue;"));
        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 964, 26));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(btnUI_quitter, btnUI_resume);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnUI_quitter->setText(QCoreApplication::translate("MainWindow", "QUITTER", nullptr));
        btnUI_resume->setText(QCoreApplication::translate("MainWindow", "RESUME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "WIFIBOT", nullptr));
        label_2->setText(QString());
        btnUI_Start->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        btnUI_haut->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        btnUI_haut_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        btnUI_haut_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        btnUI_haut_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
