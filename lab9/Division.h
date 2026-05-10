#ifndef DIVISION_H
#define DIVISION_H

#include "Employee.h"

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