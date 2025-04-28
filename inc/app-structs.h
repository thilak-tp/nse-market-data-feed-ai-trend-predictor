//Implicit headerfiles
#include <cstdint>
//Explicit headerfiles
#include "app-defs.h"


#pragma once

#pragma pack(push, 1) // Ensure no padding between struct members

// NSE CL1 Packet Structures
// Compressed Batch Header
struct ST_COMP_BATCH_HEADER {
    char cCompOrNot;       // 0 = compressed, 1 = uncompressed
    uint16_t nDataSize;    // Size of compressed data
    uint16_t iNoOfPackets; // Number of packets in the batch
};

// Info Header
struct ST_INFO_HEADER {
    uint16_t iCode;     // Message type identifier
    uint16_t iLen;      // Length of the message
    uint32_t lSeqNo;    // Sequence number
};

// Info Trailer
struct ST_INFO_TRAILER {
    uint16_t iCheckSum; // Checksum (set to 0 if not used)
    char cEOT;          // End of Transmission character ('\r')
};

// NSE L1 Data Structure
struct ST_DATA_INFO {
    char sSymbol[SYMBOL_SIZE];                               // Security symbol
    char sSeries[SERIES_SIZE];                               // Series identifier
    char sOpenPrice[OPEN_PRICE_SIZE];                        // Opening price
    char sHighPrice[HIGH_PRICE_SIZE];                        // High price
    char sLowPrice[LOW_PRICE_SIZE];                          // Low price
    char sClosePrice[CLOSE_PRICE_SIZE];                      // Close price
    char sLastTradedPrice[LAST_TRADED_PRICE];                // Last traded price
    char sTotalTradedQty[TOTAL_TRADED_QUANTITY_SIZE];        // Total traded quantity
    char sSecurityStatus;                                    // Security status ('S' = Suspended, ' ' = Active)
    char sAverageTradePrice[AVG_TRADED_PRICE_SIZE];          // Weighted average price
    char sTotalTurnover[TOTAL_TURNOVER_SIZE];                // Total turnover
    char sOnlineIndex[ONLINE_INDEX];                         // Online index value
    char sIndicativeClosePrice[INDICATIVE_CLOSE_PRICE_SIZE]; // Indicative close price
};

// Complete Data Packet
struct ST_DATA_PACKET {
    ST_INFO_HEADER stInfoHdr;          // Info header
    ST_DATA_INFO stDataInfo; // Market data
    ST_INFO_TRAILER stInfoTrailer;     // Info trailer
};

#pragma pack(pop) // Restore default packing
