/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *main_page;
    QAction *settings_act;
    QAction *clear;
    QAction *exit;
    QAction *logging;
    QAction *empty;
    QAction *empty_2;
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *settlay;
    QFrame *mainfr;
    QGridLayout *gridLayout_3;
    QVBoxLayout *mainlay;
    QLabel *label_9;
    QComboBox *diskbox;
    QPushButton *start_btn;
    QPushButton *stop_btn;
    QPushButton *check_btn;
    QGridLayout *gridLayout_2;
    QLineEdit *inperrline;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *wrerrorline;
    QLineEdit *fsline;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *freeline;
    QLineEdit *writtenline;
    QLabel *label_8;
    QLineEdit *timeline;
    QLabel *label_11;
    QLineEdit *inperrline_2;
    QProgressBar *testProgress;
    QFrame *setframe;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QGridLayout *settgrid;
    QSpinBox *fcount_b;
    QSpinBox *fsize_b;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *accept_btn;
    QFrame *frame_log;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QTextEdit *log_edit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(300, 500);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(300, 0));
        MainWindow->setMaximumSize(QSize(800, 16777215));
        MainWindow->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(209, 209, 209, 124), stop:1 rgba(187, 238, 255, 198));"));
        main_page = new QAction(MainWindow);
        main_page->setObjectName(QStringLiteral("main_page"));
        main_page->setCheckable(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/imgs/home-page1.png"), QSize(), QIcon::Normal, QIcon::Off);
        main_page->setIcon(icon);
        settings_act = new QAction(MainWindow);
        settings_act->setObjectName(QStringLiteral("settings_act"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/imgs/settings_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        settings_act->setIcon(icon1);
        clear = new QAction(MainWindow);
        clear->setObjectName(QStringLiteral("clear"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/imgs/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear->setIcon(icon2);
        exit = new QAction(MainWindow);
        exit->setObjectName(QStringLiteral("exit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/imgs/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon3);
        exit->setMenuRole(QAction::TextHeuristicRole);
        logging = new QAction(MainWindow);
        logging->setObjectName(QStringLiteral("logging"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/imgs/accessories-text-editor2.png"), QSize(), QIcon::Normal, QIcon::Off);
        logging->setIcon(icon4);
        empty = new QAction(MainWindow);
        empty->setObjectName(QStringLiteral("empty"));
        empty->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/imgs/empty.png"), QSize(), QIcon::Normal, QIcon::Off);
        empty->setIcon(icon5);
        empty_2 = new QAction(MainWindow);
        empty_2->setObjectName(QStringLiteral("empty_2"));
        empty_2->setEnabled(false);
        empty_2->setIcon(icon5);
        empty_2->setVisible(true);
        empty_2->setIconVisibleInMenu(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        settlay = new QHBoxLayout();
        settlay->setSpacing(6);
        settlay->setObjectName(QStringLiteral("settlay"));
        mainfr = new QFrame(centralWidget);
        mainfr->setObjectName(QStringLiteral("mainfr"));
        mainfr->setMinimumSize(QSize(200, 0));
        mainfr->setMaximumSize(QSize(16777215, 16777215));
        mainfr->setFrameShape(QFrame::StyledPanel);
        mainfr->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(mainfr);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setVerticalSpacing(20);
        mainlay = new QVBoxLayout();
        mainlay->setSpacing(20);
        mainlay->setObjectName(QStringLiteral("mainlay"));
        mainlay->setContentsMargins(-1, 15, -1, -1);
        label_9 = new QLabel(mainfr);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMaximumSize(QSize(16777215, 60));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/imgs/home-page1.png")));
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setMargin(0);

        mainlay->addWidget(label_9);

        diskbox = new QComboBox(mainfr);
        diskbox->setObjectName(QStringLiteral("diskbox"));
        sizePolicy1.setHeightForWidth(diskbox->sizePolicy().hasHeightForWidth());
        diskbox->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush2(QColor(51, 153, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        diskbox->setPalette(palette);
        QFont font;
        font.setPointSize(10);
        diskbox->setFont(font);
        diskbox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        mainlay->addWidget(diskbox);

        start_btn = new QPushButton(mainfr);
        start_btn->setObjectName(QStringLiteral("start_btn"));
        sizePolicy1.setHeightForWidth(start_btn->sizePolicy().hasHeightForWidth());
        start_btn->setSizePolicy(sizePolicy1);
        start_btn->setFont(font);
        start_btn->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));

        mainlay->addWidget(start_btn);

        stop_btn = new QPushButton(mainfr);
        stop_btn->setObjectName(QStringLiteral("stop_btn"));
        sizePolicy1.setHeightForWidth(stop_btn->sizePolicy().hasHeightForWidth());
        stop_btn->setSizePolicy(sizePolicy1);
        stop_btn->setFont(font);
        stop_btn->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));

        mainlay->addWidget(stop_btn);

        check_btn = new QPushButton(mainfr);
        check_btn->setObjectName(QStringLiteral("check_btn"));
        sizePolicy1.setHeightForWidth(check_btn->sizePolicy().hasHeightForWidth());
        check_btn->setSizePolicy(sizePolicy1);
        check_btn->setFont(font);
        check_btn->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));

        mainlay->addWidget(check_btn);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(1);
        gridLayout_2->setContentsMargins(0, -1, 0, -1);
        inperrline = new QLineEdit(mainfr);
        inperrline->setObjectName(QStringLiteral("inperrline"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(inperrline->sizePolicy().hasHeightForWidth());
        inperrline->setSizePolicy(sizePolicy2);
        inperrline->setMinimumSize(QSize(20, 0));
        inperrline->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        inperrline->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(inperrline, 3, 1, 1, 1);

        label_5 = new QLabel(mainfr);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        label_4 = new QLabel(mainfr);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);
        label_4->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(mainfr);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        wrerrorline = new QLineEdit(mainfr);
        wrerrorline->setObjectName(QStringLiteral("wrerrorline"));
        sizePolicy2.setHeightForWidth(wrerrorline->sizePolicy().hasHeightForWidth());
        wrerrorline->setSizePolicy(sizePolicy2);
        wrerrorline->setMinimumSize(QSize(20, 0));
        wrerrorline->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        wrerrorline->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(wrerrorline, 5, 1, 1, 1);

        fsline = new QLineEdit(mainfr);
        fsline->setObjectName(QStringLiteral("fsline"));
        sizePolicy2.setHeightForWidth(fsline->sizePolicy().hasHeightForWidth());
        fsline->setSizePolicy(sizePolicy2);
        fsline->setMinimumSize(QSize(20, 0));
        fsline->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fsline->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(fsline, 0, 1, 1, 1);

        label = new QLabel(mainfr);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(mainfr);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        freeline = new QLineEdit(mainfr);
        freeline->setObjectName(QStringLiteral("freeline"));
        sizePolicy2.setHeightForWidth(freeline->sizePolicy().hasHeightForWidth());
        freeline->setSizePolicy(sizePolicy2);
        freeline->setMinimumSize(QSize(20, 0));
        freeline->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        freeline->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(freeline, 1, 1, 1, 1);

        writtenline = new QLineEdit(mainfr);
        writtenline->setObjectName(QStringLiteral("writtenline"));
        sizePolicy2.setHeightForWidth(writtenline->sizePolicy().hasHeightForWidth());
        writtenline->setSizePolicy(sizePolicy2);
        writtenline->setMinimumSize(QSize(20, 0));
        writtenline->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        writtenline->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(writtenline, 2, 1, 1, 1);

        label_8 = new QLabel(mainfr);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);
        label_8->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        timeline = new QLineEdit(mainfr);
        timeline->setObjectName(QStringLiteral("timeline"));
        sizePolicy2.setHeightForWidth(timeline->sizePolicy().hasHeightForWidth());
        timeline->setSizePolicy(sizePolicy2);
        timeline->setMinimumSize(QSize(20, 0));
        timeline->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        timeline->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(timeline, 6, 1, 1, 1);

        label_11 = new QLabel(mainfr);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy4.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy4);
        label_11->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        inperrline_2 = new QLineEdit(mainfr);
        inperrline_2->setObjectName(QStringLiteral("inperrline_2"));
        sizePolicy2.setHeightForWidth(inperrline_2->sizePolicy().hasHeightForWidth());
        inperrline_2->setSizePolicy(sizePolicy2);
        inperrline_2->setMinimumSize(QSize(20, 0));
        inperrline_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        inperrline_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(inperrline_2, 4, 1, 1, 1);


        mainlay->addLayout(gridLayout_2);

        testProgress = new QProgressBar(mainfr);
        testProgress->setObjectName(QStringLiteral("testProgress"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(testProgress->sizePolicy().hasHeightForWidth());
        testProgress->setSizePolicy(sizePolicy6);
        testProgress->setValue(0);
        testProgress->setAlignment(Qt::AlignCenter);

        mainlay->addWidget(testProgress);


        gridLayout_3->addLayout(mainlay, 0, 0, 1, 1);


        settlay->addWidget(mainfr);

        setframe = new QFrame(centralWidget);
        setframe->setObjectName(QStringLiteral("setframe"));
        setframe->setEnabled(true);
        sizePolicy.setHeightForWidth(setframe->sizePolicy().hasHeightForWidth());
        setframe->setSizePolicy(sizePolicy);
        setframe->setMinimumSize(QSize(200, 0));
        setframe->setMaximumSize(QSize(16777215, 16777215));
        setframe->setFrameShape(QFrame::StyledPanel);
        setframe->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(setframe);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(100);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 10);
        label_10 = new QLabel(setframe);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMaximumSize(QSize(16777215, 60));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/imgs/settings_min.png")));
        label_10->setAlignment(Qt::AlignCenter);
        label_10->setMargin(0);

        verticalLayout->addWidget(label_10);

        settgrid = new QGridLayout();
        settgrid->setSpacing(6);
        settgrid->setObjectName(QStringLiteral("settgrid"));
        settgrid->setHorizontalSpacing(18);
        settgrid->setVerticalSpacing(60);
        settgrid->setContentsMargins(10, -1, 10, -1);
        fcount_b = new QSpinBox(setframe);
        fcount_b->setObjectName(QStringLiteral("fcount_b"));
        sizePolicy6.setHeightForWidth(fcount_b->sizePolicy().hasHeightForWidth());
        fcount_b->setSizePolicy(sizePolicy6);
        fcount_b->setMinimumSize(QSize(0, 26));
        fcount_b->setFont(font);
        fcount_b->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fcount_b->setMaximum(1999999);

        settgrid->addWidget(fcount_b, 1, 1, 1, 1);

        fsize_b = new QSpinBox(setframe);
        fsize_b->setObjectName(QStringLiteral("fsize_b"));
        sizePolicy6.setHeightForWidth(fsize_b->sizePolicy().hasHeightForWidth());
        fsize_b->setSizePolicy(sizePolicy6);
        fsize_b->setMinimumSize(QSize(0, 26));
        fsize_b->setFont(font);
        fsize_b->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fsize_b->setMinimum(1);
        fsize_b->setMaximum(1024);

        settgrid->addWidget(fsize_b, 0, 1, 1, 1);

        label_7 = new QLabel(setframe);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setMargin(5);

        settgrid->addWidget(label_7, 1, 0, 1, 1);

        label_6 = new QLabel(setframe);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setMargin(5);

        settgrid->addWidget(label_6, 0, 0, 1, 1);


        verticalLayout->addLayout(settgrid);

        accept_btn = new QPushButton(setframe);
        accept_btn->setObjectName(QStringLiteral("accept_btn"));
        sizePolicy1.setHeightForWidth(accept_btn->sizePolicy().hasHeightForWidth());
        accept_btn->setSizePolicy(sizePolicy1);
        accept_btn->setFont(font);
        accept_btn->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));

        verticalLayout->addWidget(accept_btn);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);


        settlay->addWidget(setframe);

        frame_log = new QFrame(centralWidget);
        frame_log->setObjectName(QStringLiteral("frame_log"));
        frame_log->setFrameShape(QFrame::StyledPanel);
        frame_log->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_log);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(25);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(15);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 15, -1, -1);
        label_12 = new QLabel(frame_log);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMaximumSize(QSize(16777215, 60));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/imgs/accessories-text-editor2.png")));
        label_12->setAlignment(Qt::AlignCenter);
        label_12->setMargin(0);

        verticalLayout_4->addWidget(label_12);

        log_edit = new QTextEdit(frame_log);
        log_edit->setObjectName(QStringLiteral("log_edit"));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        log_edit->setFont(font1);
        log_edit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        log_edit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(log_edit);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);


        settlay->addWidget(frame_log);


        horizontalLayout->addLayout(settlay);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        setframe->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.0795455, y1:0.091, x2:1, y2:1, stop:0.0284091 rgba(0, 140, 255, 192), stop:1 rgba(255, 255, 255, 205));"));
        mainToolBar->setAllowedAreas(Qt::AllToolBarAreas);
        mainToolBar->setIconSize(QSize(31, 25));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sizePolicy2.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(1);
        statusBar->setFont(font2);
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(main_page);
        mainToolBar->addAction(settings_act);
        mainToolBar->addAction(logging);
        mainToolBar->addAction(empty);
        mainToolBar->addAction(empty_2);
        mainToolBar->addAction(clear);
        mainToolBar->addAction(exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FlashKaTest", 0));
        main_page->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\217 \320\275\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216 F3", 0));
#ifndef QT_NO_TOOLTIP
        main_page->setToolTip(QApplication::translate("MainWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\217 \320\275\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216 F3", 0));
#endif // QT_NO_TOOLTIP
        main_page->setShortcut(QApplication::translate("MainWindow", "F3", 0));
        settings_act->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 F4", 0));
        settings_act->setShortcut(QApplication::translate("MainWindow", "F4", 0));
        clear->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\276\320\273\321\217 F8", 0));
        clear->setShortcut(QApplication::translate("MainWindow", "F8", 0));
        exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264 F9", 0));
#ifndef QT_NO_TOOLTIP
        exit->setToolTip(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264 F9", 0));
#endif // QT_NO_TOOLTIP
        exit->setShortcut(QApplication::translate("MainWindow", "F9", 0));
        logging->setText(QApplication::translate("MainWindow", "\320\226\321\203\321\200\320\275\320\260\320\273 \321\202\320\265\321\201\321\202\320\260 F7", 0));
        logging->setIconText(QApplication::translate("MainWindow", "\320\226\321\203\321\200\320\275\320\260\320\273 \321\202\320\265\321\201\321\202\320\260 F7", 0));
#ifndef QT_NO_TOOLTIP
        logging->setToolTip(QApplication::translate("MainWindow", "\320\226\321\203\321\200\320\275\320\260\320\273 \321\202\320\265\321\201\321\202\320\260 F7", 0));
#endif // QT_NO_TOOLTIP
        logging->setShortcut(QApplication::translate("MainWindow", "F7", 0));
        empty->setText(QString());
        empty_2->setText(QString());
        label_9->setText(QString());
        start_btn->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\202\320\265\321\201\321\202", 0));
        stop_btn->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\277", 0));
        check_btn->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260", 0));
        inperrline->setText(QApplication::translate("MainWindow", "0", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\276\320\272 \320\267\320\260\320\277\320\270\321\201\320\270", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\276\320\272 \320\262\320\262\320\276\320\264\320\260", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\320\275\320\276 \321\204\320\260\320\271\320\273\320\276\320\262", 0));
        wrerrorline->setText(QApplication::translate("MainWindow", "0", 0));
        fsline->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273\320\276\320\262\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\241\320\262\320\276\320\261\320\276\320\264\320\275\320\276", 0));
        freeline->setText(QApplication::translate("MainWindow", "0", 0));
        writtenline->setText(QApplication::translate("MainWindow", "0", 0));
        label_8->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\321\213", 0));
        timeline->setText(QApplication::translate("MainWindow", "0", 0));
        label_11->setText(QApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\276\320\272 \320\262\321\213\320\262\320\276\320\264\320\260", 0));
        inperrline_2->setText(QApplication::translate("MainWindow", "0", 0));
        label_10->setText(QString());
        fsize_b->setSuffix(QApplication::translate("MainWindow", "mb", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\204\320\260\320\271\320\273\320\276\320\262", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\204\320\260\320\271\320\273\320\276\320\262", 0));
        accept_btn->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        label_12->setText(QString());
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "M_Fla_Test", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
