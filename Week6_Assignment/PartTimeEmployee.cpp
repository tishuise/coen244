#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(string n, double r, int w) : Employee(n), hourlyRate(r), hoursWorked(w) {}

double PartTimeEmployee::calculateSalary() { return hourlyRate * hoursWorked; }