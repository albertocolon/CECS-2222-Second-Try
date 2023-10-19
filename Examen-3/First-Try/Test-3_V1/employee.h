// This is the first version, first try to do the class declaration for the employee class.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
    protected:
        string name;
        int employeeID;
    public:
        Employee(const string& name = " ", const int& employeeID = 0);
        Employee(const Employee& anEmployee);
        virtual ~Employee();
        
        Employee& operator=(const Employee& anEmployee);

        void setName(const string& name);
        void setEmployeeID(const int& employeeID);

        const string& getName() const;
        const int& getEmployeeID() const;


        virtual double calculatePay() const = 0;
        void displayInfo() const;

};


#endif // EMPLOYEE_H