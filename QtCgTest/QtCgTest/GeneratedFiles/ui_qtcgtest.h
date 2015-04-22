/********************************************************************************
** Form generated from reading UI file 'qtcgtest.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCGTEST_H
#define UI_QTCGTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCgTest
{
public:

    void setupUi(QWidget *QtCgTest)
    {
        if (QtCgTest->objectName().isEmpty())
            QtCgTest->setObjectName(QStringLiteral("QtCgTest"));
        QtCgTest->resize(600, 400);

        retranslateUi(QtCgTest);

        QMetaObject::connectSlotsByName(QtCgTest);
    } // setupUi

    void retranslateUi(QWidget *QtCgTest)
    {
        QtCgTest->setWindowTitle(QApplication::translate("QtCgTest", "QtCgTest", 0));
    } // retranslateUi

};

namespace Ui {
    class QtCgTest: public Ui_QtCgTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCGTEST_H
