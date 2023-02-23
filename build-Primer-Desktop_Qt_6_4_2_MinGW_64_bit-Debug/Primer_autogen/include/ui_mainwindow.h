/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *datoId;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *datoVoltaje;
    QLabel *label_4;
    QLineEdit *datoPosicionX;
    QLabel *label_5;
    QLineEdit *datoPosicionY;
    QLineEdit *datoRed;
    QLineEdit *datoGreen;
    QLineEdit *datoBlue;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *insertarInicio;
    QPushButton *insertarFinal;
    QPlainTextEdit *mallaMostrar;
    QPushButton *mostrarNeuronas;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(822, 348);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 61, 16));
        datoId = new QLineEdit(centralwidget);
        datoId->setObjectName("datoId");
        datoId->setGeometry(QRect(110, 50, 113, 22));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 50, 21, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 80, 49, 16));
        datoVoltaje = new QLineEdit(centralwidget);
        datoVoltaje->setObjectName("datoVoltaje");
        datoVoltaje->setGeometry(QRect(110, 80, 113, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 110, 61, 20));
        datoPosicionX = new QLineEdit(centralwidget);
        datoPosicionX->setObjectName("datoPosicionX");
        datoPosicionX->setGeometry(QRect(110, 110, 113, 22));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 140, 61, 16));
        datoPosicionY = new QLineEdit(centralwidget);
        datoPosicionY->setObjectName("datoPosicionY");
        datoPosicionY->setGeometry(QRect(110, 140, 113, 22));
        datoRed = new QLineEdit(centralwidget);
        datoRed->setObjectName("datoRed");
        datoRed->setGeometry(QRect(110, 170, 113, 22));
        datoGreen = new QLineEdit(centralwidget);
        datoGreen->setObjectName("datoGreen");
        datoGreen->setGeometry(QRect(110, 200, 113, 22));
        datoBlue = new QLineEdit(centralwidget);
        datoBlue->setObjectName("datoBlue");
        datoBlue->setGeometry(QRect(110, 230, 113, 22));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 170, 41, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 200, 41, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 230, 49, 16));
        insertarInicio = new QPushButton(centralwidget);
        insertarInicio->setObjectName("insertarInicio");
        insertarInicio->setGeometry(QRect(20, 270, 101, 31));
        insertarFinal = new QPushButton(centralwidget);
        insertarFinal->setObjectName("insertarFinal");
        insertarFinal->setGeometry(QRect(130, 270, 101, 31));
        mallaMostrar = new QPlainTextEdit(centralwidget);
        mallaMostrar->setObjectName("mallaMostrar");
        mallaMostrar->setGeometry(QRect(250, 10, 561, 251));
        mostrarNeuronas = new QPushButton(centralwidget);
        mostrarNeuronas->setObjectName("mostrarNeuronas");
        mostrarNeuronas->setGeometry(QRect(340, 270, 131, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 822, 22));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "NEURONAS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Voltaje:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n X:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n Y:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Red:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Green:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Blue:", nullptr));
        insertarInicio->setText(QCoreApplication::translate("MainWindow", "Insertar Inicio", nullptr));
        insertarFinal->setText(QCoreApplication::translate("MainWindow", "Insertar Final", nullptr));
        mostrarNeuronas->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
