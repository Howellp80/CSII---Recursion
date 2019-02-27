/****************************************************************************************
** Author: Parker Howell
** Date: 1-27-16
** Function: triNumber(int n)
** Description: returns the amount of objects in a Triangular Number with n rows.
**              Kinka like bowling pins.  4 rows = 10 pins.
** Parameters: int n  -  the amount of rows the Triangular number has
** Pre-Conditions: valid int n value.
** Post-Conditions: returns the amount of items that form a triangle with n rows.
****************************************************************************************/

#include "TriNumber.hpp"

int triNumber(int n)
{
	// base case returns 0
	if (n == 0)
		return 0;

	// returns the largest row, plus the next smallest one recursivly 
	else
		return n + triNumber(n - 1);

}