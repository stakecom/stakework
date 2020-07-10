// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STAKEWORK_QT_STAKEWORKADDRESSVALIDATOR_H
#define STAKEWORK_QT_STAKEWORKADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class StakeWorkAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StakeWorkAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** StakeWork address widget validator, checks for a valid stakework address.
 */
class StakeWorkAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StakeWorkAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // STAKEWORK_QT_STAKEWORKADDRESSVALIDATOR_H
