#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
    protected:
        string Name;
        string SSNum;
        int Age;
    
    public:
        string getName(){return this->Name;}
        string getSSNum(){return this->SSNum;}
        int getAge(){return this->Age;}

        void setName(string Name);
        void setSSNum(string SSNum);
        void setAge(int Age);

    // baiguulagchuud
        Person();
        Person(string Name, string SSNum, int Age);
};

struct Date
{
    int year;
    int month;
    int day;
};

#endif 