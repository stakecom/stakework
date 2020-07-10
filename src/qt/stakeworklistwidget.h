// Copyright (c) 2019 The StakeWork Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STAKEWORKLISTWIDGET_H
#define STAKEWORKLISTWIDGET_H

#include <QFrame>
#include <QLabel>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QString>
#include <QStringList>
#include <QVBoxLayout>
#include <QWidget>

typedef std::function<bool(QString)> ValidatorFunc;

class StakeWorkListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit StakeWorkListWidget(QWidget *parent, QString title, ValidatorFunc validator);

    QStringList getEntries();

private:
    QListWidget* listWidget;
    QLineEdit* addInput;
    QPushButton* removeBtn;
    QLabel* warningLbl;

    ValidatorFunc validatorFunc;

private Q_SLOTS:
    void onInsert();
    void onRemove();
    void onSelect(QListWidgetItem*);
};

#endif // STAKEWORKLISTWIDGET_H
