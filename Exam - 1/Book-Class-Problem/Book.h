//
// Book.h
// Created by Alberto Colon on 9/16/23.

#ifndef _Book_h_
#define _Book_h_

#include <iostream>
using namespace std;

class Book
{
private:
	int pageAmount;
	
public:
	Book(int pageAmount = 0);
	Book(const Book & otherBook);
	~Book();
	
	Book & operator = (const Book & otherBook);
	
	// ***************************************** Possible no needed
	Book & operator = (int pageAmount);
	// ***************************************** Possible no needed
	
	void setPages(int pageAmmount);
	int getPages() const;
	
	bool operator == (const Book & otherBook) const;
	
	// ***************************************** Possible no needed
	bool operator == (int pageAmount) const;
	// ***************************************** Possible no needed
	
	
	bool operator != (const Book & otherBook) const;
	
	// ***************************************** Possible no needed
	bool operator != (int pageAmount) const;
	// ***************************************** Possible no needed	
	
	void showBookInfo() const;
	
	friend ostream & operator << (ostream & out, const Book & otherBook);
	friend istream & operator >> (istream & in, Book & otherBook);
	
};
#endif