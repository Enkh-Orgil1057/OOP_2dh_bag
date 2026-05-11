#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Header.h"

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
    /*
    Anhdagch baiguulagch oruulagui. Uunii shaltgaan ni Employee object ni 
    zaaval division, boloh jobdescription-toi baih shaardlagatai. Anhdagch baiguulagchaar
    tedgeert utga onooh bolomjgui tul logic-iin huvid aldaa garah ym
    */
        Employee(string Name, string SSNum, int Age, string CompanyID, string Title, Date StartDate, Division &division);

    // busad classuudtai hariltsaa
        Spouse *spouse;             // 0...1 spouse
        vector <Child> children;    // 0...N child
        Division *division;         // 1 division
        vector <JobDescription> description; // 1...N jobdesc
};

#endif