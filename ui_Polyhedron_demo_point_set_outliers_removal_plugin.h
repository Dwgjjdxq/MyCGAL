/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_point_set_outliers_removal_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_POINT_SET_OUTLIERS_REMOVAL_PLUGIN_H
#define UI_POLYHEDRON_DEMO_POINT_SET_OUTLIERS_REMOVAL_PLUGIN_H

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
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_OutlierRemovalDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *m_inputPercentage;
    QLabel *label_2;
    QSpinBox *m_inputNbNeighbors;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OutlierRemovalDialog)
    {
        if (OutlierRemovalDialog->objectName().isEmpty())
            OutlierRemovalDialog->setObjectName(QStringLiteral("OutlierRemovalDialog"));
        OutlierRemovalDialog->resize(331, 120);
        gridLayout = new QGridLayout(OutlierRemovalDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(OutlierRemovalDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_inputPercentage = new QDoubleSpinBox(OutlierRemovalDialog);
        m_inputPercentage->setObjectName(QStringLiteral("m_inputPercentage"));
        m_inputPercentage->setMinimum(0.01);
        m_inputPercentage->setMaximum(100);
        m_inputPercentage->setSingleStep(0.1);
        m_inputPercentage->setValue(5);

        gridLayout->addWidget(m_inputPercentage, 0, 1, 1, 1);

        label_2 = new QLabel(OutlierRemovalDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_inputNbNeighbors = new QSpinBox(OutlierRemovalDialog);
        m_inputNbNeighbors->setObjectName(QStringLiteral("m_inputNbNeighbors"));
        m_inputNbNeighbors->setMinimum(6);
        m_inputNbNeighbors->setMaximum(9999);
        m_inputNbNeighbors->setValue(24);

        gridLayout->addWidget(m_inputNbNeighbors, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(OutlierRemovalDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(OutlierRemovalDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OutlierRemovalDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OutlierRemovalDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OutlierRemovalDialog);
    } // setupUi

    void retranslateUi(QDialog *OutlierRemovalDialog)
    {
        OutlierRemovalDialog->setWindowTitle(QApplication::translate("OutlierRemovalDialog", "Outlier Removal", 0));
        label->setText(QApplication::translate("OutlierRemovalDialog", "Removed percentage:", 0));
        m_inputPercentage->setSuffix(QApplication::translate("OutlierRemovalDialog", " %", 0));
        label_2->setText(QApplication::translate("OutlierRemovalDialog", "Neighbors", 0));
    } // retranslateUi

};

namespace Ui {
    class OutlierRemovalDialog: public Ui_OutlierRemovalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_POINT_SET_OUTLIERS_REMOVAL_PLUGIN_H
