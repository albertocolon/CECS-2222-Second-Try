// 2nd - Second CECS 2222 Test - Dynamic Memory
// Prof. Luis Ortiz - FA - 23
// Alberto A. Colón Reyes - ID# - 67689
// Oct. 1 2023
// Problem 2 - Battery Bag Class - Declaration

#include <iostream>
#include "BatteryBag.h"

using namespace std;

const Battery & BatteryBag::operator [](int index) const
{
    return((this->batteries)[index]);
}

Battery & BatteryBag::operator [](int index)
{
    return((this->batteries)[index]);
}

void BatteryBag::addBattery(const Battery & aBattery)
{

}

BatteryBag::BatteryBag()
{
    this->battAmount = 0;
    this->batteries = NULL;
}

BatteryBag::BatteryBag(const Battery & aBattery)
{
    this->batteries = NULL;
    (*this) = aBattery;
}

BatteryBag::BatteryBag(const BatteryBag & aBag)
{
    this->batteries = NULL;
    (*this) = aBag;
}

BatteryBag::~BatteryBag()
{
    delete[] (this->batteries);
}

BatteryBag & BatteryBag::operator =(const BatteryBag & aBag)
{
    delete[] (this->batteries);

    if(aBag.battAmount > 0)
    {
        this->batteries = new Battery[aBag.battAmount];
        for(int i =0; i < aBag.battAmount; i++)
            (*this)[i] = aBag[i];
    }
    else
        this->batteries = NULL;

    this->battAmount = aBag.battAmount;

    return(*this);
}

BatteryBag & BatteryBag::operator =(const Battery & aBattery)
{
    delete[] (this->batteries);

    if(aBattery.getCharge() != 0.0)
    {
        this->batteries = new Battery[1];
        this->battAmount = 1;
        (*this)[0] = aBattery;
    }
    else
    {
        this->batteries = NULL;
        this->battAmount = 0;
    }

    return(*this);
}

BatteryBag & BatteryBag::operator +(const BatteryBag & aBag)
{
}

BatteryBag & BatteryBag::operator +(const Battery & aBattery)
{

}

BatteryBag & BatteryBag::operator -(const BatteryBag & aBag)
{

}

BatteryBag & BatteryBag::operator -(const Battery & aBattery)
{

}

bool BatteryBag::operator ==(const BatteryBag & aBag) const
{

}

bool BatteryBag::operator !=(const BatteryBag & aBag) const
{

}

double BatteryBag::totalCharge() const
{

}

ostream & operator <<(ostream & out, const BatteryBag & aBag)
{

}

istream & operator >>(istream & in, BatteryBag & aBag)
{

}