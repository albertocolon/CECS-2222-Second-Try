// Definitons for all the methods of the MyString class declared in MyString.h

#include "MyString.h"
#include <iostream>
#include <cstring>

using namespace std;

MyString::MyString(const char * s = "")
{
    (*this) = s;
}

MyString::MyString(char ch)
{
    (*this) = ch;
}

MyString::MyString(const MyString & aMyString)
{
    (*this) = aMyString;
}

MyString::~MyString()
{
    // Nothing to release.
}

/*MyString & MyString::operator =(const char * s)
{
    strcpy(this->s, MAX_LEN + 1, s);
    return (*this);
}
*/

// Will continue later on this. 