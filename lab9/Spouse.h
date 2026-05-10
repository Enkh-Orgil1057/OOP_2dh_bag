#ifndef SPOUSE_H
#define SPOUSE_H

#include "Person.h"

class Spouse : public Person
{
    private:
        Date AnniversaryDate;
    
    public:
        Date getAnniversaryDate(){return AnniversaryDate;}
        void setAnniversaryDate(Date Anniversary);

    // baiguulagch
        Spouse();
        Spouse(string Name, string SSNum, int Age, Date Anniversary);
};

#endif