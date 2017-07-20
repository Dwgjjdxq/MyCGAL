/********************************************************************************
** Form generated from reading UI file 'Polyhedron_demo_point_set_shape_detection_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYHEDRON_DEMO_POINT_SET_SHAPE_DETECTION_PLUGIN_H
#define UI_POLYHEDRON_DEMO_POINT_SET_SHAPE_DETECTION_PLUGIN_H

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

class Ui_PointSetShapeDetectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *planeCB;
    QCheckBox *cylinderCB;
    QCheckBox *torusCB;
    QCheckBox *coneCB;
    QCheckBox *sphereCB;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *m_epsilon_field;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *m_normal_tolerance_field;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *m_min_pts_field;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *m_cluster_epsilon_field;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *m_probability_field;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PointSetShapeDetectionDialog)
    {
        if (PointSetShapeDetectionDialog->objectName().isEmpty())
            PointSetShapeDetectionDialog->setObjectName(QStringLiteral("PointSetShapeDetectionDialog"));
        PointSetShapeDetectionDialog->resize(444, 205);
        verticalLayout = new QVBoxLayout(PointSetShapeDetectionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        planeCB = new QCheckBox(PointSetShapeDetectionDialog);
        planeCB->setObjectName(QStringLiteral("planeCB"));
        planeCB->setChecked(true);

        horizontalLayout_6->addWidget(planeCB);

        cylinderCB = new QCheckBox(PointSetShapeDetectionDialog);
        cylinderCB->setObjectName(QStringLiteral("cylinderCB"));
        cylinderCB->setChecked(true);

        horizontalLayout_6->addWidget(cylinderCB);

        torusCB = new QCheckBox(PointSetShapeDetectionDialog);
        torusCB->setObjectName(QStringLiteral("torusCB"));

        horizontalLayout_6->addWidget(torusCB);

        coneCB = new QCheckBox(PointSetShapeDetectionDialog);
        coneCB->setObjectName(QStringLiteral("coneCB"));

        horizontalLayout_6->addWidget(coneCB);

        sphereCB = new QCheckBox(PointSetShapeDetectionDialog);
        sphereCB->setObjectName(QStringLiteral("sphereCB"));

        horizontalLayout_6->addWidget(sphereCB);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(PointSetShapeDetectionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        m_epsilon_field = new QDoubleSpinBox(PointSetShapeDetectionDialog);
        m_epsilon_field->setObjectName(QStringLiteral("m_epsilon_field"));
        m_epsilon_field->setDecimals(3);
        m_epsilon_field->setMaximum(1);
        m_epsilon_field->setSingleStep(0.001);
        m_epsilon_field->setValue(0.002);

        horizontalLayout_2->addWidget(m_epsilon_field);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(PointSetShapeDetectionDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_normal_tolerance_field = new QDoubleSpinBox(PointSetShapeDetectionDialog);
        m_normal_tolerance_field->setObjectName(QStringLiteral("m_normal_tolerance_field"));
        m_normal_tolerance_field->setSingleStep(0.001);
        m_normal_tolerance_field->setValue(0.9);

        horizontalLayout->addWidget(m_normal_tolerance_field);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(PointSetShapeDetectionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        m_min_pts_field = new QSpinBox(PointSetShapeDetectionDialog);
        m_min_pts_field->setObjectName(QStringLiteral("m_min_pts_field"));
        m_min_pts_field->setMaximum(10000);
        m_min_pts_field->setSingleStep(50);
        m_min_pts_field->setValue(100);

        horizontalLayout_3->addWidget(m_min_pts_field);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(PointSetShapeDetectionDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        m_cluster_epsilon_field = new QDoubleSpinBox(PointSetShapeDetectionDialog);
        m_cluster_epsilon_field->setObjectName(QStringLiteral("m_cluster_epsilon_field"));
        m_cluster_epsilon_field->setDecimals(2);
        m_cluster_epsilon_field->setMaximum(1);
        m_cluster_epsilon_field->setSingleStep(0.01);
        m_cluster_epsilon_field->setValue(0.02);

        horizontalLayout_4->addWidget(m_cluster_epsilon_field);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(PointSetShapeDetectionDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        m_probability_field = new QDoubleSpinBox(PointSetShapeDetectionDialog);
        m_probability_field->setObjectName(QStringLiteral("m_probability_field"));
        m_probability_field->setMaximum(1);
        m_probability_field->setSingleStep(0.01);
        m_probability_field->setValue(0.05);

        horizontalLayout_5->addWidget(m_probability_field);


        verticalLayout->addLayout(horizontalLayout_5);

        buttonBox = new QDialogButtonBox(PointSetShapeDetectionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PointSetShapeDetectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PointSetShapeDetectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PointSetShapeDetectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PointSetShapeDetectionDialog);
    } // setupUi

    void retranslateUi(QDialog *PointSetShapeDetectionDialog)
    {
        PointSetShapeDetectionDialog->setWindowTitle(QApplication::translate("PointSetShapeDetectionDialog", "Shape Detection", 0));
        planeCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Plane", 0));
        cylinderCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Cylinder", 0));
        torusCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Torus", 0));
        coneCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Cone", 0));
        sphereCB->setText(QApplication::translate("PointSetShapeDetectionDialog", "Sphere", 0));
        label_2->setText(QApplication::translate("PointSetShapeDetectionDialog", "Epsilon:", 0));
#ifndef QT_NO_TOOLTIP
        m_epsilon_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Fitting tolerance in Euclidean distance", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("PointSetShapeDetectionDialog", "Normal tolerance:", 0));
#ifndef QT_NO_TOOLTIP
        m_normal_tolerance_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Normal angle deviation tolerance as cosine of the angle", 0));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("PointSetShapeDetectionDialog", "minimum no. of points:", 0));
#ifndef QT_NO_TOOLTIP
        m_min_pts_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Smallest allowed size for a primitive", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PointSetShapeDetectionDialog", "Connectivity epsilon:", 0));
#ifndef QT_NO_TOOLTIP
        m_cluster_epsilon_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Maximum world distance between points on a shape to be considered as connected", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("PointSetShapeDetectionDialog", "Search rigorosity (probability):", 0));
#ifndef QT_NO_TOOLTIP
        m_probability_field->setToolTip(QApplication::translate("PointSetShapeDetectionDialog", "Probability to overlook the largest primitive in one extraction iteration", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PointSetShapeDetectionDialog: public Ui_PointSetShapeDetectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYHEDRON_DEMO_POINT_SET_SHAPE_DETECTION_PLUGIN_H
