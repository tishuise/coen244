#include "Employee.h"

#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

class FullTimeEmployee : public Employee {

    private:
        double monthlySalary;

    public:
        FullTimeEmployee(string, double);
        double calculateSalary() override;
};

#endif