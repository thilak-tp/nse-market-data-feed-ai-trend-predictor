//Implicit headerfiles
#include<iostream>
#include<cstring>

//Explicit headerfiles
#include "main.h"
#include "app-structs.h"
#include "feed-generator.h"
#include "common.h"

// To Do 
// Create structures for NSE CM L1 Feed
// Make a function to read symbols from the given CSV files taken from nSE
int main()
{
    ST_DATA_INFO data;
    std::memset(&data,0, sizeof(data));
    std::cout<<"This is the main program"<<std::endl;
    generateFieldValues(&data);
    displayStructureData(&data);    
    return 0;
}