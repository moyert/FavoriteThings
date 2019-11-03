#include <iostream>
#include <string>
#include "Header.h"
#include "BeerList.h"
using namespace std;

beerList::beerList()
{
    num = 0;
    total = 0;
}
bool beerList::findBeer(Beer beer)
{
    for (int i = 0; i < total; i++)
    {
        if(beer.getName() == items[i].getName())
        {
            cout << "Beer " << items[i].getName() << "already exists!" << endl;
            cout << "Please enter a different beer" << endl;
            return false;
        }
    }
    return true;
}
int beerList::addItem()
{
    Beer addNewBeer;
    addNewBeer.getBeerInpt();
    if (findBeer(addNewBeer))
    {
        items[total] = addNewBeer;
        total++;
    }
    return 0;
}
int beerList::getTotal()
{
    return total;
}
void beerList::showItem()
{
    int i;
    for(i = 0; i < total; i++)
    {
        cout << items[i];
    }
}
