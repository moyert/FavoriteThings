#pragma once
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

class beerList
{
    Beer items[100];
    int num;
    int total;
public:
    beerList();
    int addItem();
    bool findBeer(Beer);
    int getTotal();
    void showItem();
    
};
