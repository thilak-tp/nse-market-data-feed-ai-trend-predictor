#include<iostream>
#include "app-structs.h"

// A function to display the data stored in the given feed structure
void displayStructureData( ST_DATA_INFO *data)
{
    std::cout<<"Symbol: "<<data->sSymbol<<std::endl;
    std::cout<<"Series: "<<data->sSeries<<std::endl;
    std::cout<<"Open Price: "<<data->sOpenPrice<<std::endl;
    std::cout<<"High Price: "<<data->sHighPrice<<std::endl;
    std::cout<<"Low Price: "<<data->sLowPrice<<std::endl;
    std::cout<<"Close Price: "<<data->sClosePrice<<std::endl;
    std::cout<<"Last Traded Price: "<<data->sLastTradedPrice<<std::endl;
    std::cout<<"Total Traded Quantity: "<<data->sTotalTradedQty<<std::endl;
    std::cout<<"Security Status: "<<data->sSecurityStatus<<std::endl;
    std::cout<<"Average Trade Price: "<<data->sAverageTradePrice<<std::endl;
    std::cout<<"Total Turnover: "<<data->sTotalTurnover<<std::endl;
    std::cout<<"Online Index: "<<data->sOnlineIndex<<std::endl;
    std::cout<<"Indicative Close Price: "<<data->sIndicativeClosePrice<<std::endl;
}