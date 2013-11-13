/********************************************************************************
** Form generated from reading UI file 'hauptfenster.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAUPTFENSTER_H
#define UI_HAUPTFENSTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *Dateibrowser;
    QHBoxLayout *horizontalLayout_3;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *AnsichtBox;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Aktualisieren;
    QPushButton *expandButton;
    QPushButton *collapseButton;
    QPushButton *directoryOpen;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *FilterBox;
    QGridLayout *gridLayout_3;
    QCheckBox *maxSizeCheckBox;
    QPushButton *nameFilterButton;
    QPushButton *dateFilterButton;
    QSpinBox *maxSizeBox;
    QGroupBox *SynchronisierungBox;
    QVBoxLayout *verticalLayout_5;
    QPushButton *ausschliessen;
    QPushButton *einbinden;
    QPushButton *synchronisieren;
    QWidget *Einstellungen;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLineEdit *BenutzernameFeld;
    QLineEdit *PasswortFeld;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *DatenSpeichern;
    QPushButton *Login;
    QGroupBox *VerzeichnisBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *VerzeichnisFeld;
    QToolButton *directoryButton;
    QGroupBox *OptionenBox;
    QGridLayout *gridLayout_2;
    QCheckBox *documentsCheck;
    QCheckBox *structeredDocumentsCheck;
    QCheckBox *alteSemesterCheck;
    QCheckBox *AutoLogin;
    QCheckBox *autoSyncCheck;
    QCheckBox *exercisesCheck;
    QCheckBox *sharedFilesCheck;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(702, 580);
        MainWindow->setMaximumSize(QSize(900, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/Icons/magnifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setIconSize(QSize(16, 16));
        Dateibrowser = new QWidget();
        Dateibrowser->setObjectName(QStringLiteral("Dateibrowser"));
        horizontalLayout_3 = new QHBoxLayout(Dateibrowser);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        treeView = new QTreeView(Dateibrowser);
        treeView->setObjectName(QStringLiteral("treeView"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy1);
        treeView->setMouseTracking(true);
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setTabKeyNavigation(true);
        treeView->setProperty("showDropIndicator", QVariant(false));
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeView->setUniformRowHeights(true);
        treeView->setAnimated(true);
        treeView->setWordWrap(true);
        treeView->header()->setVisible(false);

        horizontalLayout_3->addWidget(treeView);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        AnsichtBox = new QGroupBox(Dateibrowser);
        AnsichtBox->setObjectName(QStringLiteral("AnsichtBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(AnsichtBox->sizePolicy().hasHeightForWidth());
        AnsichtBox->setSizePolicy(sizePolicy2);
        AnsichtBox->setMinimumSize(QSize(150, 0));
        verticalLayout_4 = new QVBoxLayout(AnsichtBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Aktualisieren = new QPushButton(AnsichtBox);
        Aktualisieren->setObjectName(QStringLiteral("Aktualisieren"));
        Aktualisieren->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/Icons/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        Aktualisieren->setIcon(icon1);
        Aktualisieren->setIconSize(QSize(16, 16));

        verticalLayout_4->addWidget(Aktualisieren);

        expandButton = new QPushButton(AnsichtBox);
        expandButton->setObjectName(QStringLiteral("expandButton"));

        verticalLayout_4->addWidget(expandButton);

        collapseButton = new QPushButton(AnsichtBox);
        collapseButton->setObjectName(QStringLiteral("collapseButton"));

        verticalLayout_4->addWidget(collapseButton);

        directoryOpen = new QPushButton(AnsichtBox);
        directoryOpen->setObjectName(QStringLiteral("directoryOpen"));
        directoryOpen->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(directoryOpen->sizePolicy().hasHeightForWidth());
        directoryOpen->setSizePolicy(sizePolicy3);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/drive"), QSize(), QIcon::Normal, QIcon::Off);
        directoryOpen->setIcon(icon2);
        directoryOpen->setIconSize(QSize(16, 16));

        verticalLayout_4->addWidget(directoryOpen);


        verticalLayout_3->addWidget(AnsichtBox);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        FilterBox = new QGroupBox(Dateibrowser);
        FilterBox->setObjectName(QStringLiteral("FilterBox"));
        sizePolicy2.setHeightForWidth(FilterBox->sizePolicy().hasHeightForWidth());
        FilterBox->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(FilterBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        maxSizeCheckBox = new QCheckBox(FilterBox);
        maxSizeCheckBox->setObjectName(QStringLiteral("maxSizeCheckBox"));

        gridLayout_3->addWidget(maxSizeCheckBox, 0, 0, 1, 1);

        nameFilterButton = new QPushButton(FilterBox);
        nameFilterButton->setObjectName(QStringLiteral("nameFilterButton"));
        nameFilterButton->setEnabled(false);

        gridLayout_3->addWidget(nameFilterButton, 1, 0, 1, 2);

        dateFilterButton = new QPushButton(FilterBox);
        dateFilterButton->setObjectName(QStringLiteral("dateFilterButton"));
        dateFilterButton->setEnabled(false);

        gridLayout_3->addWidget(dateFilterButton, 2, 0, 1, 2);

        maxSizeBox = new QSpinBox(FilterBox);
        maxSizeBox->setObjectName(QStringLiteral("maxSizeBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(maxSizeBox->sizePolicy().hasHeightForWidth());
        maxSizeBox->setSizePolicy(sizePolicy4);
        maxSizeBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maxSizeBox->setAccelerated(true);
        maxSizeBox->setMinimum(1);
        maxSizeBox->setMaximum(999);

        gridLayout_3->addWidget(maxSizeBox, 0, 1, 1, 1);


        verticalLayout_3->addWidget(FilterBox);

        SynchronisierungBox = new QGroupBox(Dateibrowser);
        SynchronisierungBox->setObjectName(QStringLiteral("SynchronisierungBox"));
        sizePolicy2.setHeightForWidth(SynchronisierungBox->sizePolicy().hasHeightForWidth());
        SynchronisierungBox->setSizePolicy(sizePolicy2);
        SynchronisierungBox->setMinimumSize(QSize(150, 0));
        verticalLayout_5 = new QVBoxLayout(SynchronisierungBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        ausschliessen = new QPushButton(SynchronisierungBox);
        ausschliessen->setObjectName(QStringLiteral("ausschliessen"));
        ausschliessen->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/Icons/block.png"), QSize(), QIcon::Normal, QIcon::Off);
        ausschliessen->setIcon(icon3);
        ausschliessen->setIconSize(QSize(16, 16));

        verticalLayout_5->addWidget(ausschliessen);

        einbinden = new QPushButton(SynchronisierungBox);
        einbinden->setObjectName(QStringLiteral("einbinden"));
        einbinden->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/Icons/tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        einbinden->setIcon(icon4);
        einbinden->setIconSize(QSize(16, 16));

        verticalLayout_5->addWidget(einbinden);

        synchronisieren = new QPushButton(SynchronisierungBox);
        synchronisieren->setObjectName(QStringLiteral("synchronisieren"));
        synchronisieren->setEnabled(false);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        synchronisieren->setFont(font);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icons/Icons/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        synchronisieren->setIcon(icon5);
        synchronisieren->setIconSize(QSize(16, 16));

        verticalLayout_5->addWidget(synchronisieren);


        verticalLayout_3->addWidget(SynchronisierungBox);


        horizontalLayout_3->addLayout(verticalLayout_3);

        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icons/Icons/cupboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(Dateibrowser, icon6, QString());
        Einstellungen = new QWidget();
        Einstellungen->setObjectName(QStringLiteral("Einstellungen"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Einstellungen->sizePolicy().hasHeightForWidth());
        Einstellungen->setSizePolicy(sizePolicy5);
        verticalLayout = new QVBoxLayout(Einstellungen);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(Einstellungen);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        BenutzernameFeld = new QLineEdit(groupBox_2);
        BenutzernameFeld->setObjectName(QStringLiteral("BenutzernameFeld"));
        BenutzernameFeld->setMinimumSize(QSize(315, 30));
        BenutzernameFeld->setFont(font);
        BenutzernameFeld->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(BenutzernameFeld, 0, 0, 1, 1);

        PasswortFeld = new QLineEdit(groupBox_2);
        PasswortFeld->setObjectName(QStringLiteral("PasswortFeld"));
        PasswortFeld->setMinimumSize(QSize(315, 30));
        PasswortFeld->setFont(font);
        PasswortFeld->setEchoMode(QLineEdit::Password);
        PasswortFeld->setCursorPosition(0);
        PasswortFeld->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(PasswortFeld, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        DatenSpeichern = new QCheckBox(groupBox_2);
        DatenSpeichern->setObjectName(QStringLiteral("DatenSpeichern"));
        DatenSpeichern->setEnabled(false);
        sizePolicy4.setHeightForWidth(DatenSpeichern->sizePolicy().hasHeightForWidth());
        DatenSpeichern->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(DatenSpeichern);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        Login = new QPushButton(groupBox_2);
        Login->setObjectName(QStringLiteral("Login"));
        sizePolicy4.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy4);
        Login->setFont(font);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icons/Icons/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setIcon(icon7);
        Login->setIconSize(QSize(16, 16));

        gridLayout->addWidget(Login, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        VerzeichnisBox = new QGroupBox(Einstellungen);
        VerzeichnisBox->setObjectName(QStringLiteral("VerzeichnisBox"));
        sizePolicy2.setHeightForWidth(VerzeichnisBox->sizePolicy().hasHeightForWidth());
        VerzeichnisBox->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(VerzeichnisBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        VerzeichnisFeld = new QLineEdit(VerzeichnisBox);
        VerzeichnisFeld->setObjectName(QStringLiteral("VerzeichnisFeld"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(VerzeichnisFeld->sizePolicy().hasHeightForWidth());
        VerzeichnisFeld->setSizePolicy(sizePolicy6);
        VerzeichnisFeld->setMinimumSize(QSize(0, 30));
        VerzeichnisFeld->setFont(font);
        VerzeichnisFeld->setAlignment(Qt::AlignCenter);
        VerzeichnisFeld->setReadOnly(true);

        horizontalLayout_2->addWidget(VerzeichnisFeld);

        directoryButton = new QToolButton(VerzeichnisBox);
        directoryButton->setObjectName(QStringLiteral("directoryButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(directoryButton->sizePolicy().hasHeightForWidth());
        directoryButton->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(directoryButton);


        verticalLayout->addWidget(VerzeichnisBox);

        OptionenBox = new QGroupBox(Einstellungen);
        OptionenBox->setObjectName(QStringLiteral("OptionenBox"));
        sizePolicy2.setHeightForWidth(OptionenBox->sizePolicy().hasHeightForWidth());
        OptionenBox->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(OptionenBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        documentsCheck = new QCheckBox(OptionenBox);
        documentsCheck->setObjectName(QStringLiteral("documentsCheck"));
        documentsCheck->setChecked(true);

        gridLayout_2->addWidget(documentsCheck, 0, 0, 1, 1);

        structeredDocumentsCheck = new QCheckBox(OptionenBox);
        structeredDocumentsCheck->setObjectName(QStringLiteral("structeredDocumentsCheck"));
        structeredDocumentsCheck->setChecked(true);

        gridLayout_2->addWidget(structeredDocumentsCheck, 2, 0, 1, 1);

        alteSemesterCheck = new QCheckBox(OptionenBox);
        alteSemesterCheck->setObjectName(QStringLiteral("alteSemesterCheck"));

        gridLayout_2->addWidget(alteSemesterCheck, 0, 1, 1, 1);

        AutoLogin = new QCheckBox(OptionenBox);
        AutoLogin->setObjectName(QStringLiteral("AutoLogin"));
        AutoLogin->setEnabled(false);
        sizePolicy3.setHeightForWidth(AutoLogin->sizePolicy().hasHeightForWidth());
        AutoLogin->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(AutoLogin, 2, 1, 1, 1);

        autoSyncCheck = new QCheckBox(OptionenBox);
        autoSyncCheck->setObjectName(QStringLiteral("autoSyncCheck"));
        autoSyncCheck->setEnabled(false);

        gridLayout_2->addWidget(autoSyncCheck, 3, 1, 1, 1);

        exercisesCheck = new QCheckBox(OptionenBox);
        exercisesCheck->setObjectName(QStringLiteral("exercisesCheck"));
        exercisesCheck->setChecked(true);

        gridLayout_2->addWidget(exercisesCheck, 3, 0, 1, 1);

        sharedFilesCheck = new QCheckBox(OptionenBox);
        sharedFilesCheck->setObjectName(QStringLiteral("sharedFilesCheck"));

        gridLayout_2->addWidget(sharedFilesCheck, 4, 0, 1, 1);


        verticalLayout->addWidget(OptionenBox);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Icons/Icons/gear.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(Einstellungen, icon8, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sync-my-L\302\262P", 0));
        AnsichtBox->setTitle(QApplication::translate("MainWindow", "Ansicht", 0));
#ifndef QT_NO_STATUSTIP
        Aktualisieren->setStatusTip(QApplication::translate("MainWindow", "Aktualiseren aller Veranstaltungen und Dateien", 0));
#endif // QT_NO_STATUSTIP
        Aktualisieren->setText(QApplication::translate("MainWindow", "aktualisieren", 0));
#ifndef QT_NO_STATUSTIP
        expandButton->setStatusTip(QApplication::translate("MainWindow", "Expandieren aller Veranstaltungen und Ordner", 0));
#endif // QT_NO_STATUSTIP
        expandButton->setText(QApplication::translate("MainWindow", "alle expandieren", 0));
#ifndef QT_NO_STATUSTIP
        collapseButton->setStatusTip(QApplication::translate("MainWindow", "Rduzieren aller Veranstaltungen und Ordner", 0));
#endif // QT_NO_STATUSTIP
        collapseButton->setText(QApplication::translate("MainWindow", "alle reduzieren", 0));
#ifndef QT_NO_STATUSTIP
        directoryOpen->setStatusTip(QApplication::translate("MainWindow", "\303\226ffnen des ausgew\303\244hlten Downloadverzeichnisses", 0));
#endif // QT_NO_STATUSTIP
        directoryOpen->setText(QApplication::translate("MainWindow", "Speicherort \303\266ffnen", 0));
        FilterBox->setTitle(QApplication::translate("MainWindow", "Dateifilter", 0));
#ifndef QT_NO_STATUSTIP
        maxSizeCheckBox->setStatusTip(QApplication::translate("MainWindow", "Auswahl einer maximalen Dateigr\303\266\303\237e f\303\274r runterzuladene Dateien", 0));
#endif // QT_NO_STATUSTIP
        maxSizeCheckBox->setText(QApplication::translate("MainWindow", "Max. Gr\303\266\303\237e", 0));
        nameFilterButton->setText(QApplication::translate("MainWindow", "Namensfilter", 0));
        dateFilterButton->setText(QApplication::translate("MainWindow", "Datumsfilter", 0));
        maxSizeBox->setSuffix(QApplication::translate("MainWindow", " MB", 0));
        SynchronisierungBox->setTitle(QApplication::translate("MainWindow", "Synchronisation", 0));
#ifndef QT_NO_STATUSTIP
        ausschliessen->setStatusTip(QApplication::translate("MainWindow", "Ausschlie\303\237en aller ausgew\303\244hlten Dateien aus der Synchronisation", 0));
#endif // QT_NO_STATUSTIP
        ausschliessen->setText(QApplication::translate("MainWindow", "ausschlie\303\237en", 0));
#ifndef QT_NO_STATUSTIP
        einbinden->setStatusTip(QApplication::translate("MainWindow", "Einbinden aller ausgew\303\244hlten Dateien aus der Synchronisation", 0));
#endif // QT_NO_STATUSTIP
        einbinden->setText(QApplication::translate("MainWindow", "einbinden", 0));
#ifndef QT_NO_STATUSTIP
        synchronisieren->setStatusTip(QApplication::translate("MainWindow", "Starten der Synchronisation", 0));
#endif // QT_NO_STATUSTIP
        synchronisieren->setText(QApplication::translate("MainWindow", "synchronsieren", 0));
        tabWidget->setTabText(tabWidget->indexOf(Dateibrowser), QApplication::translate("MainWindow", "Dateibrowser", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Login", 0));
        BenutzernameFeld->setPlaceholderText(QApplication::translate("MainWindow", "Benutzername", 0));
        PasswortFeld->setPlaceholderText(QApplication::translate("MainWindow", "Passwort", 0));
#ifndef QT_NO_STATUSTIP
        DatenSpeichern->setStatusTip(QApplication::translate("MainWindow", "Speichern der Logindaten auf dem Computer", 0));
#endif // QT_NO_STATUSTIP
        DatenSpeichern->setText(QApplication::translate("MainWindow", "Logindaten speichern", 0));
#ifndef QT_NO_STATUSTIP
        Login->setStatusTip(QApplication::translate("MainWindow", "Start des Einlogvorgangs", 0));
#endif // QT_NO_STATUSTIP
        Login->setText(QApplication::translate("MainWindow", "Login", 0));
        VerzeichnisBox->setTitle(QApplication::translate("MainWindow", "Downloadverzeichnis", 0));
        VerzeichnisFeld->setPlaceholderText(QApplication::translate("MainWindow", "Downloadverzeichnis", 0));
        directoryButton->setText(QApplication::translate("MainWindow", "...", 0));
        OptionenBox->setTitle(QApplication::translate("MainWindow", "Optionen", 0));
#ifndef QT_NO_STATUSTIP
        documentsCheck->setStatusTip(QApplication::translate("MainWindow", "Einschlie\303\237en von \"Dokumente\" in die Synchronisation", 0));
#endif // QT_NO_STATUSTIP
        documentsCheck->setText(QApplication::translate("MainWindow", "\"Dokumente\" durchsuchen", 0));
#ifndef QT_NO_STATUSTIP
        structeredDocumentsCheck->setStatusTip(QApplication::translate("MainWindow", "Einschlie\303\237en von \"Strukturiete Materialien\" in die Synchronisation", 0));
#endif // QT_NO_STATUSTIP
        structeredDocumentsCheck->setText(QApplication::translate("MainWindow", "\"Strukturierte Materialien\" durchsuchen", 0));
#ifndef QT_NO_STATUSTIP
        alteSemesterCheck->setStatusTip(QApplication::translate("MainWindow", "Durchsuchen der vergangen Semester", 0));
#endif // QT_NO_STATUSTIP
        alteSemesterCheck->setText(QApplication::translate("MainWindow", "fr\303\274here Semester durchsuchen", 0));
#ifndef QT_NO_STATUSTIP
        AutoLogin->setStatusTip(QApplication::translate("MainWindow", "Automatischer Loginversuch beim Programmstart", 0));
#endif // QT_NO_STATUSTIP
        AutoLogin->setText(QApplication::translate("MainWindow", "Login beim Programstart", 0));
#ifndef QT_NO_STATUSTIP
        autoSyncCheck->setStatusTip(QApplication::translate("MainWindow", "Automatische Synchronisation beim Programmstart", 0));
#endif // QT_NO_STATUSTIP
        autoSyncCheck->setText(QApplication::translate("MainWindow", "Synchronisation beim Programmstart", 0));
#ifndef QT_NO_STATUSTIP
        exercisesCheck->setStatusTip(QApplication::translate("MainWindow", "Einschlie\303\237en von \"\303\234bungen\" in die Synchronisation", 0));
#endif // QT_NO_STATUSTIP
        exercisesCheck->setText(QApplication::translate("MainWindow", "\"\303\234bungen\" durchsuchen", 0));
        sharedFilesCheck->setText(QApplication::translate("MainWindow", "Gemeinsame Materialien durchsuchen", 0));
        tabWidget->setTabText(tabWidget->indexOf(Einstellungen), QApplication::translate("MainWindow", "Einstellungen", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAUPTFENSTER_H
