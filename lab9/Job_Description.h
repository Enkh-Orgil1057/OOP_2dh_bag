#ifndef JOB_DESCRIPTION_H
#define JOB_DESCRIPTION_H

#include <string>
#include <iostream>
using namespace std;
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