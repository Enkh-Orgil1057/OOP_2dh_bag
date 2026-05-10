#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person
{
    private:
        string CompanyID;
        string Title;
        Date StartDate;

    public:
        string getCompanyID(){return CompanyID;}
        string getTitle(){return Title;}
        Date getStartDate(){return StartDate;}

        void setCompanyID(string CompanyID);
        void setTitle(string Title);
        void setStartDate(Date StartDate);

    // baiguulagchuud
        Employee();
        Employee(string Name, string SSNum, int Age, string CompanyID, string Title, Date StartDate);
};

#endif