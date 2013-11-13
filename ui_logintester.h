/********************************************************************************
** Form generated from reading UI file 'logintester.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINTESTER_H
#define UI_LOGINTESTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginTester
{
public:
    QLabel *label;
    QPushButton *button;

    void setupUi(QDialog *LoginTester)
    {
        if (LoginTester->objectName().isEmpty())
            LoginTester->setObjectName(QStringLiteral("LoginTester"));
        LoginTester->resize(200, 50);
        label = new QLabel(LoginTester);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -1, 201, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        button = new QPushButton(LoginTester);
        button->setObjectName(QStringLiteral("button"));
        button->setGeometry(QRect(10, 5, 180, 40));
        button->setStyleSheet(QStringLiteral(""));
        button->setFlat(false);

        retranslateUi(LoginTester);

        QMetaObject::connectSlotsByName(LoginTester);
    } // setupUi

    void retranslateUi(QDialog *LoginTester)
    {
        LoginTester->setWindowTitle(QApplication::translate("LoginTester", "Dialog", 0));
        label->setText(QApplication::translate("LoginTester", "Teste Logindaten...", 0));
        button->setText(QApplication::translate("LoginTester", "Login erfolgreich", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginTester: public Ui_LoginTester {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINTESTER_H
