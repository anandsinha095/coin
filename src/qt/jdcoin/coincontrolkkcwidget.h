// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2019-2020 The Jdcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLJDCWIDGET_H
#define COINCONTROLJDCWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlJDCWidget;
}

class CoinControlJDCWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlJDCWidget(QWidget *parent = nullptr);
    ~CoinControlJDCWidget();

private:
    Ui::CoinControlJDCWidget *ui;
};

#endif // COINCONTROLJDCWIDGET_H
