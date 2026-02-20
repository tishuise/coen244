#include <string>
#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(string n, double m) : Employee(n), monthlySalary(m) {}

double FullTimeEmployee::calculateSalary() { return monthlySalary; }