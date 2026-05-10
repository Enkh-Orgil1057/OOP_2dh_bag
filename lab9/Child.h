#ifndef CHILD_H
#define CHILD_H

#include "Person.h"

class Child : public Person
{
    private:
        string FavoriteToy;
    
    public:
        string getFavoriteToy(){return FavoriteToy;}
        void setFavoriteToy(string FavoriteToy);

    // baguulachuud
        Child();
        Child(string Name, string SSNum, int Age, string FavoriteToy);
};

#endif