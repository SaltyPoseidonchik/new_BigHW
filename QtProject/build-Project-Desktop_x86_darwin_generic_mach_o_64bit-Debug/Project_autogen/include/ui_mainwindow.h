/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *poplabel;
    QLabel *label_3;
    QLabel *durationlabel;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *yearlabel;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *songlabel;
    QLabel *explicitlabel;
    QSlider *danceSlider;
    QLabel *label;
    QLabel *artistlabel;
    QLabel *genlabel;
    QLineEdit *lineEdit;
    QLineEdit *nameFilterlineEdit;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QLineEdit *fareFromLineEdit;
    QSlider *DanceFromSlider;
    QLabel *label_10;
    QLineEdit *fareToLineEdit;
    QSlider *DanceToSlider;
    QPushButton *saveButton;
    QPushButton *addRowButton;
    QPushButton *loadFileButton;
    QPushButton *deleteButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(772, 600);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        poplabel = new QLabel(groupBox);
        poplabel->setObjectName(QString::fromUtf8("poplabel"));

        gridLayout->addWidget(poplabel, 5, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        durationlabel = new QLabel(groupBox);
        durationlabel->setObjectName(QString::fromUtf8("durationlabel"));

        gridLayout->addWidget(durationlabel, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        yearlabel = new QLabel(groupBox);
        yearlabel->setObjectName(QString::fromUtf8("yearlabel"));

        gridLayout->addWidget(yearlabel, 4, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        songlabel = new QLabel(groupBox);
        songlabel->setObjectName(QString::fromUtf8("songlabel"));

        gridLayout->addWidget(songlabel, 0, 1, 1, 1);

        explicitlabel = new QLabel(groupBox);
        explicitlabel->setObjectName(QString::fromUtf8("explicitlabel"));

        gridLayout->addWidget(explicitlabel, 3, 1, 1, 1);

        danceSlider = new QSlider(groupBox);
        danceSlider->setObjectName(QString::fromUtf8("danceSlider"));
        danceSlider->setEnabled(false);
        danceSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(danceSlider, 6, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        artistlabel = new QLabel(groupBox);
        artistlabel->setObjectName(QString::fromUtf8("artistlabel"));

        gridLayout->addWidget(artistlabel, 1, 1, 1, 1);

        genlabel = new QLabel(groupBox);
        genlabel->setObjectName(QString::fromUtf8("genlabel"));

        gridLayout->addWidget(genlabel, 7, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 1, 5, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        nameFilterlineEdit = new QLineEdit(centralwidget);
        nameFilterlineEdit->setObjectName(QString::fromUtf8("nameFilterlineEdit"));

        gridLayout_2->addWidget(nameFilterlineEdit, 0, 0, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 5, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        fareFromLineEdit = new QLineEdit(groupBox_2);
        fareFromLineEdit->setObjectName(QString::fromUtf8("fareFromLineEdit"));

        verticalLayout->addWidget(fareFromLineEdit);

        DanceFromSlider = new QSlider(groupBox_2);
        DanceFromSlider->setObjectName(QString::fromUtf8("DanceFromSlider"));
        DanceFromSlider->setMinimum(1998);
        DanceFromSlider->setMaximum(2021);
        DanceFromSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(DanceFromSlider);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        fareToLineEdit = new QLineEdit(groupBox_2);
        fareToLineEdit->setObjectName(QString::fromUtf8("fareToLineEdit"));

        verticalLayout->addWidget(fareToLineEdit);

        DanceToSlider = new QSlider(groupBox_2);
        DanceToSlider->setObjectName(QString::fromUtf8("DanceToSlider"));
        DanceToSlider->setMinimum(1998);
        DanceToSlider->setMaximum(2021);
        DanceToSlider->setSingleStep(1);
        DanceToSlider->setValue(2021);
        DanceToSlider->setSliderPosition(2021);
        DanceToSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(DanceToSlider);


        gridLayout_2->addWidget(groupBox_2, 5, 2, 1, 2);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout_2->addWidget(saveButton, 3, 2, 1, 2);

        addRowButton = new QPushButton(centralwidget);
        addRowButton->setObjectName(QString::fromUtf8("addRowButton"));

        gridLayout_2->addWidget(addRowButton, 2, 2, 1, 2);

        loadFileButton = new QPushButton(centralwidget);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));

        gridLayout_2->addWidget(loadFileButton, 1, 2, 1, 2);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout_2->addWidget(deleteButton, 4, 2, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 772, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Details", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Popularity", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Duration", nullptr));
        poplabel->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Artist", nullptr));
        durationlabel->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Explicit", nullptr));
        yearlabel->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Danceabilty", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        songlabel->setText(QString());
        explicitlabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Song", nullptr));
        artistlabel->setText(QString());
        genlabel->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter artist", nullptr));
        nameFilterlineEdit->setText(QString());
        nameFilterlineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter song", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Year", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "From", nullptr));
        fareFromLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "1997", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "To", nullptr));
        fareToLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "2020", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        addRowButton->setText(QCoreApplication::translate("MainWindow", "Add song", nullptr));
        loadFileButton->setText(QCoreApplication::translate("MainWindow", "Load File", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete song", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
