/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *folderPathLabel;
    QPushButton *selectFolderButton;
    QComboBox *ImageComboBox;
    QPushButton *sortButton;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *imageNamesList;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *classiferPathLabel;
    QPushButton *selectFileButton;
    QComboBox *classComboBox;
    QPushButton *sortButton2;
    QListWidget *classifierList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addClassButton;
    QPushButton *removeClassButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QListWidget *shapesList;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QPushButton *shapeDrawButton;
    QPushButton *resizeButton;
    QPushButton *copyPasteButton;
    QPushButton *saveButton;
    QPushButton *shapeUnassignButton;
    QPushButton *toggleClassifierButton;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QLabel *imageNameLabel;
    QSpacerItem *verticalSpacer_7;
    QGraphicsView *graphicsView;
    QPushButton *zoomOutButton;
    QPushButton *zoomInButton;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(1346, 1051);
        View->setAutoFillBackground(true);
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        folderPathLabel = new QLabel(layoutWidget);
        folderPathLabel->setObjectName(QString::fromUtf8("folderPathLabel"));
        folderPathLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(folderPathLabel->sizePolicy().hasHeightForWidth());
        folderPathLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(folderPathLabel);

        selectFolderButton = new QPushButton(layoutWidget);
        selectFolderButton->setObjectName(QString::fromUtf8("selectFolderButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectFolderButton->sizePolicy().hasHeightForWidth());
        selectFolderButton->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(selectFolderButton);

        ImageComboBox = new QComboBox(layoutWidget);
        ImageComboBox->addItem(QString());
        ImageComboBox->addItem(QString());
        ImageComboBox->addItem(QString());
        ImageComboBox->addItem(QString());
        ImageComboBox->setObjectName(QString::fromUtf8("ImageComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ImageComboBox->sizePolicy().hasHeightForWidth());
        ImageComboBox->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(ImageComboBox);

        sortButton = new QPushButton(layoutWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));

        horizontalLayout->addWidget(sortButton);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        imageNamesList = new QListWidget(layoutWidget);
        imageNamesList->setObjectName(QString::fromUtf8("imageNamesList"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(imageNamesList->sizePolicy().hasHeightForWidth());
        imageNamesList->setSizePolicy(sizePolicy5);

        verticalLayout->addWidget(imageNamesList);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_6);

        classiferPathLabel = new QLabel(layoutWidget);
        classiferPathLabel->setObjectName(QString::fromUtf8("classiferPathLabel"));
        classiferPathLabel->setEnabled(true);
        sizePolicy1.setHeightForWidth(classiferPathLabel->sizePolicy().hasHeightForWidth());
        classiferPathLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(classiferPathLabel);

        selectFileButton = new QPushButton(layoutWidget);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));
        sizePolicy2.setHeightForWidth(selectFileButton->sizePolicy().hasHeightForWidth());
        selectFileButton->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(selectFileButton);

        classComboBox = new QComboBox(layoutWidget);
        classComboBox->addItem(QString());
        classComboBox->addItem(QString());
        classComboBox->setObjectName(QString::fromUtf8("classComboBox"));
        sizePolicy3.setHeightForWidth(classComboBox->sizePolicy().hasHeightForWidth());
        classComboBox->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(classComboBox);

        sortButton2 = new QPushButton(layoutWidget);
        sortButton2->setObjectName(QString::fromUtf8("sortButton2"));

        horizontalLayout_4->addWidget(sortButton2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        classifierList = new QListWidget(layoutWidget);
        classifierList->setObjectName(QString::fromUtf8("classifierList"));
        sizePolicy5.setHeightForWidth(classifierList->sizePolicy().hasHeightForWidth());
        classifierList->setSizePolicy(sizePolicy5);

        verticalLayout_2->addWidget(classifierList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addClassButton = new QPushButton(layoutWidget);
        addClassButton->setObjectName(QString::fromUtf8("addClassButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(addClassButton->sizePolicy().hasHeightForWidth());
        addClassButton->setSizePolicy(sizePolicy6);

        horizontalLayout_2->addWidget(addClassButton);

        removeClassButton = new QPushButton(layoutWidget);
        removeClassButton->setObjectName(QString::fromUtf8("removeClassButton"));
        sizePolicy6.setHeightForWidth(removeClassButton->sizePolicy().hasHeightForWidth());
        removeClassButton->setSizePolicy(sizePolicy6);

        horizontalLayout_2->addWidget(removeClassButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        shapesList = new QListWidget(layoutWidget);
        new QListWidgetItem(shapesList);
        new QListWidgetItem(shapesList);
        new QListWidgetItem(shapesList);
        new QListWidgetItem(shapesList);
        new QListWidgetItem(shapesList);
        new QListWidgetItem(shapesList);
        new QListWidgetItem(shapesList);
        new QListWidgetItem(shapesList);
        shapesList->setObjectName(QString::fromUtf8("shapesList"));
        QSizePolicy sizePolicy7(QSizePolicy::Ignored, QSizePolicy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(shapesList->sizePolicy().hasHeightForWidth());
        shapesList->setSizePolicy(sizePolicy7);

        verticalLayout_3->addWidget(shapesList);


        verticalLayout_6->addLayout(verticalLayout_3);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        shapeDrawButton = new QPushButton(layoutWidget1);
        shapeDrawButton->setObjectName(QString::fromUtf8("shapeDrawButton"));
        sizePolicy3.setHeightForWidth(shapeDrawButton->sizePolicy().hasHeightForWidth());
        shapeDrawButton->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(shapeDrawButton);

        resizeButton = new QPushButton(layoutWidget1);
        resizeButton->setObjectName(QString::fromUtf8("resizeButton"));
        sizePolicy3.setHeightForWidth(resizeButton->sizePolicy().hasHeightForWidth());
        resizeButton->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(resizeButton);

        copyPasteButton = new QPushButton(layoutWidget1);
        copyPasteButton->setObjectName(QString::fromUtf8("copyPasteButton"));
        sizePolicy3.setHeightForWidth(copyPasteButton->sizePolicy().hasHeightForWidth());
        copyPasteButton->setSizePolicy(sizePolicy3);
        copyPasteButton->setAutoFillBackground(false);

        verticalLayout_5->addWidget(copyPasteButton);

        saveButton = new QPushButton(layoutWidget1);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        sizePolicy3.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(saveButton);

        shapeUnassignButton = new QPushButton(layoutWidget1);
        shapeUnassignButton->setObjectName(QString::fromUtf8("shapeUnassignButton"));
        sizePolicy3.setHeightForWidth(shapeUnassignButton->sizePolicy().hasHeightForWidth());
        shapeUnassignButton->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(shapeUnassignButton);

        toggleClassifierButton = new QPushButton(layoutWidget1);
        toggleClassifierButton->setObjectName(QString::fromUtf8("toggleClassifierButton"));
        sizePolicy3.setHeightForWidth(toggleClassifierButton->sizePolicy().hasHeightForWidth());
        toggleClassifierButton->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(toggleClassifierButton);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_9 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_9, 4, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_8, 5, 4, 1, 1);

        imageNameLabel = new QLabel(layoutWidget2);
        imageNameLabel->setObjectName(QString::fromUtf8("imageNameLabel"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(imageNameLabel->sizePolicy().hasHeightForWidth());
        imageNameLabel->setSizePolicy(sizePolicy8);
        imageNameLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(imageNameLabel, 0, 0, 1, 5);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_7, 10, 2, 1, 1);

        graphicsView = new QGraphicsView(layoutWidget2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy9);
        graphicsView->setMinimumSize(QSize(500, 500));
        graphicsView->setMouseTracking(true);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        graphicsView->setResizeAnchor(QGraphicsView::NoAnchor);

        gridLayout->addWidget(graphicsView, 3, 0, 7, 5);

        zoomOutButton = new QPushButton(layoutWidget2);
        zoomOutButton->setObjectName(QString::fromUtf8("zoomOutButton"));
        sizePolicy8.setHeightForWidth(zoomOutButton->sizePolicy().hasHeightForWidth());
        zoomOutButton->setSizePolicy(sizePolicy8);

        gridLayout->addWidget(zoomOutButton, 10, 3, 1, 1);

        zoomInButton = new QPushButton(layoutWidget2);
        zoomInButton->setObjectName(QString::fromUtf8("zoomInButton"));
        sizePolicy8.setHeightForWidth(zoomInButton->sizePolicy().hasHeightForWidth());
        zoomInButton->setSizePolicy(sizePolicy8);

        gridLayout->addWidget(zoomInButton, 10, 1, 1, 1);

        splitter->addWidget(layoutWidget2);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        View->setCentralWidget(centralwidget);

        retranslateUi(View);

        copyPasteButton->setDefault(false);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        label_3->setText(QCoreApplication::translate("View", "Dataset Path:", nullptr));
        folderPathLabel->setText(QCoreApplication::translate("View", "Please Select Your Dataset Folder >>", nullptr));
        selectFolderButton->setText(QCoreApplication::translate("View", "Select Dataset Folder", nullptr));
        ImageComboBox->setItemText(0, QCoreApplication::translate("View", "Name (Asc)", nullptr));
        ImageComboBox->setItemText(1, QCoreApplication::translate("View", "Name (Des)", nullptr));
        ImageComboBox->setItemText(2, QCoreApplication::translate("View", "Date (Asc)", nullptr));
        ImageComboBox->setItemText(3, QCoreApplication::translate("View", "Date (Des)", nullptr));

        sortButton->setText(QCoreApplication::translate("View", "Sort", nullptr));
        label_2->setText(QCoreApplication::translate("View", "Compatible Images In Selected Folder:", nullptr));
        label_6->setText(QCoreApplication::translate("View", "Classifier Path:", nullptr));
        classiferPathLabel->setText(QCoreApplication::translate("View", "Please Select Your Class File >>", nullptr));
        selectFileButton->setText(QCoreApplication::translate("View", "Select Class File", nullptr));
        classComboBox->setItemText(0, QCoreApplication::translate("View", "Name (Asc)", nullptr));
        classComboBox->setItemText(1, QCoreApplication::translate("View", "Name (Des)", nullptr));

        sortButton2->setText(QCoreApplication::translate("View", "Sort", nullptr));
        addClassButton->setText(QCoreApplication::translate("View", "Add", nullptr));
        removeClassButton->setText(QCoreApplication::translate("View", "Remove", nullptr));
        label_5->setText(QCoreApplication::translate("View", "Shapes:", nullptr));

        const bool __sortingEnabled = shapesList->isSortingEnabled();
        shapesList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = shapesList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("View", "3 sides - Triangle", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = shapesList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("View", "4 sides - Quadrilateral", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = shapesList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("View", "5 sides - Pentagon", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = shapesList->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("View", "6 sides - Hexagon", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = shapesList->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("View", "7 sides - Heptagon", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = shapesList->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("View", "8 sides - Octagon", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = shapesList->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("View", "9 sides - Nonagon", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = shapesList->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("View", "10 sides - Decagon", nullptr));
        shapesList->setSortingEnabled(__sortingEnabled);

        shapeDrawButton->setText(QCoreApplication::translate("View", "Draw", nullptr));
        resizeButton->setText(QCoreApplication::translate("View", "Resize", nullptr));
        copyPasteButton->setText(QCoreApplication::translate("View", "Copy&Paste", nullptr));
        saveButton->setText(QCoreApplication::translate("View", "Save", nullptr));
        shapeUnassignButton->setText(QCoreApplication::translate("View", "Unassign", nullptr));
        toggleClassifierButton->setText(QCoreApplication::translate("View", "Toggle Class", nullptr));
        imageNameLabel->setText(QCoreApplication::translate("View", "ImageName", nullptr));
        zoomOutButton->setText(QCoreApplication::translate("View", "-", nullptr));
        zoomInButton->setText(QCoreApplication::translate("View", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
