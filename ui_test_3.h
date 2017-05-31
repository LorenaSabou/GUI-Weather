/********************************************************************************
** Form generated from reading UI file 'test_3.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_3_H
#define UI_TEST_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test_3Class
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *filterButton;
    QLineEdit *precipitationEdit;
    QLabel *label_2;
    QPushButton *returnButton;
    QPushButton *hourButton;
    QLineEdit *descriptionEdit;
    QLabel *label_3;
    QListWidget *listWidget;
    QLabel *title;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test_3Class)
    {
        if (Test_3Class->objectName().isEmpty())
            Test_3Class->setObjectName(QStringLiteral("Test_3Class"));
        Test_3Class->resize(861, 771);
        centralWidget = new QWidget(Test_3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 170, 611, 531));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 821, 711));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../../Pictures/wallpapers/branch_flowers_spring_90708_1920x1080.jpg")));
        filterButton = new QPushButton(centralWidget);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        filterButton->setGeometry(QRect(650, 200, 161, 61));
        QFont font;
        font.setFamily(QStringLiteral("Niagara Solid"));
        font.setPointSize(17);
        filterButton->setFont(font);
        precipitationEdit = new QLineEdit(centralWidget);
        precipitationEdit->setObjectName(QStringLiteral("precipitationEdit"));
        precipitationEdit->setGeometry(QRect(690, 150, 61, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(670, 120, 131, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Niagara Solid"));
        font1.setPointSize(15);
        label_2->setFont(font1);
        returnButton = new QPushButton(centralWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(650, 380, 161, 71));
        returnButton->setFont(font);
        hourButton = new QPushButton(centralWidget);
        hourButton->setObjectName(QStringLiteral("hourButton"));
        hourButton->setGeometry(QRect(650, 590, 161, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Niagara Solid"));
        font2.setPointSize(19);
        hourButton->setFont(font2);
        descriptionEdit = new QLineEdit(centralWidget);
        descriptionEdit->setObjectName(QStringLiteral("descriptionEdit"));
        descriptionEdit->setGeometry(QRect(660, 550, 131, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(670, 520, 111, 21));
        QFont font3;
        font3.setFamily(QStringLiteral("Niagara Solid"));
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_3->setFont(font3);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 170, 609, 502));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(220, 100, 401, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Niagara Solid"));
        font4.setPointSize(36);
        title->setFont(font4);
        Test_3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test_3Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 861, 26));
        Test_3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test_3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Test_3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test_3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Test_3Class->setStatusBar(statusBar);

        retranslateUi(Test_3Class);

        QMetaObject::connectSlotsByName(Test_3Class);
    } // setupUi

    void retranslateUi(QMainWindow *Test_3Class)
    {
        Test_3Class->setWindowTitle(QApplication::translate("Test_3Class", "Test_3", 0));
        label->setText(QString());
        filterButton->setText(QApplication::translate("Test_3Class", "FILTER ", 0));
        label_2->setText(QApplication::translate("Test_3Class", "Enter precipitation:", 0));
        returnButton->setText(QApplication::translate("Test_3Class", "RETURN ", 0));
        hourButton->setText(QApplication::translate("Test_3Class", "GET HOURS", 0));
        label_3->setText(QApplication::translate("Test_3Class", "Enter description:", 0));
        title->setText(QApplication::translate("Test_3Class", "DAILY WEATHER", 0));
    } // retranslateUi

};

namespace Ui {
    class Test_3Class: public Ui_Test_3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_3_H
