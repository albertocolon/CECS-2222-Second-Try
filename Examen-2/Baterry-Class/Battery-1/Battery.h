// 2nd - Second CECS 2222 Test - Dynamic Memory
// Prof. Luis Ortiz - FA - 23
// Alberto A. Colón Reyes - ID# - 67689
// Oct. 1 2023
// Problem 1 - Battery Class - Declaration

#ifndef _Battery_h
#define _Battery_h

#include <iostream>
using namespace std;

class Battery
{
    private:
    double charge;

    public:
    // Constructors and Destructor
    Battery(double charge = 0.0);                               // Cosntructor with default value - Can substitute the Default constructor.
    Battery(const Battery & aBattery);                          // Copy Constructor

    ~Battery();                                                 // Destructor
    
    // Assignment operator (Overloading)
    Battery & operator = (const Battery & aBattery);

    // Operator functions overloading
    bool operator == (const Battery & aBattery) const;          // Equal to -- Operator Overloading
    bool operator != (const Battery & aBattery) const;          // Not Equal - Operator Overloading

    // Mutators & Accessors
    double getCharge() const;

    void setCharge(double charge);

    void showInfo() const;

    friend ostream & operator << (ostream & out, const Battery & aBattery);
    friend istream & operator >> (istream & in, Battery & aBattery);

};

#endif