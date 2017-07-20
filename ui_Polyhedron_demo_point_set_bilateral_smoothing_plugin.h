/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_point_set_bilateral_smoothing_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_POINT_SET_BILATERAL_SMOOTHING_PLUGIN_H
#define UI_POLYHEDRON_DEMO_POINT_SET_BILATERAL_SMOOTHING_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PointSetBilateralSmoothingDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QSpinBox *m_iterations;
    QSpinBox *m_neighborhoodSize;
    QSpinBox *m_sharpnessAngle;
    QLabel *label;

    void setupUi(QDialog *PointSetBilateralSmoothingDialog)
    {
        if (PointSetBilateralSmoothingDialog->objectName().isEmpty())
            PointSetBilateralSmoothingDialog->setObjectName(QStringLiteral("PointSetBilateralSmoothingDialog"));
        PointSetBilateralSmoothingDialog->resize(357, 141);
        gridLayout = new QGridLayout(PointSetBilateralSmoothingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(PointSetBilateralSmoothingDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PointSetBilateralSmoothingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        label_5 = new QLabel(PointSetBilateralSmoothingDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        m_iterations = new QSpinBox(PointSetBilateralSmoothingDialog);
        m_iterations->setObjectName(QStringLiteral("m_iterations"));
        m_iterations->setMinimum(1);
        m_iterations->setMaximum(2147483647);
        m_iterations->setValue(1);

        gridLayout->addWidget(m_iterations, 0, 1, 1, 1);

        m_neighborhoodSize = new QSpinBox(PointSetBilateralSmoothingDialog);
        m_neighborhoodSize->setObjectName(QStringLiteral("m_neighborhoodSize"));
        m_neighborhoodSize->setMinimum(1);
        m_neighborhoodSize->setMaximum(2147483647);
        m_neighborhoodSize->setValue(24);

        gridLayout->addWidget(m_neighborhoodSize, 1, 1, 1, 1);

        m_sharpnessAngle = new QSpinBox(PointSetBilateralSmoothingDialog);
        m_sharpnessAngle->setObjectName(QStringLiteral("m_sharpnessAngle"));
        m_sharpnessAngle->setMaximum(90);
        m_sharpnessAngle->setValue(25);

        gridLayout->addWidget(m_sharpnessAngle, 2, 1, 1, 1);

        label = new QLabel(PointSetBilateralSmoothingDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        retranslateUi(PointSetBilateralSmoothingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PointSetBilateralSmoothingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PointSetBilateralSmoothingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PointSetBilateralSmoothingDialog);
    } // setupUi

    void retranslateUi(QDialog *PointSetBilateralSmoothingDialog)
    {
        PointSetBilateralSmoothingDialog->setWindowTitle(QApplication::translate("PointSetBilateralSmoothingDialog", "Bilateral smoothing", 0));
        label_4->setText(QApplication::translate("PointSetBilateralSmoothingDialog", "Iterations", 0));
        label_5->setText(QApplication::translate("PointSetBilateralSmoothingDialog", "Neighborhood size", 0));
        m_neighborhoodSize->setSuffix(QString());
        m_neighborhoodSize->setPrefix(QString());
        m_sharpnessAngle->setSuffix(QApplication::translate("PointSetBilateralSmoothingDialog", "\302\260", 0));
        label->setText(QApplication::translate("PointSetBilateralSmoothingDialog", "Sharpness Angle", 0));
    } // retranslateUi

};

namespace Ui {
    class PointSetBilateralSmoothingDialog: public Ui_PointSetBilateralSmoothingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_POINT_SET_BILATERAL_SMOOTHING_PLUGIN_H
