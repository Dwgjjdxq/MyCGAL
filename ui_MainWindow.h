/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Viewer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionCatmullClark;
    QAction *actionKernel;
    QAction *actionUnion;
    QAction *actionIntersection;
    QAction *actionDifference;
    QAction *actionFitPlane;
    QAction *actionFitLine;
    QAction *actionEstimateCurvature;
    QAction *actionLoad;
    QAction *actionErase;
    QAction *actionDuplicate;
    QAction *actionSqrt3;
    QAction *actionAntiAliasing;
    QAction *dummyAction;
    QAction *actionConvexHull;
    QAction *actionEraseAll;
    QAction *actionOptions;
    QAction *actionLoop;
    QAction *actionSaveAs;
    QAction *actionSave;
    QAction *actionSaveAll;
    QAction *actionMergeAll;
    QAction *actionMerge;
    QAction *actionSelfIntersection;
    QAction *actionSelectAll;
    QAction *actionSelectNone;
    QAction *actionSelectInvert;
    QAction *actionShowHide;
    QAction *actionSetPolyhedronA;
    QAction *actionSetPolyhedronB;
    QAction *actionInsideOut;
    QAction *actionRemeshing;
    QAction *actionConvexDecomposition;
    QAction *actionMVC;
    QAction *actionDCP;
    QAction *actionExplode;
    QAction *actionToNef;
    QAction *actionToPoly;
    QAction *actionDraw_two_sides;
    QAction *actionRecenterScene;
    QAction *actionSetBackgroundColor;
    QAction *actionMinkowskiSum;
    QAction *action_Look_at;
    QAction *actionSaveSnapshot;
    QAction *actionDumpCamera;
    QAction *action_Copy_camera;
    QAction *action_Paste_camera;
    QAction *actionSelect_all_items;
    QAction *actionLoad_Script;
    QAction *actionPreferences;
    QAction *actionBlend_Loop;
    QAction *actionSimplify;
    QAction *actionCoaser_Level;
    QAction *actionDenser_Level;
    QAction *action_Coaser_Level_b;
    QAction *action_Denser_Level_b;
    QAction *actionCcTest;
    QAction *actionButterfly_Denser;
    QAction *actionShape_Feature_Blend_Loop;
    QAction *actionShapeLoop;
    QAction *actionAdaptive_Blend_Loop;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    Viewer *viewer;
    QDoubleSpinBox *doubleSpinBox;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuOperations;
    QMenu *menuSubdivision;
    QMenu *menu_Boolean_operations;
    QMenu *menuParameterization;
    QMenu *menuPCA;
    QMenu *menuView;
    QMenu *menuDockWindows;
    QMenu *menuCamera;
    QStatusBar *statusbar;
    QDockWidget *sceneDockWidget;
    QWidget *dockWidgetContent;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *addButton;
    QToolButton *removeButton;
    QToolButton *duplicateButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchEdit;
    QTreeView *sceneView;
    QDockWidget *consoleDockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *consoleTextEdit;
    QDockWidget *infoDockWidget;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *infoLabel;
    QLabel *displayLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1041, 808);
        QIcon icon;
        icon.addFile(QStringLiteral(":/cgal/icons/resources/cgal_logo.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionCatmullClark = new QAction(MainWindow);
        actionCatmullClark->setObjectName(QStringLiteral("actionCatmullClark"));
        actionKernel = new QAction(MainWindow);
        actionKernel->setObjectName(QStringLiteral("actionKernel"));
        actionUnion = new QAction(MainWindow);
        actionUnion->setObjectName(QStringLiteral("actionUnion"));
        actionIntersection = new QAction(MainWindow);
        actionIntersection->setObjectName(QStringLiteral("actionIntersection"));
        actionDifference = new QAction(MainWindow);
        actionDifference->setObjectName(QStringLiteral("actionDifference"));
        actionFitPlane = new QAction(MainWindow);
        actionFitPlane->setObjectName(QStringLiteral("actionFitPlane"));
        actionFitLine = new QAction(MainWindow);
        actionFitLine->setObjectName(QStringLiteral("actionFitLine"));
        actionEstimateCurvature = new QAction(MainWindow);
        actionEstimateCurvature->setObjectName(QStringLiteral("actionEstimateCurvature"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/cgal/icons/plus"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad->setIcon(icon1);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QStringLiteral("actionErase"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/cgal/icons/minus"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon2);
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QStringLiteral("actionDuplicate"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/cgal/icons/duplicate"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicate->setIcon(icon3);
        actionSqrt3 = new QAction(MainWindow);
        actionSqrt3->setObjectName(QStringLiteral("actionSqrt3"));
        actionAntiAliasing = new QAction(MainWindow);
        actionAntiAliasing->setObjectName(QStringLiteral("actionAntiAliasing"));
        actionAntiAliasing->setCheckable(true);
        dummyAction = new QAction(MainWindow);
        dummyAction->setObjectName(QStringLiteral("dummyAction"));
        actionConvexHull = new QAction(MainWindow);
        actionConvexHull->setObjectName(QStringLiteral("actionConvexHull"));
        actionEraseAll = new QAction(MainWindow);
        actionEraseAll->setObjectName(QStringLiteral("actionEraseAll"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionLoop = new QAction(MainWindow);
        actionLoop->setObjectName(QStringLiteral("actionLoop"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSaveAll = new QAction(MainWindow);
        actionSaveAll->setObjectName(QStringLiteral("actionSaveAll"));
        actionMergeAll = new QAction(MainWindow);
        actionMergeAll->setObjectName(QStringLiteral("actionMergeAll"));
        actionMerge = new QAction(MainWindow);
        actionMerge->setObjectName(QStringLiteral("actionMerge"));
        actionSelfIntersection = new QAction(MainWindow);
        actionSelfIntersection->setObjectName(QStringLiteral("actionSelfIntersection"));
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        actionSelectNone = new QAction(MainWindow);
        actionSelectNone->setObjectName(QStringLiteral("actionSelectNone"));
        actionSelectInvert = new QAction(MainWindow);
        actionSelectInvert->setObjectName(QStringLiteral("actionSelectInvert"));
        actionShowHide = new QAction(MainWindow);
        actionShowHide->setObjectName(QStringLiteral("actionShowHide"));
        actionSetPolyhedronA = new QAction(MainWindow);
        actionSetPolyhedronA->setObjectName(QStringLiteral("actionSetPolyhedronA"));
        actionSetPolyhedronB = new QAction(MainWindow);
        actionSetPolyhedronB->setObjectName(QStringLiteral("actionSetPolyhedronB"));
        actionInsideOut = new QAction(MainWindow);
        actionInsideOut->setObjectName(QStringLiteral("actionInsideOut"));
        actionRemeshing = new QAction(MainWindow);
        actionRemeshing->setObjectName(QStringLiteral("actionRemeshing"));
        actionConvexDecomposition = new QAction(MainWindow);
        actionConvexDecomposition->setObjectName(QStringLiteral("actionConvexDecomposition"));
        actionMVC = new QAction(MainWindow);
        actionMVC->setObjectName(QStringLiteral("actionMVC"));
        actionDCP = new QAction(MainWindow);
        actionDCP->setObjectName(QStringLiteral("actionDCP"));
        actionExplode = new QAction(MainWindow);
        actionExplode->setObjectName(QStringLiteral("actionExplode"));
        actionToNef = new QAction(MainWindow);
        actionToNef->setObjectName(QStringLiteral("actionToNef"));
        actionToPoly = new QAction(MainWindow);
        actionToPoly->setObjectName(QStringLiteral("actionToPoly"));
        actionDraw_two_sides = new QAction(MainWindow);
        actionDraw_two_sides->setObjectName(QStringLiteral("actionDraw_two_sides"));
        actionDraw_two_sides->setCheckable(true);
        actionRecenterScene = new QAction(MainWindow);
        actionRecenterScene->setObjectName(QStringLiteral("actionRecenterScene"));
        actionSetBackgroundColor = new QAction(MainWindow);
        actionSetBackgroundColor->setObjectName(QStringLiteral("actionSetBackgroundColor"));
        actionMinkowskiSum = new QAction(MainWindow);
        actionMinkowskiSum->setObjectName(QStringLiteral("actionMinkowskiSum"));
        action_Look_at = new QAction(MainWindow);
        action_Look_at->setObjectName(QStringLiteral("action_Look_at"));
        actionSaveSnapshot = new QAction(MainWindow);
        actionSaveSnapshot->setObjectName(QStringLiteral("actionSaveSnapshot"));
        actionDumpCamera = new QAction(MainWindow);
        actionDumpCamera->setObjectName(QStringLiteral("actionDumpCamera"));
        action_Copy_camera = new QAction(MainWindow);
        action_Copy_camera->setObjectName(QStringLiteral("action_Copy_camera"));
        action_Paste_camera = new QAction(MainWindow);
        action_Paste_camera->setObjectName(QStringLiteral("action_Paste_camera"));
        actionSelect_all_items = new QAction(MainWindow);
        actionSelect_all_items->setObjectName(QStringLiteral("actionSelect_all_items"));
        actionLoad_Script = new QAction(MainWindow);
        actionLoad_Script->setObjectName(QStringLiteral("actionLoad_Script"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionBlend_Loop = new QAction(MainWindow);
        actionBlend_Loop->setObjectName(QStringLiteral("actionBlend_Loop"));
        actionSimplify = new QAction(MainWindow);
        actionSimplify->setObjectName(QStringLiteral("actionSimplify"));
        actionCoaser_Level = new QAction(MainWindow);
        actionCoaser_Level->setObjectName(QStringLiteral("actionCoaser_Level"));
        actionDenser_Level = new QAction(MainWindow);
        actionDenser_Level->setObjectName(QStringLiteral("actionDenser_Level"));
        action_Coaser_Level_b = new QAction(MainWindow);
        action_Coaser_Level_b->setObjectName(QStringLiteral("action_Coaser_Level_b"));
        action_Denser_Level_b = new QAction(MainWindow);
        action_Denser_Level_b->setObjectName(QStringLiteral("action_Denser_Level_b"));
        actionCcTest = new QAction(MainWindow);
        actionCcTest->setObjectName(QStringLiteral("actionCcTest"));
        actionButterfly_Denser = new QAction(MainWindow);
        actionButterfly_Denser->setObjectName(QStringLiteral("actionButterfly_Denser"));
        actionShape_Feature_Blend_Loop = new QAction(MainWindow);
        actionShape_Feature_Blend_Loop->setObjectName(QStringLiteral("actionShape_Feature_Blend_Loop"));
        actionShapeLoop = new QAction(MainWindow);
        actionShapeLoop->setObjectName(QStringLiteral("actionShapeLoop"));
        actionAdaptive_Blend_Loop = new QAction(MainWindow);
        actionAdaptive_Blend_Loop->setObjectName(QStringLiteral("actionAdaptive_Blend_Loop"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        viewer = new Viewer(centralwidget);
        viewer->setObjectName(QStringLiteral("viewer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(viewer->sizePolicy().hasHeightForWidth());
        viewer->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(viewer);

        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMaximumSize(QSize(70, 16777215));

        verticalLayout_2->addWidget(doubleSpinBox);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1041, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuOperations = new QMenu(menubar);
        menuOperations->setObjectName(QStringLiteral("menuOperations"));
        menuSubdivision = new QMenu(menuOperations);
        menuSubdivision->setObjectName(QStringLiteral("menuSubdivision"));
        menu_Boolean_operations = new QMenu(menuOperations);
        menu_Boolean_operations->setObjectName(QStringLiteral("menu_Boolean_operations"));
        menuParameterization = new QMenu(menuOperations);
        menuParameterization->setObjectName(QStringLiteral("menuParameterization"));
        menuPCA = new QMenu(menuOperations);
        menuPCA->setObjectName(QStringLiteral("menuPCA"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuDockWindows = new QMenu(menuView);
        menuDockWindows->setObjectName(QStringLiteral("menuDockWindows"));
        menuCamera = new QMenu(menuView);
        menuCamera->setObjectName(QStringLiteral("menuCamera"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        sceneDockWidget = new QDockWidget(MainWindow);
        sceneDockWidget->setObjectName(QStringLiteral("sceneDockWidget"));
        sceneDockWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dockWidgetContent = new QWidget();
        dockWidgetContent->setObjectName(QStringLiteral("dockWidgetContent"));
        gridLayout_2 = new QGridLayout(dockWidgetContent);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addButton = new QToolButton(dockWidgetContent);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setIcon(icon1);

        horizontalLayout->addWidget(addButton);

        removeButton = new QToolButton(dockWidgetContent);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setIcon(icon2);

        horizontalLayout->addWidget(removeButton);

        duplicateButton = new QToolButton(dockWidgetContent);
        duplicateButton->setObjectName(QStringLiteral("duplicateButton"));
        duplicateButton->setIcon(icon3);

        horizontalLayout->addWidget(duplicateButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchEdit = new QLineEdit(dockWidgetContent);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        horizontalLayout->addWidget(searchEdit);


        verticalLayout->addLayout(horizontalLayout);

        sceneView = new QTreeView(dockWidgetContent);
        sceneView->setObjectName(QStringLiteral("sceneView"));
        sceneView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        sceneView->setAlternatingRowColors(true);
        sceneView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        sceneView->setIndentation(0);

        verticalLayout->addWidget(sceneView);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        sceneDockWidget->setWidget(dockWidgetContent);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), sceneDockWidget);
        consoleDockWidget = new QDockWidget(MainWindow);
        consoleDockWidget->setObjectName(QStringLiteral("consoleDockWidget"));
        consoleDockWidget->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        consoleTextEdit = new QTextEdit(dockWidgetContents);
        consoleTextEdit->setObjectName(QStringLiteral("consoleTextEdit"));
        consoleTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(consoleTextEdit);

        consoleDockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), consoleDockWidget);
        infoDockWidget = new QDockWidget(MainWindow);
        infoDockWidget->setObjectName(QStringLiteral("infoDockWidget"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollArea = new QScrollArea(dockWidgetContents_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(350, 0));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 576, 176));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        infoLabel = new QLabel(scrollAreaWidgetContents);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        sizePolicy.setHeightForWidth(infoLabel->sizePolicy().hasHeightForWidth());
        infoLabel->setSizePolicy(sizePolicy);
        infoLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        infoLabel->setLineWidth(0);
        infoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        infoLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(infoLabel, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        displayLabel = new QLabel(dockWidgetContents_2);
        displayLabel->setObjectName(QStringLiteral("displayLabel"));

        verticalLayout_4->addWidget(displayLabel);


        horizontalLayout_2->addLayout(verticalLayout_4);

        infoDockWidget->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), infoDockWidget);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuOperations->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionErase);
        menuFile->addAction(actionEraseAll);
        menuFile->addAction(actionDuplicate);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSaveSnapshot);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Script);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionShowHide);
        menuEdit->addAction(actionSetPolyhedronA);
        menuEdit->addAction(actionSetPolyhedronB);
        menuEdit->addAction(actionSelect_all_items);
        menuEdit->addAction(actionPreferences);
        menuOperations->addAction(menuPCA->menuAction());
        menuOperations->addAction(actionEstimateCurvature);
        menuOperations->addAction(actionSelfIntersection);
        menuOperations->addAction(actionConvexHull);
        menuOperations->addAction(actionKernel);
        menuOperations->addAction(menuSubdivision->menuAction());
        menuOperations->addAction(actionSimplify);
        menuOperations->addAction(actionRemeshing);
        menuOperations->addAction(actionConvexDecomposition);
        menuOperations->addAction(menu_Boolean_operations->menuAction());
        menuOperations->addAction(menuParameterization->menuAction());
        menuOperations->addAction(actionInsideOut);
        menuSubdivision->addAction(actionLoop);
        menuSubdivision->addAction(actionShapeLoop);
        menuSubdivision->addAction(actionCatmullClark);
        menuSubdivision->addAction(actionSqrt3);
        menuSubdivision->addAction(actionBlend_Loop);
        menuSubdivision->addAction(actionShape_Feature_Blend_Loop);
        menuSubdivision->addAction(actionCoaser_Level);
        menuSubdivision->addAction(actionDenser_Level);
        menuSubdivision->addAction(action_Coaser_Level_b);
        menuSubdivision->addAction(action_Denser_Level_b);
        menuSubdivision->addAction(actionCcTest);
        menuSubdivision->addAction(actionButterfly_Denser);
        menuSubdivision->addAction(actionAdaptive_Blend_Loop);
        menu_Boolean_operations->addAction(actionToNef);
        menu_Boolean_operations->addAction(actionToPoly);
        menu_Boolean_operations->addAction(actionUnion);
        menu_Boolean_operations->addAction(actionIntersection);
        menu_Boolean_operations->addAction(actionDifference);
        menu_Boolean_operations->addSeparator();
        menu_Boolean_operations->addAction(actionMinkowskiSum);
        menuParameterization->addAction(actionMVC);
        menuParameterization->addAction(actionDCP);
        menuPCA->addAction(actionFitLine);
        menuPCA->addAction(actionFitPlane);
        menuView->addAction(actionRecenterScene);
        menuView->addAction(action_Look_at);
        menuView->addAction(actionAntiAliasing);
        menuView->addAction(actionDraw_two_sides);
        menuView->addAction(actionSetBackgroundColor);
        menuView->addAction(menuDockWindows->menuAction());
        menuView->addAction(menuCamera->menuAction());
        menuDockWindows->addAction(dummyAction);
        menuCamera->addAction(actionDumpCamera);
        menuCamera->addAction(action_Copy_camera);
        menuCamera->addAction(action_Paste_camera);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CGAL Polyhedron demo", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionCatmullClark->setText(QApplication::translate("MainWindow", "&Catmull-Clark", 0));
        actionKernel->setText(QApplication::translate("MainWindow", "&Kernel", 0));
        actionUnion->setText(QApplication::translate("MainWindow", "&Union (A/B)", 0));
        actionUnion->setShortcut(QApplication::translate("MainWindow", "Ctrl+O, U", 0));
        actionIntersection->setText(QApplication::translate("MainWindow", "&Intersection (A/B)", 0));
        actionIntersection->setShortcut(QApplication::translate("MainWindow", "Ctrl+O, I", 0));
        actionDifference->setText(QApplication::translate("MainWindow", "&Difference (A/B)", 0));
        actionDifference->setShortcut(QApplication::translate("MainWindow", "Ctrl+O, D", 0));
        actionFitPlane->setText(QApplication::translate("MainWindow", "Fit &plane", 0));
        actionFitLine->setText(QApplication::translate("MainWindow", "Fit &line", 0));
        actionEstimateCurvature->setText(QApplication::translate("MainWindow", "&Curvature estimation", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "&Load...", 0));
        actionLoad->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        actionErase->setText(QApplication::translate("MainWindow", "&Erase", 0));
        actionErase->setShortcut(QApplication::translate("MainWindow", "Del", 0));
        actionDuplicate->setText(QApplication::translate("MainWindow", "&Duplicate", 0));
        actionDuplicate->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
        actionSqrt3->setText(QApplication::translate("MainWindow", "&Sqrt3", 0));
        actionAntiAliasing->setText(QApplication::translate("MainWindow", "&Antialiasing", 0));
        dummyAction->setText(QApplication::translate("MainWindow", "n/a", 0));
        actionConvexHull->setText(QApplication::translate("MainWindow", "&Convex hull", 0));
        actionEraseAll->setText(QApplication::translate("MainWindow", "&Erase all", 0));
        actionOptions->setText(QApplication::translate("MainWindow", "&Options...", 0));
        actionLoop->setText(QApplication::translate("MainWindow", "&Loop", 0));
        actionLoop->setShortcut(QApplication::translate("MainWindow", "Ctrl+1", 0));
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &as...", 0));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0));
        actionSaveAll->setText(QApplication::translate("MainWindow", "Save a&ll", 0));
        actionMergeAll->setText(QApplication::translate("MainWindow", "Mer&ge all", 0));
        actionMerge->setText(QApplication::translate("MainWindow", "&Merge", 0));
        actionSelfIntersection->setText(QApplication::translate("MainWindow", "Self-&intersection", 0));
        actionSelectAll->setText(QApplication::translate("MainWindow", "Select &all", 0));
        actionSelectNone->setText(QApplication::translate("MainWindow", "Select &none", 0));
        actionSelectInvert->setText(QApplication::translate("MainWindow", "&Invert selection", 0));
        actionShowHide->setText(QApplication::translate("MainWindow", "Show/Hide", 0));
        actionShowHide->setShortcut(QApplication::translate("MainWindow", "Ctrl+Space", 0));
        actionSetPolyhedronA->setText(QApplication::translate("MainWindow", "Set polyhedron A", 0));
        actionSetPolyhedronB->setText(QApplication::translate("MainWindow", "Set polyhedron B", 0));
        actionInsideOut->setText(QApplication::translate("MainWindow", "&Inside-out", 0));
        actionRemeshing->setText(QApplication::translate("MainWindow", "&Remeshing", 0));
        actionConvexDecomposition->setText(QApplication::translate("MainWindow", "Convex Decomposition", 0));
        actionMVC->setText(QApplication::translate("MainWindow", "Mean &value coordinates", 0));
        actionDCP->setText(QApplication::translate("MainWindow", "Discrete &conformal maps", 0));
        actionExplode->setText(QApplication::translate("MainWindow", "Explode", 0));
        actionToNef->setText(QApplication::translate("MainWindow", "Convert to nef polyhedron", 0));
        actionToPoly->setText(QApplication::translate("MainWindow", "Convert to normal polyhedron", 0));
        actionDraw_two_sides->setText(QApplication::translate("MainWindow", "Draw &two sides", 0));
        actionDraw_two_sides->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0));
        actionRecenterScene->setText(QApplication::translate("MainWindow", "Re&center scene", 0));
        actionRecenterScene->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionSetBackgroundColor->setText(QApplication::translate("MainWindow", "Change &background color...", 0));
        actionMinkowskiSum->setText(QApplication::translate("MainWindow", "&Minkowski sum (A/B)", 0));
        actionMinkowskiSum->setShortcut(QApplication::translate("MainWindow", "Ctrl+O, M", 0));
        action_Look_at->setText(QApplication::translate("MainWindow", "&Look at...", 0));
        actionSaveSnapshot->setText(QApplication::translate("MainWindow", "Save snapshot", 0));
        actionDumpCamera->setText(QApplication::translate("MainWindow", "&Dump camera coordinates", 0));
        action_Copy_camera->setText(QApplication::translate("MainWindow", "&Copy camera", 0));
        action_Paste_camera->setText(QApplication::translate("MainWindow", "&Paste camera", 0));
        actionSelect_all_items->setText(QApplication::translate("MainWindow", "Select all items", 0));
        actionSelect_all_items->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionLoad_Script->setText(QApplication::translate("MainWindow", "Load &script", 0));
        actionPreferences->setText(QApplication::translate("MainWindow", "&Preferences", 0));
        actionBlend_Loop->setText(QApplication::translate("MainWindow", "&Blend Loop", 0));
        actionBlend_Loop->setShortcut(QApplication::translate("MainWindow", "Ctrl+2", 0));
        actionSimplify->setText(QApplication::translate("MainWindow", "&Simplification", 0));
        actionCoaser_Level->setText(QApplication::translate("MainWindow", "&Coaser Level", 0));
        actionCoaser_Level->setShortcut(QApplication::translate("MainWindow", "Ctrl+3", 0));
        actionDenser_Level->setText(QApplication::translate("MainWindow", "&Denser Level", 0));
        actionDenser_Level->setShortcut(QApplication::translate("MainWindow", "Ctrl+4", 0));
        action_Coaser_Level_b->setText(QApplication::translate("MainWindow", "&Coaser Level(b)", 0));
        action_Coaser_Level_b->setShortcut(QApplication::translate("MainWindow", "Ctrl+5", 0));
        action_Denser_Level_b->setText(QApplication::translate("MainWindow", "&Denser Level(b)", 0));
        action_Denser_Level_b->setShortcut(QApplication::translate("MainWindow", "Ctrl+6", 0));
        actionCcTest->setText(QApplication::translate("MainWindow", "&ccTest", 0));
        actionCcTest->setShortcut(QApplication::translate("MainWindow", "Ctrl+7", 0));
        actionButterfly_Denser->setText(QApplication::translate("MainWindow", "Butterfly Denser", 0));
        actionButterfly_Denser->setShortcut(QApplication::translate("MainWindow", "Ctrl+8", 0));
        actionShape_Feature_Blend_Loop->setText(QApplication::translate("MainWindow", "Shape Feature Blend Loop", 0));
        actionShape_Feature_Blend_Loop->setShortcut(QApplication::translate("MainWindow", "Ctrl+9", 0));
        actionShapeLoop->setText(QApplication::translate("MainWindow", "ShapeLoop", 0));
        actionShapeLoop->setShortcut(QApplication::translate("MainWindow", "Ctrl+0", 0));
        actionAdaptive_Blend_Loop->setText(QApplication::translate("MainWindow", "Adaptive Blend Loop", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0));
        menuOperations->setTitle(QApplication::translate("MainWindow", "&Operations", 0));
        menuSubdivision->setTitle(QApplication::translate("MainWindow", "&Subdivision", 0));
        menu_Boolean_operations->setTitle(QApplication::translate("MainWindow", "&Boolean operations", 0));
        menuParameterization->setTitle(QApplication::translate("MainWindow", "Parameterization", 0));
        menuPCA->setTitle(QApplication::translate("MainWindow", "PCA", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", 0));
        menuDockWindows->setTitle(QApplication::translate("MainWindow", "&Dock windows", 0));
        menuCamera->setTitle(QApplication::translate("MainWindow", "Ca&mera", 0));
        sceneDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Geometric Objects", 0));
        addButton->setText(QApplication::translate("MainWindow", "+", 0));
        removeButton->setText(QApplication::translate("MainWindow", "-", 0));
        duplicateButton->setText(QApplication::translate("MainWindow", "...", 0));
        searchEdit->setPlaceholderText(QApplication::translate("MainWindow", "Quick filter... <Alt+Q>", 0));
        consoleDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Console", 0));
        infoDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Infos", 0));
        displayLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
