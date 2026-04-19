// Copyright (c) 2022 The Rafsen Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Utility functions for RPC commands
 */
#ifndef RAFSEN_WALLET_UTIL_H
#define RAFSEN_WALLET_UTIL_H

#include "fs.h"
#include "util.h"

fs::path GetBackupDirFromInput(std::string strUserFilename);

#endif // RAFSEN_WALLET_UTIL_H
