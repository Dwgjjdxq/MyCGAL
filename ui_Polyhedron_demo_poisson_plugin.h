/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_poisson_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_POISSON_PLUGIN_H
#define UI_POLYHEDRON_DEMO_POISSON_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_PoissonDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *m_inputAngle;
    QLabel *label_2;
    QDoubleSpinBox *m_inputRadius;
    QLabel *label_3;
    QDoubleSpinBox *m_inputDistance;
    QLabel *label_4;
    QComboBox *m_inputSolver;
    QDialogButtonBox *buttonBox;
    QCheckBox *m_inputTwoPasses;

    void setupUi(QDialog *PoissonDialog)
    {
        if (PoissonDialog->objectName().isEmpty())
            PoissonDialog->setObjectName(QStringLiteral("PoissonDialog"));
        PoissonDialog->resize(390, 312);
        gridLayout = new QGridLayout(PoissonDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PoissonDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_inputAngle = new QDoubleSpinBox(PoissonDialog);
        m_inputAngle->setObjectName(QStringLiteral("m_inputAngle"));
        m_inputAngle->setMinimum(1);
        m_inputAngle->setMaximum(30);
        m_inputAngle->setValue(20);

        gridLayout->addWidget(m_inputAngle, 0, 1, 1, 2);

        label_2 = new QLabel(PoissonDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_inputRadius = new QDoubleSpinBox(PoissonDialog);
        m_inputRadius->setObjectName(QStringLiteral("m_inputRadius"));
        m_inputRadius->setDecimals(0);
        m_inputRadius->setMinimum(1);
        m_inputRadius->setMaximum(1000);
        m_inputRadius->setSingleStep(1);
        m_inputRadius->setValue(100);

        gridLayout->addWidget(m_inputRadius, 1, 1, 1, 2);

        label_3 = new QLabel(PoissonDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        m_inputDistance = new QDoubleSpinBox(PoissonDialog);
        m_inputDistance->setObjectName(QStringLiteral("m_inputDistance"));
        m_inputDistance->setDecimals(6);
        m_inputDistance->setMinimum(0.01);
        m_inputDistance->setMaximum(100);
        m_inputDistance->setSingleStep(0.01);
        m_inputDistance->setValue(0.25);

        gridLayout->addWidget(m_inputDistance, 2, 1, 1, 2);

        label_4 = new QLabel(PoissonDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        m_inputSolver = new QComboBox(PoissonDialog);
        m_inputSolver->setObjectName(QStringLiteral("m_inputSolver"));

        gridLayout->addWidget(m_inputSolver, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(PoissonDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 2, 1, 1);

        m_inputTwoPasses = new QCheckBox(PoissonDialog);
        m_inputTwoPasses->setObjectName(QStringLiteral("m_inputTwoPasses"));

        gridLayout->addWidget(m_inputTwoPasses, 4, 0, 1, 2);


        retranslateUi(PoissonDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PoissonDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PoissonDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PoissonDialog);
    } // setupUi

    void retranslateUi(QDialog *PoissonDialog)
    {
        PoissonDialog->setWindowTitle(QApplication::translate("PoissonDialog", "Poisson reconstruction", 0));
        label->setText(QApplication::translate("PoissonDialog", "Min triangle angle:", 0));
        m_inputAngle->setSuffix(QApplication::translate("PoissonDialog", " \302\260", 0));
        label_2->setText(QApplication::translate("PoissonDialog", "Max triangle size:", 0));
        m_inputRadius->setSuffix(QApplication::translate("PoissonDialog", " * average spacing", 0));
        label_3->setText(QApplication::translate("PoissonDialog", "Approximation error:", 0));
        m_inputDistance->setSuffix(QApplication::translate("PoissonDialog", " * average spacing", 0));
        label_4->setText(QApplication::translate("PoissonDialog", "Solver:", 0));
#ifndef QT_NO_TOOLTIP
        m_inputSolver->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m_inputTwoPasses->setText(QApplication::translate("PoissonDialog", "Uses two passes", 0));
    } // retranslateUi

};

namespace Ui {
    class PoissonDialog: public Ui_PoissonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_POISSON_PLUGIN_H
