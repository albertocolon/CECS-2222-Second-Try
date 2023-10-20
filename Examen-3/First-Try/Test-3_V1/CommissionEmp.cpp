// Here is the defion of the functions of the CommissionEmp class.

#include "CommissionEmp.h"
#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

CommissionEmp::CommissionEmp(const string& name, const int& employeeID, const double& commissionRate, const double& grossSales)
: Employee(name, employeeID), commissionRate(commissionRate), grossSales(grossSales)
{ }

CommissionEmp::CommissionEmp(const CommissionEmp& aCommissionEmp)
: Employee(aCommissionEmp), commissionRate(aCommissionEmp.commissionRate), grossSales(aCommissionEmp.grossSales)
{ }

CommissionEmp::~CommissionEmp()
{ }

CommissionEmp&CommissionEmp::CommissionEmp::operator=(const CommissionEmp& aCommissionEmp)
{
    if (this != &aCommissionEmp) {
        Employee::operator=(aCommissionEmp);
        commissionRate = aCommissionEmp.commissionRate;
        grossSales = aCommissionEmp.grossSales;
    }
    return *this;

}

void CommissionEmp::setCommissionRate(const double& commissionRate)
{
    this->commissionRate = commissionRate;
}

void CommissionEmp::setGrossSales(const double& grossSales)
{
    this->grossSales = grossSales;
}

const double& CommissionEmp::getCommissionRate() const
{
    return(this->commissionRate);
}

const double& CommissionEmp::getGrossSales() const
{
    return(this->grossSales);
}

double CommissionEmp::calculatePay() const
{
    return(this->commissionRate * this->grossSales);
}

/*void CommissionEmp::askedInfo() const
{

}*/
// Here is the definition of the functions of the askedInfo class.

/*void displayInfo() const
{
    cout << "Employee name: " << getName() << endl;
    cout << "Employee ID: " << getEmployeeID() << endl;
    cout << "Employee commission rate: " << getCommissionRate() << endl;
    cout << "Employee gross sales: " << getGrossSales() << endl;
    cout << "Employee pay: " << calculatePay() << endl;
}
*/

// Here are the definitions of all the CommissionEmp class's functions.