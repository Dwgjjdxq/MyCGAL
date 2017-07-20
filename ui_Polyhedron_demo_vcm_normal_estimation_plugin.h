/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_vcm_normal_estimation_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_VCM_NORMAL_ESTIMATION_PLUGIN_H
#define UI_POLYHEDRON_DEMO_VCM_NORMAL_ESTIMATION_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VCMNormalEstimationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *m_inputOffsetRadius;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *m_inputConvolveRadius;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *m_inputConvolveNeighbors;
    QCheckBox *m_inputUseConvRad;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VCMNormalEstimationDialog)
    {
        if (VCMNormalEstimationDialog->objectName().isEmpty())
            VCMNormalEstimationDialog->setObjectName(QStringLiteral("VCMNormalEstimationDialog"));
        VCMNormalEstimationDialog->resize(462, 401);
        verticalLayout = new QVBoxLayout(VCMNormalEstimationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(VCMNormalEstimationDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_inputOffsetRadius = new QDoubleSpinBox(VCMNormalEstimationDialog);
        m_inputOffsetRadius->setObjectName(QStringLiteral("m_inputOffsetRadius"));
        m_inputOffsetRadius->setDecimals(3);
        m_inputOffsetRadius->setSingleStep(0.05);
        m_inputOffsetRadius->setValue(0.1);

        horizontalLayout->addWidget(m_inputOffsetRadius);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(VCMNormalEstimationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        m_inputConvolveRadius = new QDoubleSpinBox(VCMNormalEstimationDialog);
        m_inputConvolveRadius->setObjectName(QStringLiteral("m_inputConvolveRadius"));
        m_inputConvolveRadius->setDecimals(3);
        m_inputConvolveRadius->setSingleStep(0.05);

        horizontalLayout_2->addWidget(m_inputConvolveRadius);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(VCMNormalEstimationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        m_inputConvolveNeighbors = new QSpinBox(VCMNormalEstimationDialog);
        m_inputConvolveNeighbors->setObjectName(QStringLiteral("m_inputConvolveNeighbors"));
        m_inputConvolveNeighbors->setValue(40);

        horizontalLayout_3->addWidget(m_inputConvolveNeighbors);


        verticalLayout->addLayout(horizontalLayout_3);

        m_inputUseConvRad = new QCheckBox(VCMNormalEstimationDialog);
        m_inputUseConvRad->setObjectName(QStringLiteral("m_inputUseConvRad"));
        m_inputUseConvRad->setChecked(true);

        verticalLayout->addWidget(m_inputUseConvRad);

        buttonBox = new QDialogButtonBox(VCMNormalEstimationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        label->raise();
        buttonBox->raise();
        m_inputOffsetRadius->raise();
        m_inputConvolveRadius->raise();
        label_2->raise();
        label_3->raise();
        m_inputConvolveNeighbors->raise();
        label_2->raise();
        m_inputUseConvRad->raise();

        retranslateUi(VCMNormalEstimationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VCMNormalEstimationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VCMNormalEstimationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VCMNormalEstimationDialog);
    } // setupUi

    void retranslateUi(QDialog *VCMNormalEstimationDialog)
    {
        VCMNormalEstimationDialog->setWindowTitle(QApplication::translate("VCMNormalEstimationDialog", "Normal estimation", 0));
        label->setText(QApplication::translate("VCMNormalEstimationDialog", "Offset Radius:", 0));
        label_2->setText(QApplication::translate("VCMNormalEstimationDialog", "Convolution radius:", 0));
        label_3->setText(QApplication::translate("VCMNormalEstimationDialog", "Convolution Neighbors:", 0));
        m_inputConvolveNeighbors->setSuffix(QApplication::translate("VCMNormalEstimationDialog", " neighbors", 0));
        m_inputUseConvRad->setText(QApplication::translate("VCMNormalEstimationDialog", "Use Convolution Radius", 0));
    } // retranslateUi

};

namespace Ui {
    class VCMNormalEstimationDialog: public Ui_VCMNormalEstimationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_VCM_NORMAL_ESTIMATION_PLUGIN_H
