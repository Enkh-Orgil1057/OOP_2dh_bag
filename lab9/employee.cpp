#include "Employee.h"

void Employee :: setCompanyID(string CompanyID)
{
    this->CompanyID = CompanyID;
}
void Employee :: setTitle(string Title)
{
    this->Title = Title;
}
void Employee :: setStartDate(Date StartDate)
{
    this->StartDate.day = StartDate.day;
    this->StartDate.month = StartDate.month;
    this->StartDate.year = StartDate.year;
}

Employee :: Employee() : Person()
{
    CompanyID = "hooson";
    Title = "hooson";
    StartDate.day = 0;
    StartDate.month = 0;
    StartDate.year = 0;
}
Employee :: Employee(string Name, string SSNum, int Age, string CompanyID, string Title, Date StartDate) : Person(Name, SSNum, Age)
{
    setCompanyID(CompanyID);
    setTitle(Title);
    setStartDate(StartDate);
}