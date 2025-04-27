#pragma once

// Function Return Flags
enum RET_VAL{
    SUCCESS,
    FAILURE
};

// NSE L1 field size macros
#define SYMBOL_SIZE                 10
#define SERIES_SIZE                 2
#define OPEN_PRICE_SIZE             10 
#define HIGH_PRICE_SIZE             10
#define LOW_PRICE_SIZE              10
#define CLOSE_PRICE_SIZE            10
#define LAST_TRADED_PRICE           10
#define TOTAL_TRADED_QUANTITY_SIZE  12
#define AVG_TRADED_PRICE_SIZE       10
#define TOTAL_TURNOVER_SIZE         25
#define ONLINE_INDEX                8
#define INDICATIVE_CLOSE_PRICE_SIZE 110
