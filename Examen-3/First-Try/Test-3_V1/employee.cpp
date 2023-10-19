#include "employee.h"

// Constructor
Employee::Employee(const string& name, const int& employeeID) : name(name), employeeID(employeeID) {}

// Copy constructor
Employee::Employee(const Employee& anEmployee) : name(anEmployee.name), employeeID(anEmployee.employeeID) {}

// Destructor
Employee::~Employee() {}

// Assignment operator
Employee& Employee::operator=(const Employee& anEmployee) {
    if (this != &anEmployee) {
        name = anEmployee.name;
        employeeID = anEmployee.employeeID;
    }
    return *this;
}

// Setter for name
void Employee::setName(const string& name) {
    this->name = name;
}

// Setter for employeeID
void Employee::setEmployeeID(const int& employeeID) {
    this->employeeID = employeeID;
}

// Getter for name
const string& Employee::getName() const {
    return name;
}

// Getter for employeeID
const int& Employee::getEmployeeID() const {
    return employeeID;
}

// Display employee information
void Employee::displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "Employee ID: " << employeeID << endl;
}
