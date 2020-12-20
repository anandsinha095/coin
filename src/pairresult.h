// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2018-2020 The Jdcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Jdcoin_PAIRRESULT_H
#define Jdcoin_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //Jdcoin_PAIRRESULT_H
