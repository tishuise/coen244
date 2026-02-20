#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee(string n) : name(n) {}

void Employee::display() { cout << "Employee's name: " << name << "\n"; }
