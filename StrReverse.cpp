/****************************************************************************************
** Author: Parker Howell
** Date: 1-27-16
** Function: strReverse(std::string str)
** Description: Takes the passed in string, reverses the values, and returns the
**              reversed string followed by a \n.
** Parameters: str - a string value.
** Pre-Conditions: a valid string.
** Post-Conditions: returns the reversed string.
****************************************************************************************/


#include "StrReverse.hpp"
#include <string>

std::string strReverse(std::string str)
{
	// base case. Return the \n character after reversing the string
	if (str.size() == 0)
		return "\n";

	// return the last character of the string with a recursive call to get 
	// the next to last character...
	else{
		return str[str.size() - 1] + strReverse(str.substr(0, str.size() - 1));
		
	}
}