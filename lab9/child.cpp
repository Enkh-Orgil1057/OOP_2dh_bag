#include "Child.h"

void Child :: setFavoriteToy(string FavoriteToy)
{
    this->FavoriteToy = FavoriteToy;
}

Child :: Child() : Person()
{
    FavoriteToy = "hooson";
}
Child :: Child(string Name, string SSNum, int Age, string FavoriteToy) : Person(Name, SSNum, Age)
{
    setFavoriteToy(FavoriteToy);
}