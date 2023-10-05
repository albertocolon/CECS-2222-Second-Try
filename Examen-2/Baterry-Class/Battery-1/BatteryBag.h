// 2nd - Second CECS 2222 Test - Dynamic Memory
// Prof. Luis Ortiz - FA - 23
// Alberto A. Colón Reyes - ID# - 67689
// Oct. 1 2023
// Problem 2 - Battery Bag Class - Declaration

#ifndef _BatteryBag_h
#define _BatteryBag_h

#include <iostream>
#include "Battery.h"

using namespace std;

class BatteryBag
{
    private:
    Battery * batteries;
    int battAmount;

    const Battery & operator [](int index) const;
    Battery & operator [](int index);

    void addBattery(const Battery & aBattery);

    public:
    BatteryBag();
    BatteryBag(const Battery & aBattery);
    BatteryBag(const BatteryBag & aBag);

    ~BatteryBag();

    BatteryBag & operator =(const BatteryBag & aBag);
    BatteryBag & operator =(const Battery & aBattery);

    BatteryBag & operator +(const BatteryBag & aBag);
    BatteryBag & operator +(const Battery & aBattery);

    BatteryBag & operator -(const BatteryBag & aBag);
    BatteryBag & operator -(const Battery & aBattery);

    bool operator ==(const BatteryBag & aBag) const;
    bool operator !=(const BatteryBag & aBag) const;

    double totalCharge() const;

    friend ostream & operator <<(ostream & out, const BatteryBag & aBag);
    friend istream & operator >>(istream & in, BatteryBag & aBag);

};

#endif