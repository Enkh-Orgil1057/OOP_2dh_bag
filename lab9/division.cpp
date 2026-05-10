#include "Division.h"

void Division :: setDivisionName(string DivisonName)
{
    this->DivisionName = DivisionName;
}

Division :: Division()
{
    DivisionName = "Hooson";
}
Division :: Division(string DivisionName)
{
    setDivisionName(DivisionName);
}