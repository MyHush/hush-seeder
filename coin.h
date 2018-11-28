// Copyright (c) 2018 The Bitcoin developers
// Copyright (c) 2018 The HUSH developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const std::string mainnet_seeds[] = {"explorer.myhush.org",
                                            "dnsseed.myhush.org",
                                            "dnsseed.bleuzero.com",
                                            ""};

static const std::string testnet_seeds[] = {"stilgar.myhush.org",
                                            ""};

static const int mainnet_port = 8888;
static const int testnet_port = 18888;
static unsigned char pchMessageStart[4] = { 0x24, 0xe9, 0x27, 0x64 };
static unsigned char pchMessageStart_testnet[4] = { 0xfa, 0x1a, 0xf9, 0xbf };

#define REQUIRE_VERSION 170002
static const int minimunClientVersion = 170002;
static const int PROTOCOL_VERSION = 170002;
static const int INIT_PROTO_VERSION = 209;

#endif // __INCLUDED_COIN_H__