/********************************************************************************
** Form generated from reading UI file 'edit_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_WINDOW_H
#define UI_EDIT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit_window
{
public:
    QLabel *add_student_label;
    QDialogButtonBox *buttonBox;
    QLabel *wrng_msg_label;
    QWidget *widget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;

    void setupUi(QWidget *Edit_window)
    {
        if (Edit_window->objectName().isEmpty())
            Edit_window->setObjectName(QStringLiteral("Edit_window"));
        Edit_window->resize(500, 700);
        add_student_label = new QLabel(Edit_window);
        add_student_label->setObjectName(QStringLiteral("add_student_label"));
        add_student_label->setGeometry(QRect(80, 25, 330, 61));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        add_student_label->setFont(font);
        add_student_label->setScaledContents(false);
        add_student_label->setAlignment(Qt::AlignCenter);
        buttonBox = new QDialogButtonBox(Edit_window);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 640, 360, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        wrng_msg_label = new QLabel(Edit_window);
        wrng_msg_label->setObjectName(QStringLiteral("wrng_msg_label"));
        wrng_msg_label->setGeometry(QRect(90, 60, 330, 20));
        wrng_msg_label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Edit_window);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 109, 500, 511));
        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, -60, 501, 581));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Edit_window);

        QMetaObject::connectSlotsByName(Edit_window);
    } // setupUi

    void retranslateUi(QWidget *Edit_window)
    {
        Edit_window->setWindowTitle(QApplication::translate("Edit_window", "Form", Q_NULLPTR));
        add_student_label->setText(QString());
        wrng_msg_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Edit_window: public Ui_Edit_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_WINDOW_H
