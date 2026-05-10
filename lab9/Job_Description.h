#ifndef JOB_DESCRIPTION_H
#define JOB_DESCRIPTION_H

#include "Employee.h"

class JobDescription
{
    private:
        string Description;
    
    public:
        string getDescription(){return Description;}
        void setDescription(string Description);

    // baiguulagchuud
        JobDescription();
        JobDescription(string Description);
};

#endif