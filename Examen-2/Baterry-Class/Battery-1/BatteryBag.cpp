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
    this->
}

Battery & BatteryBag::operator [](int index)
{

}

void BatteryBag::addBattery(const Battery & aBattery)
{

}

BatteryBag::BatteryBag()
{

}

BatteryBag::BatteryBag(const Battery & aBattery)
{

}

BatteryBag::BatteryBag(const BatteryBag & aBag)
{

}

BatteryBag::~BatteryBag()
{

}

BatteryBag & BatteryBag::operator =(const BatteryBag & aBag);
BatteryBag & BatteryBag::operator =(const Battery & aBattery);

BatteryBag & BatteryBag::operator +(const BatteryBag & aBag);
BatteryBag & BatteryBag::operator +(const Battery & aBattery);

BatteryBag & BatteryBag::operator -(const BatteryBag & aBag);
BatteryBag & BatteryBag::operator -(const Battery & aBattery);

bool BatteryBag::operator ==(const BatteryBag & aBag) const;
bool BatteryBag::operator !=(const BatteryBag & aBag) const;

double BatteryBag::totalCharge() const;

ostream & operator <<(ostream & out, const BatteryBag & aBag);
istream & operator >>(istream & in, BatteryBag & aBag);