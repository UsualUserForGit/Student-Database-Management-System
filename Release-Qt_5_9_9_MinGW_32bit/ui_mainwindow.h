/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QLabel *label;
    QWidget *Result_widget;
    QPushButton *Show_all_button;
    QPushButton *Show_student_button;
    QPushButton *Back_button_1;
    QWidget *Menu_widget;
    QPushButton *Exit_button;
    QPushButton *Result_button;
    QPushButton *Edit_button;
    QWidget *Edit_widget;
    QPushButton *Back_button;
    QPushButton *Delete_button;
    QPushButton *Change_button;
    QPushButton *Add_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(449, 50, 300, 60));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setSizeIncrement(QSize(0, 0));
        label->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(-2);
        Result_widget = new QWidget(centralwidget);
        Result_widget->setObjectName(QStringLiteral("Result_widget"));
        Result_widget->setGeometry(QRect(300, 120, 600, 430));
        Show_all_button = new QPushButton(Result_widget);
        Show_all_button->setObjectName(QStringLiteral("Show_all_button"));
        Show_all_button->setGeometry(QRect(140, 60, 300, 70));
        Show_student_button = new QPushButton(Result_widget);
        Show_student_button->setObjectName(QStringLiteral("Show_student_button"));
        Show_student_button->setGeometry(QRect(140, 195, 300, 70));
        Back_button_1 = new QPushButton(Result_widget);
        Back_button_1->setObjectName(QStringLiteral("Back_button_1"));
        Back_button_1->setGeometry(QRect(140, 330, 300, 70));
        Menu_widget = new QWidget(centralwidget);
        Menu_widget->setObjectName(QStringLiteral("Menu_widget"));
        Menu_widget->setGeometry(QRect(300, 120, 600, 430));
        Exit_button = new QPushButton(Menu_widget);
        Exit_button->setObjectName(QStringLiteral("Exit_button"));
        Exit_button->setGeometry(QRect(140, 300, 300, 100));
        Result_button = new QPushButton(Menu_widget);
        Result_button->setObjectName(QStringLiteral("Result_button"));
        Result_button->setEnabled(true);
        Result_button->setGeometry(QRect(140, 60, 300, 100));
        Edit_button = new QPushButton(Menu_widget);
        Edit_button->setObjectName(QStringLiteral("Edit_button"));
        Edit_button->setGeometry(QRect(140, 180, 300, 100));
        Edit_widget = new QWidget(centralwidget);
        Edit_widget->setObjectName(QStringLiteral("Edit_widget"));
        Edit_widget->setGeometry(QRect(300, 130, 600, 430));
        Back_button = new QPushButton(Edit_widget);
        Back_button->setObjectName(QStringLiteral("Back_button"));
        Back_button->setGeometry(QRect(140, 320, 300, 70));
        Delete_button = new QPushButton(Edit_widget);
        Delete_button->setObjectName(QStringLiteral("Delete_button"));
        Delete_button->setGeometry(QRect(140, 230, 300, 70));
        Change_button = new QPushButton(Edit_widget);
        Change_button->setObjectName(QStringLiteral("Change_button"));
        Change_button->setGeometry(QRect(140, 140, 300, 70));
        Add_button = new QPushButton(Edit_widget);
        Add_button->setObjectName(QStringLiteral("Add_button"));
        Add_button->setGeometry(QRect(140, 50, 300, 70));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        Show_all_button->setText(QApplication::translate("MainWindow", "Show all students", Q_NULLPTR));
        Show_student_button->setText(QApplication::translate("MainWindow", "Show student asset", Q_NULLPTR));
        Back_button_1->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        Exit_button->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        Result_button->setText(QApplication::translate("MainWindow", "Result menu", Q_NULLPTR));
        Edit_button->setText(QApplication::translate("MainWindow", "Edit menu", Q_NULLPTR));
        Back_button->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        Delete_button->setText(QApplication::translate("MainWindow", "Delete student", Q_NULLPTR));
        Change_button->setText(QApplication::translate("MainWindow", "Change student", Q_NULLPTR));
        Add_button->setText(QApplication::translate("MainWindow", "Add student", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
