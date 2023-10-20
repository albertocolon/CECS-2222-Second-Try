// This is the CommissionEmp.h file:
// // Sub-class Commission Employee is to be add it and declare here.

#ifndef COMMISSIONEMP_H
#define COMMISSIONEMP_H

#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

class CommissionEmp : public Employee
{
    private:
        double commissionRate;
        double grossSales;
    public:
        CommissionEmp(const string& name = " ", const int& employeeID = 0, const double& commissionRate = 0.0, const double& grossSales = 0.0);
        CommissionEmp(const CommissionEmp& aCommissionEmp);
        virtual ~CommissionEmp();
        
        CommissionEmp& operator=(const CommissionEmp& aCommissionEmp);

        void setCommissionRate(const double& commissionRate);
        void setGrossSales(const double& grossSales);

        const double& getCommissionRate() const;
        const double& getGrossSales() const;

        virtual double calculatePay() const;
        //virtual void askedInfo() const; 
        //EVEN THAT IS COMMENTED HERE, THE ASKEDINFO FUNCTION, NEEDS TO BE ADD IT ON THE HANDWRTTEN EXAM.
        virtual void displayInfo() const;

};

#endif // COMMISSIONEMP_H