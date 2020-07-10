// Copyright (c) 2019 The StakeWork Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STAKEWORKPUSHBUTTON_H
#define STAKEWORKPUSHBUTTON_H

#include <QIcon>
#include <QPushButton>
#include <QPainter>
#include <QString>
#include <QWidget>

class StakeWorkPushButton : public QPushButton
{
    Q_OBJECT

public:
    StakeWorkPushButton(QString label);
    void paintEvent(QPaintEvent*);
    void setBadge(int nValue);

private:
    QIcon getBadgeIcon(int nValue);
};

#endif // STAKEWORKPUSHBUTTON_H
