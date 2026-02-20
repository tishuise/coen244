#include <iostream>
#include <string>
using namespace std;

#include "Employee.h"
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"

int main() {
    
    Employee* e1 = new FullTimeEmployee("Sara", 2000);
    Employee* e2 = new PartTimeEmployee("Tina", 20, 16);

    e1->display();
    cout << "Salary: " << e1->calculateSalary() << "$\n\n";

    e2->display();
    cout << "Salary: " << e2->calculateSalary() << "$\n"; 

    delete e1;
    delete e2;

    return 0;

}
