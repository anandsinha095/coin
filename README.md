jdcoin Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/jdcoin-Project/jdcoin.svg?branch=master)](https://travis-ci.org/jdcoin-Project/jdcoin) [![GitHub version](https://badge.fury.io/gh/jdcoin-Project%2Fjdcoin.svg)](https://badge.fury.io/gh/jdcoin-Project%2Fjdcoin)

jdcoin is an open source crypto-currency focused on fast private transactions using the Zerocoin protocol, with low transaction fees & environmental footprint.  It utilizes the first ever anonymous proof of stake protocol, called zPoS, combined with regular PoS and masternodes for securing its network. zPoS incentivises using the privacy features available in jdcoin by granting a higher block reward for zPoS over regular PoS and masternodes. In practice jdcoin has between 4 to 10 times higher use of it's privacy features in comparison to other coins that combine public and private transactions. This is thanks to innovations like zPoS and integrating the Zerocoin protocol into light/mobile wallets, allowing for a complete and lightweight privacy protocol that can be used on the go. As well as security improvements like [deterministic generation of sJDC for easy backups.](https://www.reddit.com/r/jdcoin/comments/8gbjf7/how_to_use_deterministic_zerocoin_generation/)
The goal of jdcoin is to achieve a decentralized sustainable crypto currency with near instant full-time private transactions, fair governance and community intelligence.
- Anonymized transactions & consensus using the [_Zerocoin Protocol_](http://www.jdcoin.com/skkc) and [zPoS](https://jdcoin.com/zpos/).
- light/mobile wallet privacy using the [Zerocoin Light Node Protocol](https://jdcoin.com/wp-content/uploads/2018/11/Zerocoin_Light_Node_Protocol.pdf)
- Fast transactions featuring guaranteed zero confirmation transactions, we call it _SwiftX_.
- Decentralized blockchain voting utilizing Masternode technology to form a DAO. The blockchain will distribute monthly treasury funds based on successful proposals submitted by the community and voted on by the DAO.

More information at [jdcoin.com](https://jdcoin.com) Visit our ANN thread at [BitcoinTalk](http://www.bitcointalk.org/index.php?topic=1262920)

### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoW Phase)</td><td>8,037,560 JDC</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>60,000,000 JDC</td></tr>
<tr><td>Premine</td><td>7,500,000 JDC</td></tr>
</table>


### Reward Distribution

<table>
<th colspan=4>Genesis Block</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th></tr>
<tr><td>1</td><td>7,500,000 JDC</td><td>Pre-mine - used for swap</td></tr>
</table>

### PoW Rewards Breakdown

<table>
<th>Block Height</th><th>Masternodes</th><th>Miner</th>
<tr><td>2-13440</td><td>30% (12 JDC)</td><td>70% (28 JDC)</td></tr>
</table>

### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Reward</th><th>Masternodes</th><th>Stakers</th>
<tr><td>Phase 0</td><td>13440-40320</td><td>40 JDC</td><td>45% (18 JDC)</td><td>55% (22 JDC)</td></tr>
<tr><td>Phase 1</td><td>40321-192960</td><td>40 JDC</td><td>35% (14 JDC)</td><td>65% (26 JDC)</td></tr>
<tr><td>Phase 2</td><td>192961-250000</td><td>30 JDC</td><td>27.5% (8.25 JDC)</td><td>72.5% (21.75 JDC)</td></tr>
<tr><td>Phase 3</td><td>250001-350000</td><td>15 JDC</td><td>65% (9.75 JDC)</td><td>35% (5.25 JDC)</td></tr>
<tr><td>Phase 4</td><td>350001-580000</td><td>10 JDC</td><td>65% (6.5 JDC)</td><td>35% (3.5 JDC)</td></tr>
<tr><td>Phase 5</td><td>580001-753000</td><td>5 JDC</td><td>80% (4 JDC)</td><td>20% (1 JDC)</td></tr>
<tr><td>Phase 6</td><td>753001-1000000</td><td>2.5 JDC</td><td>80% (2 JDC)</td><td>20% (0.5 JDC)</td></tr>
<tr><td>Phase 7</td><td>1000001-2500000</td><td>1.25 JDC</td><td>80% (1 JDC)</td><td>20% (0.25 JDC)</td></tr>
<tr><td>Phase 8</td><td>2500001-∞</td><td>1 JDC</td><td>80% (0.8 JDC)</td><td>20% (0.2 JDC)</td></tr>
</table>
