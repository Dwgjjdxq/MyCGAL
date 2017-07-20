/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_normal_estimation_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_NORMAL_ESTIMATION_PLUGIN_H
#define UI_POLYHEDRON_DEMO_NORMAL_ESTIMATION_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NormalEstimationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *m_inputDirection;
    QSpinBox *m_inputNbNeighborsDirection;
    QLabel *label_2;
    QComboBox *m_inputOrientation;
    QSpinBox *m_inputNbNeighborsOrientation;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NormalEstimationDialog)
    {
        if (NormalEstimationDialog->objectName().isEmpty())
            NormalEstimationDialog->setObjectName(QStringLiteral("NormalEstimationDialog"));
        NormalEstimationDialog->resize(311, 120);
        gridLayout = new QGridLayout(NormalEstimationDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(NormalEstimationDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_inputDirection = new QComboBox(NormalEstimationDialog);
        m_inputDirection->setObjectName(QStringLiteral("m_inputDirection"));

        gridLayout->addWidget(m_inputDirection, 0, 1, 1, 1);

        m_inputNbNeighborsDirection = new QSpinBox(NormalEstimationDialog);
        m_inputNbNeighborsDirection->setObjectName(QStringLiteral("m_inputNbNeighborsDirection"));
        m_inputNbNeighborsDirection->setMinimum(6);
        m_inputNbNeighborsDirection->setMaximum(9999);
        m_inputNbNeighborsDirection->setValue(18);

        gridLayout->addWidget(m_inputNbNeighborsDirection, 0, 2, 1, 1);

        label_2 = new QLabel(NormalEstimationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_inputOrientation = new QComboBox(NormalEstimationDialog);
        m_inputOrientation->setObjectName(QStringLiteral("m_inputOrientation"));

        gridLayout->addWidget(m_inputOrientation, 1, 1, 1, 1);

        m_inputNbNeighborsOrientation = new QSpinBox(NormalEstimationDialog);
        m_inputNbNeighborsOrientation->setObjectName(QStringLiteral("m_inputNbNeighborsOrientation"));
        m_inputNbNeighborsOrientation->setMinimum(6);
        m_inputNbNeighborsOrientation->setMaximum(9999);
        m_inputNbNeighborsOrientation->setValue(18);

        gridLayout->addWidget(m_inputNbNeighborsOrientation, 1, 2, 1, 1);

        buttonBox = new QDialogButtonBox(NormalEstimationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 2);


        retranslateUi(NormalEstimationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NormalEstimationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NormalEstimationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NormalEstimationDialog);
    } // setupUi

    void retranslateUi(QDialog *NormalEstimationDialog)
    {
        NormalEstimationDialog->setWindowTitle(QApplication::translate("NormalEstimationDialog", "Normal estimation", 0));
        label->setText(QApplication::translate("NormalEstimationDialog", "Direction:", 0));
        m_inputDirection->clear();
        m_inputDirection->insertItems(0, QStringList()
         << QApplication::translate("NormalEstimationDialog", "quadric", 0)
         << QApplication::translate("NormalEstimationDialog", "plane", 0)
        );
        m_inputNbNeighborsDirection->setSuffix(QApplication::translate("NormalEstimationDialog", " neighbors", 0));
        label_2->setText(QApplication::translate("NormalEstimationDialog", "Orientation:", 0));
        m_inputOrientation->clear();
        m_inputOrientation->insertItems(0, QStringList()
         << QApplication::translate("NormalEstimationDialog", "MST", 0)
        );
        m_inputNbNeighborsOrientation->setSuffix(QApplication::translate("NormalEstimationDialog", " neighbors", 0));
    } // retranslateUi

};

namespace Ui {
    class NormalEstimationDialog: public Ui_NormalEstimationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_NORMAL_ESTIMATION_PLUGIN_H
