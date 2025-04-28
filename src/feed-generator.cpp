//Implicit headerfiles
#include<string>
#include<cstring>

//Explicit headerfiles
#include "app-defs.h"
#include "app-structs.h"
#include "common.h"

// Feed Generator 
// To do
// Read all nse symbols and populate the structure with random price information
// populate checksum information as well as compression
//send this information over multicast 


// A function to generate random symbols
std::string generateRandomSymbol( int length )
{
    std::string symbol;
    for(int i=0; i<length; i++)
    {
        symbol +=  static_cast<char>('A' + rand()% 26);
    }

    return symbol;

    
}

// A function to populate the structure with generated random values
RET_VAL generateFieldValues( ST_DATA_INFO *data )
{
    memset( data, 0, sizeof( data ));
    std::string symbol = generateRandomSymbol(10);
    strncpy(data->sSymbol, symbol.c_str(), SYMBOL_SIZE);
    std::string series = "EQ";
  
    return SUCCESS;
}

RET_VAL generateFeed()
{
    return SUCCESS;    
}

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed random once

    std::string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string result;

    for (int i = 0; i < 10; ++i)
        result += letters[rand() % letters.size()];

    std::cout << "Random 10-letter string: " << result << std::endl;
    return 0;
}
