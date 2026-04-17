# 🐇 Rafsen (RAF) — The Iraqi Cryptocurrency

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![Network: Mainnet](https://img.shields.io/badge/Network-Mainnet-green.svg)](https://rafsencoin.com)
[![Algorithm: Scrypt](https://img.shields.io/badge/Algorithm-Scrypt-orange.svg)](https://rafsencoin.com)

> The first Iraqi cryptocurrency — A decentralized Layer 1 Scrypt PoW blockchain.

**Website:** [rafsencoin.com](https://rafsencoin.com) | **Explorer:** [rafsencoin.com/explorer](https://rafsencoin.com/explorer)

---

## What is Rafsen?

Rafsen (RAF) is a decentralized peer-to-peer cryptocurrency built for speed, security, and accessibility. It is a fully independent Layer 1 blockchain with its own genesis block, consensus rules, and network identity — born in Iraq on March 30, 2026.

## Specifications

| Parameter | Value |
|-----------|-------|
| Ticker | RAF |
| Algorithm | Scrypt PoW |
| Block Time | ~2.5 minutes |
| Block Reward | 50 RAF |
| Max Supply | 100,000,000 RAF |
| Halving | Every 210,000 blocks |
| P2P Port | 18777 |
| RPC Port | 18776 |
| Address Prefix | D |
| Genesis Date | March 30, 2026 |
| Genesis Hash | 00000a7d3416ab3657589bdef0f10f7805ffffcc2b0bf4452750d90aebafb77e |

## Genesis Message

"Rafsen RAF - The Iraqi Crypto 30/03/2026"

## Building

./configure --without-gui --disable-bench --disable-tests
make -j2

## Running

./src/rafd -datadir=$HOME/.raf
./src/rafsen-cli -datadir=$HOME/.raf -rpcport=18776 getblockcount

## Mining

cpuminer -a scrypt -o http://127.0.0.1:18776 -u rafuser -p rafpass123 --coinbase-addr=YOUR_ADDRESS

## Connect to Network

Add to ~/.raf/rafsen.conf:
server=1
rpcuser=YOUR_USERNAME
rpcpassword=YOUR_STRONG_PASSWORD
addnode=187.77.87.53

## Links

- Website: https://rafsencoin.com
- Explorer: https://rafsencoin.com/explorer
- Whitepaper: https://rafsencoin.com

## License

MIT License — 2026 Rafsen Project
