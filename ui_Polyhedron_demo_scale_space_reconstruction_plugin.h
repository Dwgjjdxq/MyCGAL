/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_scale_space_reconstruction_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_SCALE_SPACE_RECONSTRUCTION_PLUGIN_H
#define UI_POLYHEDRON_DEMO_SCALE_SPACE_RECONSTRUCTION_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ScaleSpaceOptionsDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *m_genSmooth;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QSpinBox *m_samples;
    QSpinBox *m_iterations;
    QSpinBox *m_neighbors;

    void setupUi(QDialog *ScaleSpaceOptionsDialog)
    {
        if (ScaleSpaceOptionsDialog->objectName().isEmpty())
            ScaleSpaceOptionsDialog->setObjectName(QStringLiteral("ScaleSpaceOptionsDialog"));
        ScaleSpaceOptionsDialog->resize(476, 272);
        gridLayout = new QGridLayout(ScaleSpaceOptionsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_genSmooth = new QCheckBox(ScaleSpaceOptionsDialog);
        m_genSmooth->setObjectName(QStringLiteral("m_genSmooth"));
        m_genSmooth->setChecked(true);

        gridLayout->addWidget(m_genSmooth, 3, 0, 1, 1);

        label_3 = new QLabel(ScaleSpaceOptionsDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(ScaleSpaceOptionsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(ScaleSpaceOptionsDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ScaleSpaceOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 2, 1, 1);

        m_samples = new QSpinBox(ScaleSpaceOptionsDialog);
        m_samples->setObjectName(QStringLiteral("m_samples"));
        m_samples->setMaximum(1000000);
        m_samples->setValue(200);

        gridLayout->addWidget(m_samples, 1, 1, 1, 2);

        m_iterations = new QSpinBox(ScaleSpaceOptionsDialog);
        m_iterations->setObjectName(QStringLiteral("m_iterations"));
        m_iterations->setMinimum(1);
        m_iterations->setMaximum(1000000);
        m_iterations->setValue(4);

        gridLayout->addWidget(m_iterations, 2, 1, 1, 2);

        m_neighbors = new QSpinBox(ScaleSpaceOptionsDialog);
        m_neighbors->setObjectName(QStringLiteral("m_neighbors"));
        m_neighbors->setMinimum(0);
        m_neighbors->setMaximum(100000);
        m_neighbors->setValue(30);

        gridLayout->addWidget(m_neighbors, 0, 1, 1, 2);


        retranslateUi(ScaleSpaceOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ScaleSpaceOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ScaleSpaceOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ScaleSpaceOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ScaleSpaceOptionsDialog)
    {
        ScaleSpaceOptionsDialog->setWindowTitle(QApplication::translate("ScaleSpaceOptionsDialog", "Scale-Space Surface Reconstruction", 0));
        m_genSmooth->setText(QApplication::translate("ScaleSpaceOptionsDialog", "Also generate the smoothed version", 0));
        label_3->setText(QApplication::translate("ScaleSpaceOptionsDialog", "Iterations", 0));
        label_2->setText(QApplication::translate("ScaleSpaceOptionsDialog", "Size of sample to estimate neighborhood", 0));
        label->setText(QApplication::translate("ScaleSpaceOptionsDialog", "Average neighborhood size", 0));
    } // retranslateUi

};

namespace Ui {
    class ScaleSpaceOptionsDialog: public Ui_ScaleSpaceOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_SCALE_SPACE_RECONSTRUCTION_PLUGIN_H
