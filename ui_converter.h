/********************************************************************************
** Form generated from reading UI file 'converter.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTER_H
#define UI_CONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_converter
{
public:
    QWidget *centralwidget;
    QLabel *label_9;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QLabel *label_4;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *x_input;
    QLineEdit *y_input;
    QLineEdit *z_input;
    QPushButton *pushButton;
    QSplitter *splitter_2;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *x_output;
    QSpacerItem *verticalSpacer;
    QLabel *y_output;
    QSpacerItem *verticalSpacer_3;
    QLabel *z_output;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *converter)
    {
        if (converter->objectName().isEmpty())
            converter->setObjectName(QString::fromUtf8("converter"));
        converter->resize(522, 340);
        centralwidget = new QWidget(converter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(190, 0, 191, 61));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(70, 90, 389, 122));
        splitter_3->setStyleSheet(QString::fromUtf8(""));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8(""));
        splitter->setOrientation(Qt::Vertical);
        label_4 = new QLabel(splitter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setIndent(66);
        splitter->addWidget(label_4);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        x_input = new QLineEdit(layoutWidget);
        x_input->setObjectName(QString::fromUtf8("x_input"));

        verticalLayout_2->addWidget(x_input);

        y_input = new QLineEdit(layoutWidget);
        y_input->setObjectName(QString::fromUtf8("y_input"));

        verticalLayout_2->addWidget(y_input);

        z_input = new QLineEdit(layoutWidget);
        z_input->setObjectName(QString::fromUtf8("z_input"));

        verticalLayout_2->addWidget(z_input);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);

        splitter->addWidget(layoutWidget);
        splitter_3->addWidget(splitter);
        pushButton = new QPushButton(splitter_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        splitter_3->addWidget(pushButton);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setStyleSheet(QString::fromUtf8(""));
        splitter_2->setOrientation(Qt::Vertical);
        label_5 = new QLabel(splitter_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setIndent(66);
        splitter_2->addWidget(label_5);
        layoutWidget1 = new QWidget(splitter_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        x_output = new QLabel(layoutWidget1);
        x_output->setObjectName(QString::fromUtf8("x_output"));
        x_output->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(x_output);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        y_output = new QLabel(layoutWidget1);
        y_output->setObjectName(QString::fromUtf8("y_output"));
        y_output->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(y_output);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        z_output = new QLabel(layoutWidget1);
        z_output->setObjectName(QString::fromUtf8("z_output"));
        z_output->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(z_output);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, verticalLayout_4);

        splitter_2->addWidget(layoutWidget1);
        splitter_3->addWidget(splitter_2);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 250, 93, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(232, 220, 101, 29));
        converter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(converter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 522, 26));
        converter->setMenuBar(menubar);
        statusbar = new QStatusBar(converter);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        converter->setStatusBar(statusbar);

        retranslateUi(converter);

        QMetaObject::connectSlotsByName(converter);
    } // setupUi

    void retranslateUi(QMainWindow *converter)
    {
        converter->setWindowTitle(QCoreApplication::translate("converter", "converter", nullptr));
        label_9->setText(QCoreApplication::translate("converter", "CK-42 to WGS-84 Converter", nullptr));
        label_4->setText(QCoreApplication::translate("converter", "CK-42", nullptr));
        label->setText(QCoreApplication::translate("converter", "X", nullptr));
        label_2->setText(QCoreApplication::translate("converter", "Y", nullptr));
        label_3->setText(QCoreApplication::translate("converter", "Z", nullptr));
        pushButton->setText(QCoreApplication::translate("converter", "Convert", nullptr));
        label_5->setText(QCoreApplication::translate("converter", "WGS-84", nullptr));
        label_6->setText(QCoreApplication::translate("converter", "X", nullptr));
        label_7->setText(QCoreApplication::translate("converter", "Y", nullptr));
        label_8->setText(QCoreApplication::translate("converter", "Z", nullptr));
        x_output->setText(QCoreApplication::translate("converter", "0", nullptr));
        y_output->setText(QCoreApplication::translate("converter", "0", nullptr));
        z_output->setText(QCoreApplication::translate("converter", "0", nullptr));
        pushButton_2->setText(QCoreApplication::translate("converter", "Results", nullptr));
        pushButton_3->setText(QCoreApplication::translate("converter", "Swap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class converter: public Ui_converter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTER_H
