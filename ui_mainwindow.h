/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *add;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *updatetask;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *updatestart;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *updateend;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLineEdit *updatepriority;
    QPushButton *update;
    QPushButton *update_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *addtask;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *addstart;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *addend;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *addpriority;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLineEdit *deletetask;
    QPushButton *delete_2;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QLineEdit *freeagv;
    QPushButton *free;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(691, 510);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(490, 70, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 149, 560, 42));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_7->addWidget(label_7);

        updatetask = new QLineEdit(layoutWidget);
        updatetask->setObjectName(QStringLiteral("updatetask"));

        verticalLayout_7->addWidget(updatetask);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_8->addWidget(label_8);

        updatestart = new QLineEdit(layoutWidget);
        updatestart->setObjectName(QStringLiteral("updatestart"));

        verticalLayout_8->addWidget(updatestart);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_9->addWidget(label_9);

        updateend = new QLineEdit(layoutWidget);
        updateend->setObjectName(QStringLiteral("updateend"));

        verticalLayout_9->addWidget(updateend);


        horizontalLayout_2->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_10->addWidget(label_10);

        updatepriority = new QLineEdit(layoutWidget);
        updatepriority->setObjectName(QStringLiteral("updatepriority"));

        verticalLayout_10->addWidget(updatepriority);


        horizontalLayout_2->addLayout(verticalLayout_10);

        update = new QPushButton(centralWidget);
        update->setObjectName(QStringLiteral("update"));
        update->setGeometry(QRect(490, 210, 75, 23));
        update_2 = new QPushButton(centralWidget);
        update_2->setObjectName(QStringLiteral("update_2"));
        update_2->setGeometry(QRect(490, 410, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 560, 42));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        addtask = new QLineEdit(widget);
        addtask->setObjectName(QStringLiteral("addtask"));

        verticalLayout->addWidget(addtask);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        addstart = new QLineEdit(widget);
        addstart->setObjectName(QStringLiteral("addstart"));

        verticalLayout_2->addWidget(addstart);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        addend = new QLineEdit(widget);
        addend->setObjectName(QStringLiteral("addend"));

        verticalLayout_3->addWidget(addend);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        addpriority = new QLineEdit(widget);
        addpriority->setObjectName(QStringLiteral("addpriority"));

        verticalLayout_4->addWidget(addpriority);


        horizontalLayout->addLayout(verticalLayout_4);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 310, 137, 71));
        verticalLayout_13 = new QVBoxLayout(widget1);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_11->addWidget(label_11);

        deletetask = new QLineEdit(widget1);
        deletetask->setObjectName(QStringLiteral("deletetask"));

        verticalLayout_11->addWidget(deletetask);


        verticalLayout_13->addLayout(verticalLayout_11);

        delete_2 = new QPushButton(widget1);
        delete_2->setObjectName(QStringLiteral("delete_2"));

        verticalLayout_13->addWidget(delete_2);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(370, 310, 137, 71));
        verticalLayout_14 = new QVBoxLayout(widget2);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_12 = new QLabel(widget2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_12->addWidget(label_12);

        freeagv = new QLineEdit(widget2);
        freeagv->setObjectName(QStringLiteral("freeagv"));

        verticalLayout_12->addWidget(freeagv);


        verticalLayout_14->addLayout(verticalLayout_12);

        free = new QPushButton(widget2);
        free->setObjectName(QStringLiteral("free"));

        verticalLayout_14->addWidget(free);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 691, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        add->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", 0));
        label_7->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\345\220\215", 0));
        label_8->setText(QApplication::translate("MainWindow", "\350\265\267\347\202\271", 0));
        label_9->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271", 0));
        label_10->setText(QApplication::translate("MainWindow", "\344\274\230\345\205\210\347\272\247", 0));
        update->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", 0));
        update_2->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272", 0));
        label->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\345\220\215", 0));
        addtask->setText(QApplication::translate("MainWindow", "a", 0));
        label_2->setText(QApplication::translate("MainWindow", "\350\265\267\347\202\271", 0));
        addstart->setText(QApplication::translate("MainWindow", "0", 0));
        label_3->setText(QApplication::translate("MainWindow", "\347\273\210\347\202\271", 0));
        addend->setText(QApplication::translate("MainWindow", "1", 0));
        label_4->setText(QApplication::translate("MainWindow", "\344\274\230\345\205\210\347\272\247", 0));
        addpriority->setText(QApplication::translate("MainWindow", "0", 0));
        label_11->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\345\220\215", 0));
        delete_2->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0));
        label_12->setText(QApplication::translate("MainWindow", "\347\251\272\351\227\262\345\260\217\350\275\246", 0));
        free->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
