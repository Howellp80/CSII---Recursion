/****************************************************************************************
** Author: Parker Howell
** Date: 1-27-16
** Function: intSum(int arr[], int amount)
** Description: Sums the values of a passed in array.
** Parameters: int arr[] - array of ints
**             int amount - how many values the array has.
** Pre-Conditions: valid arr[] and int amount values.
** Post-Conditions: returns the sum total of arr[].
****************************************************************************************/

#include "IntSum.hpp"

int intSum(int arr[], int index)
{
	// base case returns 0
	if (index == 0)
		return 0;

	// returns the last element plus the next to last recursivly.
	else
		return arr[index - 1] + intSum(arr, index - 1);

}