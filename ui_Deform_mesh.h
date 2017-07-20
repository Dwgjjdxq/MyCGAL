/********************************************************************************
** Form generated from reading UI file 'Deform_mesh.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFORM_MESH_H
#define UI_DEFORM_MESH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeformMesh
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *SelectionGroupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *RingLayout;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *BrushSpinBoxRoi;
    QSpinBox *BrushSpinBoxCtrlVert;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *SelectAllVerticesPushButton;
    QPushButton *ClearROIPushButton;
    QGroupBox *ROICtrlVertGroupBox;
    QVBoxLayout *CtrlVertRoiLayout;
    QRadioButton *ROIRadioButton;
    QRadioButton *CtrlVertRadioButton;
    QGroupBox *InsertEraseGroupBox;
    QVBoxLayout *InsertRemoveLayout;
    QRadioButton *InsertRadioButton;
    QRadioButton *EraseRadioButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *Threshold_size_spin_box;
    QPushButton *Get_minimum_button;
    QPushButton *Select_isolated_components_button;
    QGroupBox *CtrlVertGroupNavigationGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *PrevCtrlVertPushButton;
    QPushButton *NextCtrlVertPushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddCtrlVertPushButton;
    QPushButton *DeleteCtrlVertPushButton;
    QCheckBox *ActivatePivotingCheckBox;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *OverwritePushButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *ShowROICheckBox;
    QCheckBox *ShowAsSphereCheckBox;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *SaveROIPushButton;
    QPushButton *ReadROIPushButton;
    QHBoxLayout *ApplyAndCloseLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ApplyAndClosePushButton;

    void setupUi(QDockWidget *DeformMesh)
    {
        if (DeformMesh->objectName().isEmpty())
            DeformMesh->setObjectName(QStringLiteral("DeformMesh"));
        DeformMesh->resize(357, 491);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SelectionGroupBox = new QGroupBox(dockWidgetContents);
        SelectionGroupBox->setObjectName(QStringLiteral("SelectionGroupBox"));
        gridLayout = new QGridLayout(SelectionGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        RingLayout = new QVBoxLayout();
        RingLayout->setObjectName(QStringLiteral("RingLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(SelectionGroupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        label_2 = new QLabel(SelectionGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_5->addWidget(label_2);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        BrushSpinBoxRoi = new QSpinBox(SelectionGroupBox);
        BrushSpinBoxRoi->setObjectName(QStringLiteral("BrushSpinBoxRoi"));

        verticalLayout_2->addWidget(BrushSpinBoxRoi);

        BrushSpinBoxCtrlVert = new QSpinBox(SelectionGroupBox);
        BrushSpinBoxCtrlVert->setObjectName(QStringLiteral("BrushSpinBoxCtrlVert"));

        verticalLayout_2->addWidget(BrushSpinBoxCtrlVert);


        horizontalLayout_4->addLayout(verticalLayout_2);


        RingLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(RingLayout, 2, 1, 2, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        SelectAllVerticesPushButton = new QPushButton(SelectionGroupBox);
        SelectAllVerticesPushButton->setObjectName(QStringLiteral("SelectAllVerticesPushButton"));

        horizontalLayout_3->addWidget(SelectAllVerticesPushButton);

        ClearROIPushButton = new QPushButton(SelectionGroupBox);
        ClearROIPushButton->setObjectName(QStringLiteral("ClearROIPushButton"));

        horizontalLayout_3->addWidget(ClearROIPushButton);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 5);

        ROICtrlVertGroupBox = new QGroupBox(SelectionGroupBox);
        ROICtrlVertGroupBox->setObjectName(QStringLiteral("ROICtrlVertGroupBox"));
        CtrlVertRoiLayout = new QVBoxLayout(ROICtrlVertGroupBox);
        CtrlVertRoiLayout->setObjectName(QStringLiteral("CtrlVertRoiLayout"));
        ROIRadioButton = new QRadioButton(ROICtrlVertGroupBox);
        ROIRadioButton->setObjectName(QStringLiteral("ROIRadioButton"));
        ROIRadioButton->setChecked(true);

        CtrlVertRoiLayout->addWidget(ROIRadioButton);

        CtrlVertRadioButton = new QRadioButton(ROICtrlVertGroupBox);
        CtrlVertRadioButton->setObjectName(QStringLiteral("CtrlVertRadioButton"));

        CtrlVertRoiLayout->addWidget(CtrlVertRadioButton);


        gridLayout->addWidget(ROICtrlVertGroupBox, 2, 0, 2, 1);

        InsertEraseGroupBox = new QGroupBox(SelectionGroupBox);
        InsertEraseGroupBox->setObjectName(QStringLiteral("InsertEraseGroupBox"));
        InsertRemoveLayout = new QVBoxLayout(InsertEraseGroupBox);
        InsertRemoveLayout->setObjectName(QStringLiteral("InsertRemoveLayout"));
        InsertRadioButton = new QRadioButton(InsertEraseGroupBox);
        InsertRadioButton->setObjectName(QStringLiteral("InsertRadioButton"));
        InsertRadioButton->setChecked(true);

        InsertRemoveLayout->addWidget(InsertRadioButton);

        EraseRadioButton = new QRadioButton(InsertEraseGroupBox);
        EraseRadioButton->setObjectName(QStringLiteral("EraseRadioButton"));

        InsertRemoveLayout->addWidget(EraseRadioButton);


        gridLayout->addWidget(InsertEraseGroupBox, 2, 4, 2, 1);


        verticalLayout->addWidget(SelectionGroupBox);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        Threshold_size_spin_box = new QSpinBox(groupBox);
        Threshold_size_spin_box->setObjectName(QStringLiteral("Threshold_size_spin_box"));
        Threshold_size_spin_box->setMaximum(999999999);
        Threshold_size_spin_box->setValue(8);

        horizontalLayout_8->addWidget(Threshold_size_spin_box);

        Get_minimum_button = new QPushButton(groupBox);
        Get_minimum_button->setObjectName(QStringLiteral("Get_minimum_button"));

        horizontalLayout_8->addWidget(Get_minimum_button);


        verticalLayout_4->addLayout(horizontalLayout_8);

        Select_isolated_components_button = new QPushButton(groupBox);
        Select_isolated_components_button->setObjectName(QStringLiteral("Select_isolated_components_button"));

        verticalLayout_4->addWidget(Select_isolated_components_button);


        verticalLayout_8->addLayout(verticalLayout_4);


        verticalLayout->addWidget(groupBox);

        CtrlVertGroupNavigationGroupBox = new QGroupBox(dockWidgetContents);
        CtrlVertGroupNavigationGroupBox->setObjectName(QStringLiteral("CtrlVertGroupNavigationGroupBox"));
        verticalLayout_3 = new QVBoxLayout(CtrlVertGroupNavigationGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        PrevCtrlVertPushButton = new QPushButton(CtrlVertGroupNavigationGroupBox);
        PrevCtrlVertPushButton->setObjectName(QStringLiteral("PrevCtrlVertPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PrevCtrlVertPushButton->sizePolicy().hasHeightForWidth());
        PrevCtrlVertPushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(PrevCtrlVertPushButton);

        NextCtrlVertPushButton = new QPushButton(CtrlVertGroupNavigationGroupBox);
        NextCtrlVertPushButton->setObjectName(QStringLiteral("NextCtrlVertPushButton"));

        horizontalLayout->addWidget(NextCtrlVertPushButton);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        AddCtrlVertPushButton = new QPushButton(CtrlVertGroupNavigationGroupBox);
        AddCtrlVertPushButton->setObjectName(QStringLiteral("AddCtrlVertPushButton"));

        horizontalLayout_2->addWidget(AddCtrlVertPushButton);

        DeleteCtrlVertPushButton = new QPushButton(CtrlVertGroupNavigationGroupBox);
        DeleteCtrlVertPushButton->setObjectName(QStringLiteral("DeleteCtrlVertPushButton"));

        horizontalLayout_2->addWidget(DeleteCtrlVertPushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        ActivatePivotingCheckBox = new QCheckBox(CtrlVertGroupNavigationGroupBox);
        ActivatePivotingCheckBox->setObjectName(QStringLiteral("ActivatePivotingCheckBox"));

        verticalLayout_3->addWidget(ActivatePivotingCheckBox);


        verticalLayout->addWidget(CtrlVertGroupNavigationGroupBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        OverwritePushButton = new QPushButton(dockWidgetContents);
        OverwritePushButton->setObjectName(QStringLiteral("OverwritePushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(OverwritePushButton->sizePolicy().hasHeightForWidth());
        OverwritePushButton->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(OverwritePushButton);


        verticalLayout->addLayout(horizontalLayout_7);

        line = new QFrame(dockWidgetContents);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ShowROICheckBox = new QCheckBox(dockWidgetContents);
        ShowROICheckBox->setObjectName(QStringLiteral("ShowROICheckBox"));
        ShowROICheckBox->setChecked(true);

        horizontalLayout_5->addWidget(ShowROICheckBox);

        ShowAsSphereCheckBox = new QCheckBox(dockWidgetContents);
        ShowAsSphereCheckBox->setObjectName(QStringLiteral("ShowAsSphereCheckBox"));
        ShowAsSphereCheckBox->setChecked(false);

        horizontalLayout_5->addWidget(ShowAsSphereCheckBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        SaveROIPushButton = new QPushButton(dockWidgetContents);
        SaveROIPushButton->setObjectName(QStringLiteral("SaveROIPushButton"));

        horizontalLayout_6->addWidget(SaveROIPushButton);

        ReadROIPushButton = new QPushButton(dockWidgetContents);
        ReadROIPushButton->setObjectName(QStringLiteral("ReadROIPushButton"));

        horizontalLayout_6->addWidget(ReadROIPushButton);


        verticalLayout->addLayout(horizontalLayout_6);

        ApplyAndCloseLayout = new QHBoxLayout();
        ApplyAndCloseLayout->setObjectName(QStringLiteral("ApplyAndCloseLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ApplyAndCloseLayout->addItem(horizontalSpacer);

        ApplyAndClosePushButton = new QPushButton(dockWidgetContents);
        ApplyAndClosePushButton->setObjectName(QStringLiteral("ApplyAndClosePushButton"));
        sizePolicy1.setHeightForWidth(ApplyAndClosePushButton->sizePolicy().hasHeightForWidth());
        ApplyAndClosePushButton->setSizePolicy(sizePolicy1);

        ApplyAndCloseLayout->addWidget(ApplyAndClosePushButton);


        verticalLayout->addLayout(ApplyAndCloseLayout);

        DeformMesh->setWidget(dockWidgetContents);

        retranslateUi(DeformMesh);

        QMetaObject::connectSlotsByName(DeformMesh);
    } // setupUi

    void retranslateUi(QDockWidget *DeformMesh)
    {
        DeformMesh->setWindowTitle(QApplication::translate("DeformMesh", "Surface Mesh Deformation", 0));
        SelectionGroupBox->setTitle(QApplication::translate("DeformMesh", "Selection", 0));
        label->setText(QApplication::translate("DeformMesh", "Brush Size ROI:", 0));
        label_2->setText(QApplication::translate("DeformMesh", "Control Vertices Brush Size:", 0));
        SelectAllVerticesPushButton->setText(QApplication::translate("DeformMesh", "Set All Vertices as ROI", 0));
        ClearROIPushButton->setText(QApplication::translate("DeformMesh", "Clear ROI", 0));
#ifndef QT_NO_TOOLTIP
        ROIRadioButton->setToolTip(QApplication::translate("DeformMesh", "Use Shift + Left Click to paint ROI vertices", 0));
#endif // QT_NO_TOOLTIP
        ROIRadioButton->setText(QApplication::translate("DeformMesh", "ROI", 0));
#ifndef QT_NO_TOOLTIP
        CtrlVertRadioButton->setToolTip(QApplication::translate("DeformMesh", "Use Shift + Left Click to paint control vertices", 0));
#endif // QT_NO_TOOLTIP
        CtrlVertRadioButton->setText(QApplication::translate("DeformMesh", "Control vertices", 0));
        InsertRadioButton->setText(QApplication::translate("DeformMesh", "Insertion", 0));
        EraseRadioButton->setText(QApplication::translate("DeformMesh", "Removal", 0));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("DeformMesh", "Isolated Component Size:", 0));
        Get_minimum_button->setText(QApplication::translate("DeformMesh", "Get Minimum", 0));
        Select_isolated_components_button->setText(QApplication::translate("DeformMesh", "Select Isolated Components Below Threshold", 0));
        CtrlVertGroupNavigationGroupBox->setTitle(QApplication::translate("DeformMesh", "Group of Control Vertices Navigation", 0));
        PrevCtrlVertPushButton->setText(QApplication::translate("DeformMesh", "<<", 0));
        NextCtrlVertPushButton->setText(QApplication::translate("DeformMesh", ">>", 0));
        AddCtrlVertPushButton->setText(QApplication::translate("DeformMesh", "Create new", 0));
        DeleteCtrlVertPushButton->setText(QApplication::translate("DeformMesh", "Delete ", 0));
        ActivatePivotingCheckBox->setText(QApplication::translate("DeformMesh", "Activate Pivoting ", 0));
        OverwritePushButton->setText(QApplication::translate("DeformMesh", "Update Original Positions", 0));
        ShowROICheckBox->setText(QApplication::translate("DeformMesh", "Show ROI", 0));
        ShowAsSphereCheckBox->setText(QApplication::translate("DeformMesh", "Show As Sphere", 0));
        SaveROIPushButton->setText(QApplication::translate("DeformMesh", "Save ROI / Control Vertices", 0));
        ReadROIPushButton->setText(QApplication::translate("DeformMesh", "Load ROI / Control Vertices", 0));
        ApplyAndClosePushButton->setText(QApplication::translate("DeformMesh", "Apply and Close", 0));
    } // retranslateUi

};

namespace Ui {
    class DeformMesh: public Ui_DeformMesh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFORM_MESH_H
