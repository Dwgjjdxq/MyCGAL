/********************************************************************************
** Form generated from reading UI file 'Shortest_path_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTEST_PATH_WIDGET_H
#define UI_SHORTEST_PATH_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shortest_path
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *Selection_type_combo_box;
    QComboBox *Primitives_type_combo_box;

    void setupUi(QDockWidget *Shortest_path)
    {
        if (Shortest_path->objectName().isEmpty())
            Shortest_path->setObjectName(QStringLiteral("Shortest_path"));
        Shortest_path->resize(334, 402);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout_4 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        Selection_type_combo_box = new QComboBox(dockWidgetContents);
        Selection_type_combo_box->setObjectName(QStringLiteral("Selection_type_combo_box"));

        horizontalLayout_4->addWidget(Selection_type_combo_box);

        Primitives_type_combo_box = new QComboBox(dockWidgetContents);
        Primitives_type_combo_box->setObjectName(QStringLiteral("Primitives_type_combo_box"));

        horizontalLayout_4->addWidget(Primitives_type_combo_box);

        Shortest_path->setWidget(dockWidgetContents);
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(Selection_type_combo_box);
#endif // QT_NO_SHORTCUT

        retranslateUi(Shortest_path);

        QMetaObject::connectSlotsByName(Shortest_path);
    } // setupUi

    void retranslateUi(QDockWidget *Shortest_path)
    {
        Shortest_path->setWindowTitle(QApplication::translate("Shortest_path", "Shortest_path", 0));
        label_2->setText(QApplication::translate("Shortest_path", "Shortest_path &Type:", 0));
        Selection_type_combo_box->clear();
        Selection_type_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Shortest_path", "Insertion", 0)
         << QApplication::translate("Shortest_path", "Removal", 0)
         << QApplication::translate("Shortest_path", "Compute Path", 0)
        );
        Primitives_type_combo_box->clear();
        Primitives_type_combo_box->insertItems(0, QStringList()
         << QApplication::translate("Shortest_path", "Vertex", 0)
         << QApplication::translate("Shortest_path", "Edge", 0)
         << QApplication::translate("Shortest_path", "Face", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Shortest_path: public Ui_Shortest_path {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTEST_PATH_WIDGET_H
