/********************************************************************************
** Form generated from reading UI file 'Camera_positions_list.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_POSITIONS_LIST_H
#define UI_CAMERA_POSITIONS_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera_positions_list
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *openButton;
    QToolButton *saveButton;
    QToolButton *plusButton;
    QToolButton *minusButton;
    QToolButton *clearButton;
    QToolButton *upButton;
    QToolButton *downButton;
    QSpacerItem *horizontalSpacer;
    QListView *listView;

    void setupUi(QDockWidget *Camera_positions_list)
    {
        if (Camera_positions_list->objectName().isEmpty())
            Camera_positions_list->setObjectName(QStringLiteral("Camera_positions_list"));
        Camera_positions_list->resize(400, 300);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openButton = new QToolButton(dockWidgetContents);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout->addWidget(openButton);

        saveButton = new QToolButton(dockWidgetContents);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);

        plusButton = new QToolButton(dockWidgetContents);
        plusButton->setObjectName(QStringLiteral("plusButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/cgal/icons/plus"), QSize(), QIcon::Normal, QIcon::Off);
        plusButton->setIcon(icon);

        horizontalLayout->addWidget(plusButton);

        minusButton = new QToolButton(dockWidgetContents);
        minusButton->setObjectName(QStringLiteral("minusButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cgal/icons/minus"), QSize(), QIcon::Normal, QIcon::Off);
        minusButton->setIcon(icon1);

        horizontalLayout->addWidget(minusButton);

        clearButton = new QToolButton(dockWidgetContents);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        upButton = new QToolButton(dockWidgetContents);
        upButton->setObjectName(QStringLiteral("upButton"));

        horizontalLayout->addWidget(upButton);

        downButton = new QToolButton(dockWidgetContents);
        downButton->setObjectName(QStringLiteral("downButton"));

        horizontalLayout->addWidget(downButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        listView = new QListView(dockWidgetContents);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        Camera_positions_list->setWidget(dockWidgetContents);

        retranslateUi(Camera_positions_list);

        QMetaObject::connectSlotsByName(Camera_positions_list);
    } // setupUi

    void retranslateUi(QDockWidget *Camera_positions_list)
    {
        Camera_positions_list->setWindowTitle(QApplication::translate("Camera_positions_list", "Camera positions", 0));
        openButton->setText(QApplication::translate("Camera_positions_list", "&Open list", 0));
        openButton->setShortcut(QApplication::translate("Camera_positions_list", "Ctrl+O", 0));
        saveButton->setText(QApplication::translate("Camera_positions_list", "&Save list", 0));
        saveButton->setShortcut(QApplication::translate("Camera_positions_list", "Ctrl+S", 0));
        plusButton->setText(QApplication::translate("Camera_positions_list", "...", 0));
        minusButton->setText(QApplication::translate("Camera_positions_list", "...", 0));
        clearButton->setText(QApplication::translate("Camera_positions_list", "&Clear", 0));
        upButton->setText(QApplication::translate("Camera_positions_list", "&Up", 0));
        upButton->setShortcut(QApplication::translate("Camera_positions_list", "Ctrl+U", 0));
        downButton->setText(QApplication::translate("Camera_positions_list", "&Down", 0));
        downButton->setShortcut(QApplication::translate("Camera_positions_list", "Ctrl+D", 0));
    } // retranslateUi

};

namespace Ui {
    class Camera_positions_list: public Ui_Camera_positions_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_POSITIONS_LIST_H
