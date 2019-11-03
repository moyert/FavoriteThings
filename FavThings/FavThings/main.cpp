#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

Beer::Beer()
{
    name = " ";
    brewery = " ";
    type = " ";
    abv = 0;
    rating = 0;
}
Beer::Beer(string nam, string brew, string tp, double ab, int rate)
{
    name = nam;
    brewery = brew;
    type = tp;
    abv = ab;
    rating = rate;
}
string Beer::getName()
{
    return name;
}
string Beer::getBrewery()
{
    return brewery;
}
string Beer::getType()
{
    return type;
}
double Beer::getAbv()
{
    return abv;
}
int Beer::getRating()
{
    return rating;
}
void Beer::setName(string nam)
{
    name = nam;
}
void Beer::setBrewery(string brew)
{
    brewery = brew;
}
void Beer::setType(string tp)
{
    type = tp;
}
void Beer::setAbv(int ab)
{
    abv = ab;
}
void Beer::setRating(int rate)
{
    rating = rate;
}
void Beer::getBeerInpt()
{
    cin.clear();
    cin.ignore();
    
    cout << "Please enter beer name: " << endl;
    getline(cin, name);
    cout << "Please enter brewery: " << endl;
    getline(cin, brewery);
    cout << "Please enter beer type: " << endl;
    getline(cin, type);
    cout << "Please enter the abv: " << endl;
    cin >> abv;
    cout << "Please enter your rating 1-5: " << endl;
    cin >> rating;
    
    cout <<"********** EntrySaved ***********" << endl;

}
ostream& operator<<(ostream &output, Beer& beer)
{
    output <<"--------------------------------------" <<endl;
    output <<"-------- YOUR FAVORITE BEERS ---------" << endl;
    output <<"-                                    -" << endl;
    output <<"-                                    -" << endl;
    output <<"-       Name: "<< beer.name <<"       -" << endl;
    output <<"-    Brewery: "<< beer.brewery <<"    -" << endl;
    output <<"-       Type: "<< beer.type <<"       -" << endl;
    output <<"-        ABV: "<< beer.abv <<"        -" << endl;
    output <<"-     Rating: "<< beer.rating <<"     -" << endl;
    output <<"-                                    -" << endl;
    output <<"-                                    -" << endl;
    output <<"--------------------------------------" <<endl;
    
    return output;
}
