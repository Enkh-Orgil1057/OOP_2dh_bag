#include "Header.h"
#include "Employee.h"

int main() {
    Division div1("Engineering");
    Division div2("Marketing");

    JobDescription jd1("Software Developer");
    JobDescription jd2("Team Lead");
    JobDescription jd3("Marketing Specialist");

    Date start1 = {2020, 3, 15};
    Employee emp1("Bat", "SS001", 30, "EMP001", "Engineer", start1, div1);
    emp1.description.push_back(jd1);
    emp1.description.push_back(jd2);

    Date ann1 = {2018, 6, 10};
    Spouse sp1("Sarnai", "SS002", 28, ann1);
    emp1.spouse = &sp1;

    Child ch1("Tulgaa", "SS003", 5, "Car");
    Child ch2("Nomin", "SS004", 3, "Doll");
    emp1.children.push_back(ch1);
    emp1.children.push_back(ch2);

    Date start2 = {2022, 7, 1};
    Employee emp2("Dorj", "SS010", 45, "EMP002", "Marketing Manager", start2, div2);
    emp2.description.push_back(jd3);

    // Employee 1 hevleh
    cout << "Name" << emp1.getName() << endl;
    cout << "Division: " << emp1.division->getDivisionName() << endl;
    cout << "SSNum: " << emp1.getSSNum() << endl;
    cout << "Age: " << emp1.getAge() << endl;
    cout << "Title: " << emp1.getTitle() << endl;
    for(int i = 0; i < emp1.description.size(); i++)
        cout << "Job: " << emp1.description[i].getDescription() << endl;
    if(emp1.spouse != nullptr)
        cout << "Spouse: " << emp1.spouse->getName() << endl;
    for(int i = 0; i < emp1.children.size(); i++)
        cout << "Child: " << emp1.children[i].getName() << endl;

    cout << endl;
    // Employee 2 hevleh
    cout << "Name" << emp2.getName() << endl;
    cout << "Division: " << emp2.division->getDivisionName() << endl;
    cout << "SSNum: " << emp2.getSSNum() << endl;
    cout << "Age: " << emp2.getAge() << endl;
    cout << "Title: " << emp2.getTitle() << endl;
    for(int i = 0; i < emp2.description.size(); i++)
        cout << "Job: " << emp2.description[i].getDescription() << endl;
    if(emp2.spouse != nullptr)
        cout << "Spouse: " << emp2.spouse->getName() << endl;
    else
        cout << "Spouse: байхгүй" << endl;

    return 0;
}