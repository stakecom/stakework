// Copyright (c) 2019 The VEIL developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STAKEWORK_GENERATESEED_H
#define STAKEWORK_GENERATESEED_H

#include <uint256.h>

namespace stakework {
uint512 GenerateNewMnemonicSeed(std::string& mnemonic, const std::string& strLanguage);
}

#endif //STAKEWORK_GENERATESEED_H
