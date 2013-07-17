/********************************************************************************
** Form generated from reading UI file 'trackmapgen.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKMAPGEN_H
#define UI_TRACKMAPGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrackMapGen
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *fileNameLabel;
    QListView *lapsListView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TrackMapGen)
    {
        if (TrackMapGen->objectName().isEmpty())
            TrackMapGen->setObjectName(QStringLiteral("TrackMapGen"));
        TrackMapGen->resize(400, 300);
        actionOpen = new QAction(TrackMapGen);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(TrackMapGen);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionQuit = new QAction(TrackMapGen);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(TrackMapGen);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        fileNameLabel = new QLabel(verticalLayoutWidget);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));

        verticalLayout->addWidget(fileNameLabel);

        lapsListView = new QListView(verticalLayoutWidget);
        lapsListView->setObjectName(QStringLiteral("lapsListView"));

        verticalLayout->addWidget(lapsListView);

        TrackMapGen->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TrackMapGen);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        TrackMapGen->setMenuBar(menuBar);
        statusBar = new QStatusBar(TrackMapGen);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TrackMapGen->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(TrackMapGen);

        QMetaObject::connectSlotsByName(TrackMapGen);
    } // setupUi

    void retranslateUi(QMainWindow *TrackMapGen)
    {
        TrackMapGen->setWindowTitle(QApplication::translate("TrackMapGen", "TrackMapGen", 0));
        actionOpen->setText(QApplication::translate("TrackMapGen", "Open", 0));
        actionSave->setText(QApplication::translate("TrackMapGen", "Save", 0));
        actionQuit->setText(QApplication::translate("TrackMapGen", "Quit", 0));
        fileNameLabel->setText(QApplication::translate("TrackMapGen", "Filename:", 0));
        menuFile->setTitle(QApplication::translate("TrackMapGen", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class TrackMapGen: public Ui_TrackMapGen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKMAPGEN_H
