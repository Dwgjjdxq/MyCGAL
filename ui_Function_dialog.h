/********************************************************************************
** Form generated from reading UI file 'Function_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION_DIALOG_H
#define UI_FUNCTION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FunctionDialog
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *functionList;
    QLabel *label;

    void setupUi(QDialog *FunctionDialog)
    {
        if (FunctionDialog->objectName().isEmpty())
            FunctionDialog->setObjectName(QStringLiteral("FunctionDialog"));
        FunctionDialog->resize(399, 149);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FunctionDialog->sizePolicy().hasHeightForWidth());
        FunctionDialog->setSizePolicy(sizePolicy);
        buttonBox = new QDialogButtonBox(FunctionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        functionList = new QComboBox(FunctionDialog);
        functionList->setObjectName(QStringLiteral("functionList"));
        functionList->setGeometry(QRect(20, 40, 261, 26));
        label = new QLabel(FunctionDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 251, 16));

        retranslateUi(FunctionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FunctionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FunctionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FunctionDialog);
    } // setupUi

    void retranslateUi(QDialog *FunctionDialog)
    {
        FunctionDialog->setWindowTitle(QApplication::translate("FunctionDialog", "Load Function", 0));
        label->setText(QApplication::translate("FunctionDialog", "Please choose the function to load:", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionDialog: public Ui_FunctionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION_DIALOG_H
