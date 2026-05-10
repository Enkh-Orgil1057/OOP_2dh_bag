#include "Person.h"

void Person :: setName(string Name)
{
    this->Name = Name;
}

void Person :: setSSNum(string SSNum)
{
    this->SSNum = SSNum;
}

void Person :: setAge(int Age)
{
    if (Age > 90){
        cout << "Nas 90 ees deesh baij bolohgui." << endl;
        return;
    }
    this->Age = Age;
}

Person :: Person()
{
    Age = 0;
    Name = "hooson";
    SSNum = "hooson";
}

Person :: Person(string Name, string SSNum, int Age)
{
    setAge(Age);
    setName(Name);
    setSSNum(SSNum);
}