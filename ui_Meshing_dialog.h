/********************************************************************************
** Form generated from reading UI file 'Meshing_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHING_DIALOG_H
#define UI_MESHING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Meshing_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *objectName;
    QLabel *objectNameSize;
    QGroupBox *sharpFeaturesGroup;
    QGridLayout *gridLayout;
    QCheckBox *protect;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *approxLabel;
    QDoubleSpinBox *approx;
    QCheckBox *noApprox;
    QLabel *sizingLabel;
    QDoubleSpinBox *facetSizing;
    QCheckBox *noFacetSizing;
    QLabel *angleLabel;
    QDoubleSpinBox *facetAngle;
    QCheckBox *noAngle;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QDoubleSpinBox *tetSizing;
    QLabel *label_2;
    QDoubleSpinBox *tetShape;
    QCheckBox *noTetShape;
    QCheckBox *noTetSizing;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Meshing_dialog)
    {
        if (Meshing_dialog->objectName().isEmpty())
            Meshing_dialog->setObjectName(QStringLiteral("Meshing_dialog"));
        Meshing_dialog->setEnabled(true);
        Meshing_dialog->resize(414, 355);
        verticalLayout = new QVBoxLayout(Meshing_dialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        objectName = new QLabel(Meshing_dialog);
        objectName->setObjectName(QStringLiteral("objectName"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        objectName->setFont(font);

        verticalLayout->addWidget(objectName);

        objectNameSize = new QLabel(Meshing_dialog);
        objectNameSize->setObjectName(QStringLiteral("objectNameSize"));

        verticalLayout->addWidget(objectNameSize);

        sharpFeaturesGroup = new QGroupBox(Meshing_dialog);
        sharpFeaturesGroup->setObjectName(QStringLiteral("sharpFeaturesGroup"));
        sharpFeaturesGroup->setLayoutDirection(Qt::RightToLeft);
        gridLayout = new QGridLayout(sharpFeaturesGroup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        protect = new QCheckBox(sharpFeaturesGroup);
        protect->setObjectName(QStringLiteral("protect"));
        protect->setChecked(true);

        gridLayout->addWidget(protect, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 2);

        verticalLayout->addWidget(sharpFeaturesGroup);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox = new QGroupBox(Meshing_dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        approxLabel = new QLabel(groupBox);
        approxLabel->setObjectName(QStringLiteral("approxLabel"));
        approxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(approxLabel, 0, 0, 1, 1);

        approx = new QDoubleSpinBox(groupBox);
        approx->setObjectName(QStringLiteral("approx"));
        approx->setMinimumSize(QSize(110, 0));

        gridLayout_2->addWidget(approx, 0, 1, 1, 1);

        noApprox = new QCheckBox(groupBox);
        noApprox->setObjectName(QStringLiteral("noApprox"));
        noApprox->setChecked(true);

        gridLayout_2->addWidget(noApprox, 0, 2, 1, 1);

        sizingLabel = new QLabel(groupBox);
        sizingLabel->setObjectName(QStringLiteral("sizingLabel"));
        sizingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(sizingLabel, 1, 0, 1, 1);

        facetSizing = new QDoubleSpinBox(groupBox);
        facetSizing->setObjectName(QStringLiteral("facetSizing"));
        facetSizing->setMinimumSize(QSize(110, 0));
        facetSizing->setDecimals(4);

        gridLayout_2->addWidget(facetSizing, 1, 1, 1, 1);

        noFacetSizing = new QCheckBox(groupBox);
        noFacetSizing->setObjectName(QStringLiteral("noFacetSizing"));
        noFacetSizing->setChecked(true);

        gridLayout_2->addWidget(noFacetSizing, 1, 2, 1, 1);

        angleLabel = new QLabel(groupBox);
        angleLabel->setObjectName(QStringLiteral("angleLabel"));
        angleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(angleLabel, 2, 0, 1, 1);

        facetAngle = new QDoubleSpinBox(groupBox);
        facetAngle->setObjectName(QStringLiteral("facetAngle"));
        facetAngle->setMinimumSize(QSize(110, 0));
        facetAngle->setMinimum(1);
        facetAngle->setMaximum(30);
        facetAngle->setValue(25);

        gridLayout_2->addWidget(facetAngle, 2, 1, 1, 1);

        noAngle = new QCheckBox(groupBox);
        noAngle->setObjectName(QStringLiteral("noAngle"));
        noAngle->setChecked(true);

        gridLayout_2->addWidget(noAngle, 2, 2, 1, 1);

        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Meshing_dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        tetSizing = new QDoubleSpinBox(groupBox_2);
        tetSizing->setObjectName(QStringLiteral("tetSizing"));
        tetSizing->setMinimumSize(QSize(110, 0));
        tetSizing->setDecimals(4);

        gridLayout_3->addWidget(tetSizing, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        tetShape = new QDoubleSpinBox(groupBox_2);
        tetShape->setObjectName(QStringLiteral("tetShape"));
        tetShape->setMinimumSize(QSize(110, 0));
        tetShape->setMinimum(1);
        tetShape->setValue(3);

        gridLayout_3->addWidget(tetShape, 1, 1, 1, 1);

        noTetShape = new QCheckBox(groupBox_2);
        noTetShape->setObjectName(QStringLiteral("noTetShape"));
        noTetShape->setChecked(true);

        gridLayout_3->addWidget(noTetShape, 1, 2, 1, 1);

        noTetSizing = new QCheckBox(groupBox_2);
        noTetSizing->setObjectName(QStringLiteral("noTetSizing"));
        noTetSizing->setChecked(true);

        gridLayout_3->addWidget(noTetSizing, 0, 2, 1, 1);

        gridLayout_3->setColumnStretch(0, 2);
        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(Meshing_dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        approxLabel->setBuddy(approx);
        sizingLabel->setBuddy(facetSizing);
        angleLabel->setBuddy(facetAngle);
        label->setBuddy(tetSizing);
        label_2->setBuddy(tetShape);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(approx, noApprox);
        QWidget::setTabOrder(noApprox, facetSizing);
        QWidget::setTabOrder(facetSizing, noFacetSizing);
        QWidget::setTabOrder(noFacetSizing, facetAngle);
        QWidget::setTabOrder(facetAngle, noAngle);
        QWidget::setTabOrder(noAngle, tetSizing);
        QWidget::setTabOrder(tetSizing, noTetSizing);
        QWidget::setTabOrder(noTetSizing, tetShape);
        QWidget::setTabOrder(tetShape, noTetShape);
        QWidget::setTabOrder(noTetShape, buttonBox);

        retranslateUi(Meshing_dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Meshing_dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Meshing_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Meshing_dialog);
    } // setupUi

    void retranslateUi(QDialog *Meshing_dialog)
    {
        Meshing_dialog->setWindowTitle(QApplication::translate("Meshing_dialog", "Meshing criteria", 0));
        objectName->setText(QApplication::translate("Meshing_dialog", "NO OBJECT", 0));
        objectNameSize->setText(QApplication::translate("Meshing_dialog", "No size", 0));
        sharpFeaturesGroup->setTitle(QApplication::translate("Meshing_dialog", "Sharp features", 0));
        protect->setText(QApplication::translate("Meshing_dialog", "&Protect sharp edges", 0));
        groupBox->setTitle(QApplication::translate("Meshing_dialog", "Surface", 0));
        approxLabel->setText(QApplication::translate("Meshing_dialog", "Approximation &error", 0));
#ifndef QT_NO_TOOLTIP
        noApprox->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", 0));
#endif // QT_NO_TOOLTIP
        noApprox->setText(QString());
        sizingLabel->setText(QApplication::translate("Meshing_dialog", "&Facet max. size", 0));
#ifndef QT_NO_TOOLTIP
        noFacetSizing->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", 0));
#endif // QT_NO_TOOLTIP
        noFacetSizing->setText(QString());
        angleLabel->setText(QApplication::translate("Meshing_dialog", "Facet min. &angle (deg)", 0));
#ifndef QT_NO_TOOLTIP
        noAngle->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", 0));
#endif // QT_NO_TOOLTIP
        noAngle->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Meshing_dialog", "Volume", 0));
        label->setText(QApplication::translate("Meshing_dialog", "&Tetrahedron max. size", 0));
        label_2->setText(QApplication::translate("Meshing_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande';\">Tetrahedron &amp;shape</span><span style=\" font-family:'Lucida Grande'; font-size:13pt;\"> </span><span style=\" font-family:'Lucida Grande'; font-style:italic;\">(radius-edge ratio)</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        noTetShape->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", 0));
#endif // QT_NO_TOOLTIP
        noTetShape->setText(QString());
#ifndef QT_NO_TOOLTIP
        noTetSizing->setToolTip(QApplication::translate("Meshing_dialog", "Enable/Disable parameter", 0));
#endif // QT_NO_TOOLTIP
        noTetSizing->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Meshing_dialog: public Ui_Meshing_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHING_DIALOG_H
