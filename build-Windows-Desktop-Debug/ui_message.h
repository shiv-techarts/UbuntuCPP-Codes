/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Message
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *Message)
    {
        if (Message->objectName().isEmpty())
            Message->setObjectName(QString::fromUtf8("Message"));
        Message->resize(388, 296);
        buttonBox = new QDialogButtonBox(Message);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Message);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 110, 191, 41));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Message);
        QObject::connect(buttonBox, SIGNAL(accepted()), Message, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Message, SLOT(reject()));

        QMetaObject::connectSlotsByName(Message);
    } // setupUi

    void retranslateUi(QDialog *Message)
    {
        Message->setWindowTitle(QApplication::translate("Message", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Message", "Are You Sure", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Message: public Ui_Message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
