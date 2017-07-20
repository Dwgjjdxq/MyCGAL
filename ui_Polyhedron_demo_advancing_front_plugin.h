/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_advancing_front_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_ADVANCING_FRONT_PLUGIN_H
#define UI_POLYHEDRON_DEMO_ADVANCING_FRONT_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AdvancingFrontDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *m_inputPerimeter;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdvancingFrontDialog)
    {
        if (AdvancingFrontDialog->objectName().isEmpty())
            AdvancingFrontDialog->setObjectName(QStringLiteral("AdvancingFrontDialog"));
        AdvancingFrontDialog->resize(376, 170);
        gridLayout = new QGridLayout(AdvancingFrontDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AdvancingFrontDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_inputPerimeter = new QDoubleSpinBox(AdvancingFrontDialog);
        m_inputPerimeter->setObjectName(QStringLiteral("m_inputPerimeter"));
        m_inputPerimeter->setMinimum(0);
        m_inputPerimeter->setMaximum(1e+09);
        m_inputPerimeter->setValue(0);

        gridLayout->addWidget(m_inputPerimeter, 0, 1, 1, 2);

        buttonBox = new QDialogButtonBox(AdvancingFrontDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 2, 1, 1);


        retranslateUi(AdvancingFrontDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AdvancingFrontDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AdvancingFrontDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AdvancingFrontDialog);
    } // setupUi

    void retranslateUi(QDialog *AdvancingFrontDialog)
    {
        AdvancingFrontDialog->setWindowTitle(QApplication::translate("AdvancingFrontDialog", "Advancing front reconstruction", 0));
        label->setText(QApplication::translate("AdvancingFrontDialog", "Max triangle perimeter:", 0));
        m_inputPerimeter->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class AdvancingFrontDialog: public Ui_AdvancingFrontDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_ADVANCING_FRONT_PLUGIN_H
