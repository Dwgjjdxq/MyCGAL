/********************************************************************************
** Form generated from reading UI file 'Point_set_selection_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINT_SET_SELECTION_WIDGET_H
#define UI_POINT_SET_SELECTION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PointSetSelection
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *Selection_tool_combo_box;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_4;
    QComboBox *Selection_mode_combo_box;
    QHBoxLayout *horizontalLayout;
    QPushButton *Select_all_button;
    QPushButton *Clear_button;
    QPushButton *Invert_selection_button;
    QPushButton *Erase_selected_points_button;
    QPushButton *Create_point_set_item_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *PointSetSelection)
    {
        if (PointSetSelection->objectName().isEmpty())
            PointSetSelection->setObjectName(QStringLiteral("PointSetSelection"));
        PointSetSelection->resize(369, 239);
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

        Selection_tool_combo_box = new QComboBox(dockWidgetContents);
        Selection_tool_combo_box->setObjectName(QStringLiteral("Selection_tool_combo_box"));

        horizontalLayout_4->addWidget(Selection_tool_combo_box);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_14->addWidget(label_4);

        Selection_mode_combo_box = new QComboBox(dockWidgetContents);
        Selection_mode_combo_box->setObjectName(QStringLiteral("Selection_mode_combo_box"));

        horizontalLayout_14->addWidget(Selection_mode_combo_box);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Select_all_button = new QPushButton(dockWidgetContents);
        Select_all_button->setObjectName(QStringLiteral("Select_all_button"));

        horizontalLayout->addWidget(Select_all_button);

        Clear_button = new QPushButton(dockWidgetContents);
        Clear_button->setObjectName(QStringLiteral("Clear_button"));

        horizontalLayout->addWidget(Clear_button);


        verticalLayout_5->addLayout(horizontalLayout);

        Invert_selection_button = new QPushButton(dockWidgetContents);
        Invert_selection_button->setObjectName(QStringLiteral("Invert_selection_button"));

        verticalLayout_5->addWidget(Invert_selection_button);

        Erase_selected_points_button = new QPushButton(dockWidgetContents);
        Erase_selected_points_button->setObjectName(QStringLiteral("Erase_selected_points_button"));

        verticalLayout_5->addWidget(Erase_selected_points_button);

        Create_point_set_item_button = new QPushButton(dockWidgetContents);
        Create_point_set_item_button->setObjectName(QStringLiteral("Create_point_set_item_button"));

        verticalLayout_5->addWidget(Create_point_set_item_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        PointSetSelection->setWidget(dockWidgetContents);
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(Selection_tool_combo_box);
        label_4->setBuddy(Selection_mode_combo_box);
#endif // QT_NO_SHORTCUT

        retranslateUi(PointSetSelection);

        QMetaObject::connectSlotsByName(PointSetSelection);
    } // setupUi

    void retranslateUi(QDockWidget *PointSetSelection)
    {
        PointSetSelection->setWindowTitle(QApplication::translate("PointSetSelection", "Point Set Selection", 0));
        label_2->setText(QApplication::translate("PointSetSelection", "Selection &Tool:", 0));
        Selection_tool_combo_box->clear();
        Selection_tool_combo_box->insertItems(0, QStringList()
         << QApplication::translate("PointSetSelection", "Rectangle", 0)
         << QApplication::translate("PointSetSelection", "Free form", 0)
        );
        label_4->setText(QApplication::translate("PointSetSelection", "Selection &Mode:", 0));
        Selection_mode_combo_box->clear();
        Selection_mode_combo_box->insertItems(0, QStringList()
         << QApplication::translate("PointSetSelection", "New Selection", 0)
         << QApplication::translate("PointSetSelection", "Union", 0)
         << QApplication::translate("PointSetSelection", "Intersection", 0)
         << QApplication::translate("PointSetSelection", "Difference", 0)
        );
        Select_all_button->setText(QApplication::translate("PointSetSelection", "Select &All", 0));
        Clear_button->setText(QApplication::translate("PointSetSelection", "&Clear", 0));
        Invert_selection_button->setText(QApplication::translate("PointSetSelection", "&Invert Selection", 0));
        Erase_selected_points_button->setText(QApplication::translate("PointSetSelection", "&Erase Selected Points", 0));
        Create_point_set_item_button->setText(QApplication::translate("PointSetSelection", "Create Point Set Item from Selected Points", 0));
    } // retranslateUi

};

namespace Ui {
    class PointSetSelection: public Ui_PointSetSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINT_SET_SELECTION_WIDGET_H
