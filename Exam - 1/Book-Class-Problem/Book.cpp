//
// Book.cpp
// Created by Alberto Colon on 9/16/23.

#include "Book.h"

#include <iostream>
using namespace std;

// Book class's Methods (functions) definitions.
Book::Book(int pageAmount)
{
	this->pageAmount = pageAmount;
}

Book::Book(const Book & otherBook)
{
	this->pageAmount = otherBook.pageAmount;
}

Book::~Book()
{
	
}

Book & Book::operator = (const Book & otherBook)
{
	this->pageAmount = otherBook.pageAmount;
	return(*this);
}


// ***************************************** Possible no needed
Book & Book::operator = (int pageAmount)
{
	this->pageAmount = pageAmount;
	return(*this);
}
// ***************************************** Possible no needed


void Book::setPages(int pageAmount)
{
	this->pageAmount = pageAmount;
}

int Book::getPages() const
{
	return (this->pageAmount);
}

bool Book::operator == (const Book & otherBook) const
{
	return(this->pageAmount == otherBook.pageAmount);
}


// ***************************************** Possible no needed
bool Book::operator == (int pageAmount) const
{
	return(this->pageAmount == pageAmount);
}
// ***************************************** Possible no needed


bool Book::operator != (const Book & otherBook) const
{
	return(this->pageAmount != otherBook.pageAmount);
}


// ***************************************** Possible no needed
bool Book::operator != (int pageAmount) const
{
	return(this->pageAmount != pageAmount);
}
// ***************************************** Possible no needed


void Book::showBookInfo() const
{
	cout << "The Book information is:" << endl;
	cout << "Page amount: " << pageAmount << endl;
}

ostream & operator << (ostream & out, const Book & otherBook)
{
	out << "Book Information:" << endl;
	out << "Page Amount: " << otherBook.pageAmount;
	return(out);
}

istream & operator >> (istream & in, Book & otherBook)
{
	in >> otherBook.pageAmount;
	return(in);
}