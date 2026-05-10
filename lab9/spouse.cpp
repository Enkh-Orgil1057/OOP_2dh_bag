#include "Spouse.h"

void Spouse :: setAnniversaryDate(Date Anniversary)
{
    AnniversaryDate.day = Anniversary.day;
    AnniversaryDate.month = Anniversary.month;
    AnniversaryDate.year = Anniversary.year;
}

Spouse :: Spouse() : Person()
{
    AnniversaryDate.day = 0;
    AnniversaryDate.month = 0;
    AnniversaryDate.year = 0;
}

Spouse :: Spouse(string Name, string SSNum, int Age, Date Anniversary) : Person(Name, SSNum, Age)
{
    setAnniversaryDate(Anniversary);
}