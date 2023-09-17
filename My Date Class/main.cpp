// This C++ program is just to test the MyDate Class

#include "MyDate.h"
#include <iostream>

using namespace std;

int main()
{
	MyDate d1, d2(2, 18, 2011);
	
	cout << "Fecha #1: " << d1 << endl << endl;
	cout << "Fecha #2: " << d2 << endl << endl;
	
	cout << "Entre nueva Fecha #1:" << endl;
	cin >> d1;
	
	cout << "Entre nueva Fecha #2:" << endl;
	cin >> d2;
	
	cout << endl << endl;
	
	if (d1 == d2)
		cout << d1 << " = " << d2 << endl << endl;
	else
		if (d1 > d2)
			cout << d1 << " > " << d2 << endl << endl;
		else
			cout << d1 << " < " << d2 << endl << endl;
	
	return 0;
}