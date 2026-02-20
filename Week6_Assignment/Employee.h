#include <string>
using namespace std;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{

    protected:
        string name;
        
    public:
        Employee(string);
        virtual double calculateSalary() = 0;
        void display();
};

#endif