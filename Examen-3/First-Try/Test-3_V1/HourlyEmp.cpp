// Here are the defions of the functions declared in the class HourlyEmp

#include "HourlyEmp.h"
#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

HourlyEmp::HourlyEmp(const string& name, const int& employeeID, const double& hourlyRate, const double& hoursWorked)
: Employee(name, employeeID), hourlyRate(hourlyRate), hoursWorked(hoursWorked)
{ }

HourlyEmp::HourlyEmp(const HourlyEmp& anHourlyEmp)
: Employee(anHourlyEmp), hourlyRate(anHourlyEmp.hourlyRate), hoursWorked(anHourlyEmp.hoursWorked)
{ }

HourlyEmp::~HourlyEmp()
{ }
        
HourlyEmp&HourlyEmp::HourlyEmp::operator=(const HourlyEmp& anHourlyEmp)
{
    if (this != &anHourlyEmp) {
        Employee::operator=(anHourlyEmp);
        hourlyRate = anHourlyEmp.hourlyRate;
        hoursWorked = anHourlyEmp.hoursWorked;
    }
    return *this;

}

void HourlyEmp::setHourlyRate(const double& hourlyRate)
{

}

void HourlyEmp::setHoursWorked(const double& hoursWorked)
{

}

const double& HourlyEmp::getHourlyRate() const
{

}

const double& HourlyEmp::getHoursWorked() const
{

}

double HourlyEmp::calculatePay() const
{

}

/*void HourlyEmp::askedInfo() const
{

}
*/
//EVEN THAT IS COMMENTED HERE, THE ASKEDINFO FUNCTION, NEEDS TO BE ADD IT ON THE HANDWRTTEN EXAM.

void HourlyEmp::displayInfo() const
{

}
