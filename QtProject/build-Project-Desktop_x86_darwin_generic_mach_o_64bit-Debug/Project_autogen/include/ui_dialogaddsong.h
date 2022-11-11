/********************************************************************************
** Form generated from reading UI file 'dialogaddsong.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDSONG_H
#define UI_DIALOGADDSONG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAddSong
{
public:
    QFormLayout *formLayout;
    QLabel *SongLabel;
    QLineEdit *SongLineEdit;
    QLabel *ArtistLabel;
    QLineEdit *ArtistLineEdit;
    QLabel *GenreLabel;
    QLineEdit *GenreLineEdit;
    QLabel *Yearlabel;
    QLineEdit *YearlineEdit;
    QLabel *ExplicitLabel;
    QLabel *Durationlabel;
    QLineEdit *DurationlineEdit;
    QLabel *Popularitylabel;
    QLineEdit *PopularitylineEdit;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLineEdit *DanceabilitylineEdit;
    QLabel *Danceabilitylabel;
    QLineEdit *ExplicitlineEdit;

    void setupUi(QDialog *DialogAddSong)
    {
        if (DialogAddSong->objectName().isEmpty())
            DialogAddSong->setObjectName(QString::fromUtf8("DialogAddSong"));
        DialogAddSong->resize(345, 365);
        formLayout = new QFormLayout(DialogAddSong);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        SongLabel = new QLabel(DialogAddSong);
        SongLabel->setObjectName(QString::fromUtf8("SongLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, SongLabel);

        SongLineEdit = new QLineEdit(DialogAddSong);
        SongLineEdit->setObjectName(QString::fromUtf8("SongLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, SongLineEdit);

        ArtistLabel = new QLabel(DialogAddSong);
        ArtistLabel->setObjectName(QString::fromUtf8("ArtistLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ArtistLabel);

        ArtistLineEdit = new QLineEdit(DialogAddSong);
        ArtistLineEdit->setObjectName(QString::fromUtf8("ArtistLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ArtistLineEdit);

        GenreLabel = new QLabel(DialogAddSong);
        GenreLabel->setObjectName(QString::fromUtf8("GenreLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, GenreLabel);

        GenreLineEdit = new QLineEdit(DialogAddSong);
        GenreLineEdit->setObjectName(QString::fromUtf8("GenreLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, GenreLineEdit);

        Yearlabel = new QLabel(DialogAddSong);
        Yearlabel->setObjectName(QString::fromUtf8("Yearlabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, Yearlabel);

        YearlineEdit = new QLineEdit(DialogAddSong);
        YearlineEdit->setObjectName(QString::fromUtf8("YearlineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, YearlineEdit);

        ExplicitLabel = new QLabel(DialogAddSong);
        ExplicitLabel->setObjectName(QString::fromUtf8("ExplicitLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, ExplicitLabel);

        Durationlabel = new QLabel(DialogAddSong);
        Durationlabel->setObjectName(QString::fromUtf8("Durationlabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, Durationlabel);

        DurationlineEdit = new QLineEdit(DialogAddSong);
        DurationlineEdit->setObjectName(QString::fromUtf8("DurationlineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, DurationlineEdit);

        Popularitylabel = new QLabel(DialogAddSong);
        Popularitylabel->setObjectName(QString::fromUtf8("Popularitylabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, Popularitylabel);

        PopularitylineEdit = new QLineEdit(DialogAddSong);
        PopularitylineEdit->setObjectName(QString::fromUtf8("PopularitylineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, PopularitylineEdit);

        okButton = new QPushButton(DialogAddSong);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        formLayout->setWidget(8, QFormLayout::FieldRole, okButton);

        cancelButton = new QPushButton(DialogAddSong);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        formLayout->setWidget(9, QFormLayout::FieldRole, cancelButton);

        DanceabilitylineEdit = new QLineEdit(DialogAddSong);
        DanceabilitylineEdit->setObjectName(QString::fromUtf8("DanceabilitylineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, DanceabilitylineEdit);

        Danceabilitylabel = new QLabel(DialogAddSong);
        Danceabilitylabel->setObjectName(QString::fromUtf8("Danceabilitylabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, Danceabilitylabel);

        ExplicitlineEdit = new QLineEdit(DialogAddSong);
        ExplicitlineEdit->setObjectName(QString::fromUtf8("ExplicitlineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, ExplicitlineEdit);


        retranslateUi(DialogAddSong);

        QMetaObject::connectSlotsByName(DialogAddSong);
    } // setupUi

    void retranslateUi(QDialog *DialogAddSong)
    {
        DialogAddSong->setWindowTitle(QCoreApplication::translate("DialogAddSong", "Dialog", nullptr));
        SongLabel->setText(QCoreApplication::translate("DialogAddSong", "Song Name", nullptr));
        SongLineEdit->setText(QString());
        ArtistLabel->setText(QCoreApplication::translate("DialogAddSong", "Artist", nullptr));
        GenreLabel->setText(QCoreApplication::translate("DialogAddSong", "Genre", nullptr));
        Yearlabel->setText(QCoreApplication::translate("DialogAddSong", "Year of release", nullptr));
        ExplicitLabel->setText(QCoreApplication::translate("DialogAddSong", "Explicit", nullptr));
        Durationlabel->setText(QCoreApplication::translate("DialogAddSong", "Duration", nullptr));
        Popularitylabel->setText(QCoreApplication::translate("DialogAddSong", "Popularity", nullptr));
        okButton->setText(QCoreApplication::translate("DialogAddSong", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("DialogAddSong", "Cancel", nullptr));
        Danceabilitylabel->setText(QCoreApplication::translate("DialogAddSong", "Danceability", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddSong: public Ui_DialogAddSong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDSONG_H
