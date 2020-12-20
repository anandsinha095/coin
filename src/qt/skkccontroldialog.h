// Copyright (c) 2017-2020 The PIVX developers
// Copyright (c) 2018-2020 The Jdcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef sJDCCONTROLDIALOG_H
#define sJDCCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "skkc/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class sJDCControlDialog;
}

class CsJDCControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CsJDCControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CsJDCControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CsJDCControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class sJDCControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit sJDCControlDialog(QWidget *parent);
    ~sJDCControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::sJDCControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CsJDCControlWidgetItem;

private Q_SLOTS:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // sJDCCONTROLDIALOG_H
