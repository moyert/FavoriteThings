#include <iostream>
#include <string>
#include "Header.h"
#include "BeerList.h"

using namespace std;

int main()
{
    beerList iobject;
    bool newItem = true;
    char answer;
do
{
    iobject.addItem();
    if (iobject.getTotal() >=100)
    {
        newItem = false;
        break;
    }
    cout << "Would you like to add another beer? (Y/N)" << endl;
    cin >> answer;
    
    if (answer == 'y' || answer == 'Y')
    {
        cout<<"adding"<<endl;
        newItem = true;
    }
    else
    {
        newItem = false;
    }
    
}while(newItem == true);
    
    iobject.showItem();

    
    system("pause");
    return 0;
}


