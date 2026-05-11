#ifndef DIVISION_H
#define DIVISION_H

#include <iostream>
#include <string>
using namespace std;

class Division
{
    private:
        string DivisionName;

    public:
        string getDivisionName(){return DivisionName;}
        void setDivisionName(string DivisonName);

    // baiguulagchuud
        Division();
        Division(string DivisionName);
};

#endif