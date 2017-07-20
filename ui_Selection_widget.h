/********************************************************************************
** Form generated from reading UI file 'Selection_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_WIDGET_H
#define UI_SELECTION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
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

class Ui_Selection
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *Selection_type_combo_box;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *Insertion_radio_button;
    QRadioButton *Removal_radio_button;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpinBox *Brush_size_spin_box;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Select_all_button;
    QPushButton *Clear_button;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *Threshold_size_spin_box;
    QPushButton *Get_minimum_button;
    QPushButton *Select_isolated_components_button;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpinBox *Dilate_erode_spin_box;
    QPushButton *Dilate_erode_button;
    QPushButton *Create_point_set_item_button;
    QPushButton *Create_polyline_item_button;
    QPushButton *Create_polyhedron_item_button;
    QPushButton *Keep_connected_components_button;
    QPushButton *Erase_selected_facets_button;
    QSpacerItem *verticalSpacer;
    QPushButton *Create_selection_item_button;

    void setupUi(QDockWidget *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QStringLiteral("Selection"));
        Selection->resize(399, 556);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        Selection_type_combo_box = new QComboBox(dockWidgetContents);
        Selection_type_combo_box->setObjectName(QStringLiteral("Selection_type_combo_box"));

        horizontalLayout_4->addWidget(Selection_type_combo_box);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_3);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Insertion_radio_button = new QRadioButton(groupBox_2);
        Insertion_radio_button->setObjectName(QStringLiteral("Insertion_radio_button"));
        Insertion_radio_button->setChecked(true);

        horizontalLayout->addWidget(Insertion_radio_button);

        Removal_radio_button = new QRadioButton(groupBox_2);
        Removal_radio_button->setObjectName(QStringLiteral("Removal_radio_button"));

        horizontalLayout->addWidget(Removal_radio_button);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        Brush_size_spin_box = new QSpinBox(groupBox_2);
        Brush_size_spin_box->setObjectName(QStringLiteral("Brush_size_spin_box"));

        horizontalLayout_6->addWidget(Brush_size_spin_box);


        verticalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Select_all_button = new QPushButton(groupBox_2);
        Select_all_button->setObjectName(QStringLiteral("Select_all_button"));

        horizontalLayout_3->addWidget(Select_all_button);

        Clear_button = new QPushButton(groupBox_2);
        Clear_button->setObjectName(QStringLiteral("Clear_button"));

        horizontalLayout_3->addWidget(Clear_button);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_5->addWidget(groupBox_2);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        Threshold_size_spin_box = new QSpinBox(groupBox);
        Threshold_size_spin_box->setObjectName(QStringLiteral("Threshold_size_spin_box"));
        Threshold_size_spin_box->setMaximum(999999999);
        Threshold_size_spin_box->setValue(8);

        horizontalLayout_5->addWidget(Threshold_size_spin_box);

        Get_minimum_button = new QPushButton(groupBox);
        Get_minimum_button->setObjectName(QStringLiteral("Get_minimum_button"));

        horizontalLayout_5->addWidget(Get_minimum_button);


        verticalLayout_4->addLayout(horizontalLayout_5);

        Select_isolated_components_button = new QPushButton(groupBox);
        Select_isolated_components_button->setObjectName(QStringLiteral("Select_isolated_components_button"));

        verticalLayout_4->addWidget(Select_isolated_components_button);


        verticalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_5->addWidget(groupBox);

        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_4);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_8->addWidget(label_5);

        Dilate_erode_spin_box = new QSpinBox(groupBox_4);
        Dilate_erode_spin_box->setObjectName(QStringLiteral("Dilate_erode_spin_box"));
        Dilate_erode_spin_box->setMinimum(-50);
        Dilate_erode_spin_box->setMaximum(50);

        horizontalLayout_8->addWidget(Dilate_erode_spin_box);

        Dilate_erode_button = new QPushButton(groupBox_4);
        Dilate_erode_button->setObjectName(QStringLiteral("Dilate_erode_button"));

        horizontalLayout_8->addWidget(Dilate_erode_button);


        verticalLayout_5->addWidget(groupBox_4);

        Create_point_set_item_button = new QPushButton(dockWidgetContents);
        Create_point_set_item_button->setObjectName(QStringLiteral("Create_point_set_item_button"));

        verticalLayout_5->addWidget(Create_point_set_item_button);

        Create_polyline_item_button = new QPushButton(dockWidgetContents);
        Create_polyline_item_button->setObjectName(QStringLiteral("Create_polyline_item_button"));

        verticalLayout_5->addWidget(Create_polyline_item_button);

        Create_polyhedron_item_button = new QPushButton(dockWidgetContents);
        Create_polyhedron_item_button->setObjectName(QStringLiteral("Create_polyhedron_item_button"));

        verticalLayout_5->addWidget(Create_polyhedron_item_button);

        Keep_connected_components_button = new QPushButton(dockWidgetContents);
        Keep_connected_components_button->setObjectName(QStringLiteral("Keep_connected_components_button"));

        verticalLayout_5->addWidget(Keep_connected_components_button);

        Erase_selected_facets_button = new QPushButton(dockWidgetContents);
        Erase_selected_facets_button->setObjectName(QStringLiteral("Erase_selected_facets_button"));

        verticalLayout_5->addWidget(Erase_selected_facets_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        Create_selection_item_button = new QPushButton(dockWidgetContents);
        Create_selection_item_button->setObjectName(QStringLiteral("Create_selection_item_button"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Create_selection_item_button->setFont(font);

        verticalLayout_5->addWidget(Create_selection_item_button);

        Selection->setWidget(dockWidgetContents);
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(Selection_type_combo_box);
        label->setBuddy(Brush_size_spin_box);
        label_3->setBuddy(Threshold_size_spin_box);
#endif // QT_NO_SHORTCUT

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QDockWidget *Selection)
    {
        Selection->setWindowTitle(QApplication::translate("Selection", "Selection", 0));
        label_2->setText(QApplication::translate("Selection", "Selection &Type:", 0));
        Selection_type_combo_box->clear();
        Selection_type_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Selection", "Vertex", 0)
         << QApplication::translate("Selection", "Facet", 0)
         << QApplication::translate("Selection", "Edge", 0)
        );
        groupBox_2->setTitle(QString());
        Insertion_radio_button->setText(QApplication::translate("Selection", "Insertion", 0));
        Removal_radio_button->setText(QApplication::translate("Selection", "Removal", 0));
        label->setText(QApplication::translate("Selection", "Brush &size:", 0));
        Select_all_button->setText(QApplication::translate("Selection", "Select &All", 0));
        Clear_button->setText(QApplication::translate("Selection", "&Clear", 0));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("Selection", "Isolated &Component Size:", 0));
        Get_minimum_button->setText(QApplication::translate("Selection", "&Get Minimum", 0));
        Select_isolated_components_button->setText(QApplication::translate("Selection", "Select &Isolated Components Below Threshold", 0));
        groupBox_4->setTitle(QString());
        label_5->setText(QApplication::translate("Selection", "Dilate or erode selection:", 0));
        Dilate_erode_button->setText(QApplication::translate("Selection", "Apply", 0));
        Create_point_set_item_button->setText(QApplication::translate("Selection", "Create Point Set Item from Selected Vertices", 0));
        Create_polyline_item_button->setText(QApplication::translate("Selection", "Create Polyline Item from Selected Edges", 0));
        Create_polyhedron_item_button->setText(QApplication::translate("Selection", "Create Polyhedron Item from Selected Facets", 0));
#ifndef QT_NO_TOOLTIP
        Keep_connected_components_button->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Keep_connected_components_button->setText(QApplication::translate("Selection", "Keep connected components of Selected Facets", 0));
        Erase_selected_facets_button->setText(QApplication::translate("Selection", "Erase Selected Facets from Polyhedron Item", 0));
        Create_selection_item_button->setText(QApplication::translate("Selection", "Create Selection Item", 0));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_WIDGET_H
