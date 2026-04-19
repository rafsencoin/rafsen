# 🐇 Rafsen (RAF)

<div align="center">

![Rafsen Banner](https://rafsencoin.com)

**The First Iraqi Cryptocurrency**

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![Network](https://img.shields.io/badge/Network-Mainnet-brightgreen.svg)](https://rafsencoin.com)
[![Algorithm](https://img.shields.io/badge/Algorithm-Scrypt_PoW-orange.svg)](https://rafsencoin.com)
[![Supply](https://img.shields.io/badge/Max_Supply-100M_RAF-blueviolet.svg)](https://rafsencoin.com)
[![Website](https://img.shields.io/badge/Website-rafsencoin.com-blue.svg)](https://rafsencoin.com)

[🌐 Website](https://rafsencoin.com) • [🔍 Explorer](https://rafsencoin.com/explorer) • [📄 Whitepaper](https://rafsencoin.com)

-----

*“Rafsen RAF - The Iraqi Crypto 30/03/2026”*
*— Genesis Block Message*

</div>

-----

## 📖 What is Rafsen?

**Rafsen (RAF)** is a fully independent, decentralized Layer 1 cryptocurrency born in Iraq on **March 30, 2026**. It is built on a Scrypt proof-of-work consensus mechanism with a fixed maximum supply of **100,000,000 RAF**.

Rafsen is not a token — it is its own blockchain. Every RAF in existence was earned through mining. There is no pre-mine, no ICO, no founder allocation, and no central authority.

> 🇮🇶 The first cryptocurrency to carry the Iraqi identity — transparent, decentralized, and open to everyone.

-----

## ⚡ Network Specifications

|Parameter           |Value                           |
|:-------------------|:-------------------------------|
|**Ticker Symbol**   |`RAF`                           |
|**Network Type**    |Layer 1 — Independent Blockchain|
|**Consensus**       |Scrypt Proof-of-Work            |
|**Block Time**      |~1 minute                    |
|**Block Reward**    |50 RAF (Era 1)                  |
|**Maximum Supply**  |100,000,000 RAF                 |
|**Halving Interval**|Every 210,000 blocks (~4 years) |
|**P2P Port**        |`18777`                         |
|**RPC Port**        |`18776`                         |
|**Address Prefix**  |`D`                             |
|**WIF Prefix**      |`0x9E`                          |
|**Confirmations**   |6 blocks                        |
|**Genesis Date**    |March 30, 2026                  |
|**Seed Node**       |`seed.rafsencoin.com`           |

-----

## 🔗 Genesis Block

```
Hash:    00000a7d3416ab3657589bdef0f10f7805ffffcc2b0bf4452750d90aebafb77e
nNonce:  3560849
nBits:   0x1e0ffff0
nTime:   1774950005
Message: "Rafsen RAF - The Iraqi Crypto 30/03/2026"
```

> The genesis nNonce was found through real Scrypt computation — legitimate proof-of-work from block zero.

-----

## 📊 Tokenomics & Halving Schedule

|Era            |Block Range      |Block Reward|RAF Issued|Duration|
|:-------------:|:----------------|:----------:|:--------:|:------:|
|**1** ← Current|0 – 210,000      |**50 RAF**  |10,500,000|~4 years|
|2              |210,001 – 420,000|25 RAF      |5,250,000 |~4 years|
|3              |420,001 – 630,000|12.5 RAF    |2,625,000 |~4 years|
|4              |630,001 – 840,000|6.25 RAF    |1,312,500 |~4 years|
|…              |Continues halving|→ 0         |Remainder |~64 eras|

**Total Maximum Supply: 100,000,000 RAF** — 100% mined, 0% pre-mined.

-----

## 🔐 Cryptographic Foundation

|Component             |Standard            |
|:---------------------|:-------------------|
|**Proof-of-Work**     |Scrypt (memory-hard)|
|**Signatures**        |ECDSA secp256k1     |
|**Hashing**           |SHA256d             |
|**Address Derivation**|RIPEMD160 + SHA256  |
|**Block Version**     |2                   |

-----

## 🛠️ Building from Source

### Requirements

```bash
sudo apt-get install build-essential libtool autotools-dev automake pkg-config
sudo apt-get install libssl-dev libboost-all-dev libminiupnpc-dev
sudo apt-get install libdb++-dev libzmq3-dev
```

### Compile (Linux)

```bash
./configure --without-gui --disable-bench --disable-tests
make -j2
```

### Compile (Windows cross-compile)

```bash
cd depends
make HOST=x86_64-w64-mingw32 -j2 NO_QT=1
cd ..
CONFIG_SITE=$PWD/depends/x86_64-w64-mingw32/share/config.site \
./configure --host=x86_64-w64-mingw32 --without-gui --disable-bench --disable-tests
make -j2
```

-----

## 🚀 Running a Node

### Configuration (`~/.raf/rafsen.conf`)

```ini
server=1
daemon=1
rpcuser=YOUR_USERNAME
rpcpassword=YOUR_STRONG_PASSWORD
rpcallowip=127.0.0.1
rpcport=18776
port=18777
addnode=187.77.87.53
txindex=1
```

### Start the Node

```bash
./src/rafd -datadir=$HOME/.raf
```

### Useful Commands

```bash
# Check block count
./src/rafsen-cli -datadir=$HOME/.raf -rpcport=18776 getblockcount

# Get network info
./src/rafsen-cli -datadir=$HOME/.raf -rpcport=18776 getnetworkinfo

# Generate new address
./src/rafsen-cli -datadir=$HOME/.raf -rpcport=18776 getnewaddress

# Check balance
./src/rafsen-cli -datadir=$HOME/.raf -rpcport=18776 getbalance
```

-----

## ⛏️ Mining

Rafsen uses **Scrypt** — compatible with CPU, GPU, and ASIC miners.

### CPU Mining (cpuminer-multi)

```bash
./cpuminer -a scrypt \
  -o http://127.0.0.1:18776 \
  -u YOUR_RPC_USER \
  -p YOUR_RPC_PASSWORD \
  -t 4 \
  --coinbase-addr=YOUR_RAF_ADDRESS
```

### GPU Mining

Compatible with: `sgminer`, `ccminer`, `T-Rex Miner` (Scrypt algorithm)

-----

## 🗺️ Roadmap

|Phase      |Status    |Milestone                                                           |
|:---------:|:--------:|:-------------------------------------------------------------------|
|**Phase 1**|✅ Complete|Mainnet launch, genesis block, explorer, Windows binary, SSL website|
|**Phase 2**|🔥 Active  |GitHub release, Telegram community, Twitter, CoinGecko/CMC listing  |
|**Phase 3**|⏳ Upcoming|Flutter mobile wallet, Telegram Mini App, first exchange listing    |
|**Phase 4**|🔮 Future  |Third-party wallets, major exchange listings, developer API         |

-----

## 🌐 Infrastructure

|Service             |URL                                                       |
|:-------------------|:---------------------------------------------------------|
|**Official Website**|[rafsencoin.com](https://rafsencoin.com)                  |
|**Block Explorer**  |[rafsencoin.com/explorer](https://rafsencoin.com/explorer)|
|**Seed Node**       |`seed.rafsencoin.com:18777`                               |
|**IP**              |`187.77.87.53:18777`                                      |

-----

## 📁 Repository Structure

```
rafsen/
├── src/              # Core node source code
│   ├── rafd          # Linux binary (after build)
│   └── rafsen-cli    # CLI tool (after build)
├── depends/          # Build dependencies
├── doc/              # Documentation
├── contrib/          # Scripts and tools
└── share/            # Configuration files
```

-----

## ⚠️ Disclaimer

Rafsen is an open-source, community-driven project. This software is provided “as is” without warranty. Cryptocurrencies carry inherent risks. Always conduct your own research.

-----

## 📜 License

This project is licensed under the **MIT License** — see the <LICENSE> file for details.

-----

<div align="center">

**Rafsen (RAF) — The Iraqi Cryptocurrency** 🇮🇶

*Built with ❤️ — Genesis: March 30, 2026*

[rafsencoin.com](https://rafsencoin.com)

</div>
