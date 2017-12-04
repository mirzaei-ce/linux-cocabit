// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COCABIT_QT_COCABITADDRESSVALIDATOR_H
#define COCABIT_QT_COCABITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CocabitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CocabitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Cocabit address widget validator, checks for a valid cocabit address.
 */
class CocabitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CocabitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // COCABIT_QT_COCABITADDRESSVALIDATOR_H
