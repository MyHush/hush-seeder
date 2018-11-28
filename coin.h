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
                                            "explorer.myhush.org",
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

// HUSH MOD
static const std::string SUBV1 = "/BalefulStatic:1.0.9/";
static const std::string SUBV2 = "/BalefulStatic:1.0.12/";
static const std::string SUBV3 = "/BalefulStatic:1.0.13/";
static const std::string SUBV4 = "/BalefulStatic:1.0.14/";
static const std::string SUBV5 = "/AuspiciousHerald:1.0.14/";
static const std::string SUBV6 = "/AuspiciousHerald:2.0.0/";
// END

#endif // __INCLUDED_COIN_H__