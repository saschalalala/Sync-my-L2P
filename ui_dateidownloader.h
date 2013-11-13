/********************************************************************************
** Form generated from reading UI file 'dateidownloader.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATEIDOWNLOADER_H
#define UI_DATEIDOWNLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_DateiDownloader
{
public:
    QProgressBar *progressBar;
    QLabel *progressLabel;
    QLabel *veranstaltungLabel;
    QLabel *dateinameLabel;

    void setupUi(QDialog *DateiDownloader)
    {
        if (DateiDownloader->objectName().isEmpty())
            DateiDownloader->setObjectName(QStringLiteral("DateiDownloader"));
        DateiDownloader->resize(680, 180);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DateiDownloader->sizePolicy().hasHeightForWidth());
        DateiDownloader->setSizePolicy(sizePolicy);
        DateiDownloader->setMinimumSize(QSize(680, 180));
        DateiDownloader->setMaximumSize(QSize(680, 180));
        DateiDownloader->setContextMenuPolicy(Qt::NoContextMenu);
        DateiDownloader->setModal(true);
        progressBar = new QProgressBar(DateiDownloader);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 110, 660, 60));
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setMinimumSize(QSize(660, 60));
        progressBar->setMaximumSize(QSize(660, 60));
        progressBar->setContextMenuPolicy(Qt::NoContextMenu);
        progressBar->setStyleSheet(QStringLiteral(""));
        progressBar->setMinimum(0);
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        progressLabel = new QLabel(DateiDownloader);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));
        progressLabel->setGeometry(QRect(10, 10, 660, 30));
        sizePolicy.setHeightForWidth(progressLabel->sizePolicy().hasHeightForWidth());
        progressLabel->setSizePolicy(sizePolicy);
        progressLabel->setMinimumSize(QSize(660, 30));
        progressLabel->setMaximumSize(QSize(660, 30));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        progressLabel->setFont(font);
        progressLabel->setContextMenuPolicy(Qt::NoContextMenu);
        progressLabel->setStyleSheet(QStringLiteral("font: bold 12pt;"));
        progressLabel->setFrameShape(QFrame::NoFrame);
        progressLabel->setFrameShadow(QFrame::Plain);
        progressLabel->setAlignment(Qt::AlignCenter);
        progressLabel->setTextInteractionFlags(Qt::NoTextInteraction);
        veranstaltungLabel = new QLabel(DateiDownloader);
        veranstaltungLabel->setObjectName(QStringLiteral("veranstaltungLabel"));
        veranstaltungLabel->setGeometry(QRect(10, 40, 660, 30));
        sizePolicy.setHeightForWidth(veranstaltungLabel->sizePolicy().hasHeightForWidth());
        veranstaltungLabel->setSizePolicy(sizePolicy);
        veranstaltungLabel->setMinimumSize(QSize(660, 30));
        veranstaltungLabel->setMaximumSize(QSize(660, 30));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        veranstaltungLabel->setFont(font1);
        veranstaltungLabel->setContextMenuPolicy(Qt::NoContextMenu);
        veranstaltungLabel->setFrameShape(QFrame::NoFrame);
        veranstaltungLabel->setFrameShadow(QFrame::Plain);
        veranstaltungLabel->setAlignment(Qt::AlignCenter);
        veranstaltungLabel->setTextInteractionFlags(Qt::NoTextInteraction);
        dateinameLabel = new QLabel(DateiDownloader);
        dateinameLabel->setObjectName(QStringLiteral("dateinameLabel"));
        dateinameLabel->setGeometry(QRect(10, 60, 660, 30));
        sizePolicy.setHeightForWidth(dateinameLabel->sizePolicy().hasHeightForWidth());
        dateinameLabel->setSizePolicy(sizePolicy);
        dateinameLabel->setMinimumSize(QSize(660, 30));
        dateinameLabel->setMaximumSize(QSize(660, 30));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        dateinameLabel->setFont(font2);
        dateinameLabel->setContextMenuPolicy(Qt::NoContextMenu);
        dateinameLabel->setFrameShape(QFrame::NoFrame);
        dateinameLabel->setFrameShadow(QFrame::Plain);
        dateinameLabel->setAlignment(Qt::AlignCenter);
        dateinameLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        retranslateUi(DateiDownloader);

        QMetaObject::connectSlotsByName(DateiDownloader);
    } // setupUi

    void retranslateUi(QDialog *DateiDownloader)
    {
        DateiDownloader->setWindowTitle(QString());
        progressBar->setFormat(QApplication::translate("DateiDownloader", "%v/%m Byte", 0));
        progressLabel->setText(QApplication::translate("DateiDownloader", "Download Datei 12/54", 0));
        veranstaltungLabel->setText(QApplication::translate("DateiDownloader", "Grundgebiete der D\303\266del", 0));
        dateinameLabel->setText(QApplication::translate("DateiDownloader", "Datei.pdf", 0));
    } // retranslateUi

};

namespace Ui {
    class DateiDownloader: public Ui_DateiDownloader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEIDOWNLOADER_H
