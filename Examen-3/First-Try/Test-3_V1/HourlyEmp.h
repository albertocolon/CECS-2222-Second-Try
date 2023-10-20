// Sub-class Hourly Employee is to be add it and declare here. 

#ifndef HOURLYEMP_H
#define HOURLYEMP_H

#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

class HourlyEmp : public Employee
{
    private:
        double hourlyRate;
        double hoursWorked;
    public:
        HourlyEmp(const string& name = " ", const int& employeeID = 0, const double& hourlyRate = 0.0, const double& hoursWorked = 0.0);
        HourlyEmp(const HourlyEmp& anHourlyEmp);
        virtual ~HourlyEmp();
        
        HourlyEmp& operator=(const HourlyEmp& anHourlyEmp);

        void setHourlyRate(const double& hourlyRate);
        void setHoursWorked(const double& hoursWorked);

        const double& getHourlyRate() const;
        const double& getHoursWorked() const;

        virtual double calculatePay() const;
        //virtual void askedInfo() const; 
        //EVEN THAT IS COMMENTED HERE, THE ASKEDINFO FUNCTION, NEEDS TO BE ADD IT ON THE HANDWRTTEN EXAM.
        virtual void displayInfo() const;

};

#endif // HOURLYEMP_H