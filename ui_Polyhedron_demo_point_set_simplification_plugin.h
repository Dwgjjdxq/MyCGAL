/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_point_set_simplification_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_POINT_SET_SIMPLIFICATION_PLUGIN_H
#define UI_POLYHEDRON_DEMO_POINT_SET_SIMPLIFICATION_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_PointSetSimplificationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *m_simplificationMethod;
    QLabel *label_2;
    QDoubleSpinBox *m_randomSimplificationPercentage;
    QLabel *label_3;
    QDoubleSpinBox *m_gridCellSize;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PointSetSimplificationDialog)
    {
        if (PointSetSimplificationDialog->objectName().isEmpty())
            PointSetSimplificationDialog->setObjectName(QStringLiteral("PointSetSimplificationDialog"));
        PointSetSimplificationDialog->resize(403, 153);
        gridLayout = new QGridLayout(PointSetSimplificationDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(PointSetSimplificationDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_simplificationMethod = new QComboBox(PointSetSimplificationDialog);
        m_simplificationMethod->setObjectName(QStringLiteral("m_simplificationMethod"));

        gridLayout->addWidget(m_simplificationMethod, 0, 1, 1, 1);

        label_2 = new QLabel(PointSetSimplificationDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_randomSimplificationPercentage = new QDoubleSpinBox(PointSetSimplificationDialog);
        m_randomSimplificationPercentage->setObjectName(QStringLiteral("m_randomSimplificationPercentage"));
        m_randomSimplificationPercentage->setDecimals(2);
        m_randomSimplificationPercentage->setMinimum(0.1);
        m_randomSimplificationPercentage->setMaximum(100);
        m_randomSimplificationPercentage->setSingleStep(0.1);
        m_randomSimplificationPercentage->setValue(50);

        gridLayout->addWidget(m_randomSimplificationPercentage, 1, 1, 1, 1);

        label_3 = new QLabel(PointSetSimplificationDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        m_gridCellSize = new QDoubleSpinBox(PointSetSimplificationDialog);
        m_gridCellSize->setObjectName(QStringLiteral("m_gridCellSize"));
        m_gridCellSize->setDecimals(2);
        m_gridCellSize->setMinimum(0.1);
        m_gridCellSize->setMaximum(10);
        m_gridCellSize->setSingleStep(0.1);
        m_gridCellSize->setValue(1);

        gridLayout->addWidget(m_gridCellSize, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PointSetSimplificationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        retranslateUi(PointSetSimplificationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PointSetSimplificationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PointSetSimplificationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PointSetSimplificationDialog);
    } // setupUi

    void retranslateUi(QDialog *PointSetSimplificationDialog)
    {
        PointSetSimplificationDialog->setWindowTitle(QApplication::translate("PointSetSimplificationDialog", "Simplification", 0));
        label->setText(QApplication::translate("PointSetSimplificationDialog", "Method:", 0));
        m_simplificationMethod->clear();
        m_simplificationMethod->insertItems(0, QStringList()
         << QApplication::translate("PointSetSimplificationDialog", "Random", 0)
         << QApplication::translate("PointSetSimplificationDialog", "Grid Clustering", 0)
        );
        label_2->setText(QApplication::translate("PointSetSimplificationDialog", "Points to Remove Randomly", 0));
        m_randomSimplificationPercentage->setSuffix(QApplication::translate("PointSetSimplificationDialog", " %", 0));
        label_3->setText(QApplication::translate("PointSetSimplificationDialog", "Grid Cell Size", 0));
        m_gridCellSize->setSuffix(QApplication::translate("PointSetSimplificationDialog", " * average spacing", 0));
    } // retranslateUi

};

namespace Ui {
    class PointSetSimplificationDialog: public Ui_PointSetSimplificationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_POINT_SET_SIMPLIFICATION_PLUGIN_H
