// 2nd - Second CECS 2222 Test - Dynamic Memory
// Prof. Luis Ortiz - FA - 23
// Alberto A. Colón Reyes - ID# - 67689
// Oct. 1 2023
// Problem 1 - Battery Class - Definitions

#include "Battery.h"
#include <iostream>

using namespace std;


Battery::Battery(double charge = 0.0)
{
    this->charge = charge;
}

Battery::Battery(const Battery & aBattery)
{
    this->charge = aBattery.charge;
}

Battery::~Battery(){}

Battery & Battery::operator = (const Battery & aBattery)
{
    this->charge = aBattery.charge;
    return(*this);
}

bool Battery::operator == (const Battery & aBattery) const
{
    return(this->charge == aBattery.charge);
}

bool Battery::operator != (const Battery & aBattery) const
{
    return(this->charge != aBattery.charge);
}

double Battery::getCharge() const
{
    return(this->charge);
}

void Battery::setCharge(double charge)
{
    this->charge = charge;
}

void Battery::showInfo() const
{
    cout << "Esta batería tiene " << charge << " V. de capacidad de carga." << endl;
}

ostream & operator << (ostream & out, const Battery & aBattery)
{
    out << "Esta bateria tiene " << aBattery.charge << " V. de capacidad." << endl;
    return (out);
}

istream & operator >> (istream & in, Battery & aBattery)
{
    in >> aBattery.charge;
    return (in);
}
