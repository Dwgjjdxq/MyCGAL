/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_point_set_wlop_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_POINT_SET_WLOP_PLUGIN_H
#define UI_POLYHEDRON_DEMO_POINT_SET_WLOP_PLUGIN_H

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

class Ui_WLOPRegularizationAndSimplificationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *m_retainedPercentage;
    QLabel *label_3;
    QDoubleSpinBox *m_neighborhoodRadius;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WLOPRegularizationAndSimplificationDialog)
    {
        if (WLOPRegularizationAndSimplificationDialog->objectName().isEmpty())
            WLOPRegularizationAndSimplificationDialog->setObjectName(QStringLiteral("WLOPRegularizationAndSimplificationDialog"));
        WLOPRegularizationAndSimplificationDialog->resize(292, 109);
        gridLayout = new QGridLayout(WLOPRegularizationAndSimplificationDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(WLOPRegularizationAndSimplificationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        m_retainedPercentage = new QDoubleSpinBox(WLOPRegularizationAndSimplificationDialog);
        m_retainedPercentage->setObjectName(QStringLiteral("m_retainedPercentage"));
        m_retainedPercentage->setDecimals(2);
        m_retainedPercentage->setMinimum(0.1);
        m_retainedPercentage->setMaximum(100);
        m_retainedPercentage->setSingleStep(0.1);
        m_retainedPercentage->setValue(50);

        gridLayout->addWidget(m_retainedPercentage, 0, 1, 1, 1);

        label_3 = new QLabel(WLOPRegularizationAndSimplificationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        m_neighborhoodRadius = new QDoubleSpinBox(WLOPRegularizationAndSimplificationDialog);
        m_neighborhoodRadius->setObjectName(QStringLiteral("m_neighborhoodRadius"));
        m_neighborhoodRadius->setDecimals(2);
        m_neighborhoodRadius->setMinimum(0.1);
        m_neighborhoodRadius->setMaximum(10);
        m_neighborhoodRadius->setSingleStep(0.1);
        m_neighborhoodRadius->setValue(1);

        gridLayout->addWidget(m_neighborhoodRadius, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(WLOPRegularizationAndSimplificationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(WLOPRegularizationAndSimplificationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), WLOPRegularizationAndSimplificationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WLOPRegularizationAndSimplificationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(WLOPRegularizationAndSimplificationDialog);
    } // setupUi

    void retranslateUi(QDialog *WLOPRegularizationAndSimplificationDialog)
    {
        WLOPRegularizationAndSimplificationDialog->setWindowTitle(QApplication::translate("WLOPRegularizationAndSimplificationDialog", "WLOP simplification and regularization", 0));
        label_2->setText(QApplication::translate("WLOPRegularizationAndSimplificationDialog", "Retained percentage", 0));
        m_retainedPercentage->setSuffix(QApplication::translate("WLOPRegularizationAndSimplificationDialog", " %", 0));
        label_3->setText(QApplication::translate("WLOPRegularizationAndSimplificationDialog", "Neighborhood radius", 0));
        m_neighborhoodRadius->setSuffix(QApplication::translate("WLOPRegularizationAndSimplificationDialog", " * average spacing", 0));
    } // retranslateUi

};

namespace Ui {
    class WLOPRegularizationAndSimplificationDialog: public Ui_WLOPRegularizationAndSimplificationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_POINT_SET_WLOP_PLUGIN_H
