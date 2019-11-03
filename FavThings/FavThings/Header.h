#pragma once
#include <iostream>
#include <string>
using namespace std;

class Beer
{
private:
    string name;
    string brewery;
    string type;
    double abv;
    int rating;
public:
    Beer();
    Beer(string nam, string brew, string tp, double ab, int rate);
    string getName();
    string getBrewery();
    string getType();
    double getAbv();
    int getRating();
    void setName(string nam);
    void setBrewery(string brew);
    void setType(string tp);
    void setAbv(int ab);
    void setRating(int rate);
    void getBeerInpt();
    friend ostream& operator<<(ostream &output, Beer &i);
    
};
