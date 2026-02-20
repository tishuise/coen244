#include "Employee.h"

#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

class PartTimeEmployee : public Employee{

    private:
        double hourlyRate;
        int hoursWorked;

    public:
        PartTimeEmployee(string, double, int);
        double calculateSalary() override;
};

#endif