/****************************************************************************************
** Author: Parker Howell	
** Date: 1-27-16
** Description: Main menu system to get user data and run the selected functions.
**              Will display the function results. 
****************************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include "StrReverse.hpp"
#include "IntSum.hpp"
#include "TriNumber.hpp"

// Note: system("CLS") works with win / visual studio. Use "clear" for *nix...
//       change value in Game.hpp too!
#define CLEAR_SCREEN "clear"


int main(){

	int choice,             // which Main Menu choice is selected
	    arrInput,           // holds values entered by user for array
	    userArray[50],      // holds values entered by user 
	    arrIndex,       // how many values are in userArray
        tri;                // holds user enterd triangle number

    std::string strIn;      // holds user entered string



	// Main menu to select the recursion test
	do {
		system(CLEAR_SCREEN);
		std::cout << "Welcome to a basic recursion exercise." << std::endl;
		std::cout << "Please select 1 - 4." << std::endl;
		std::cout << "1. String Reverse" << std::endl;
		std::cout << "2. Integer Sum" << std::endl;
		std::cout << "3. Triangular Number" << std::endl;
		std::cout << "4. Exit" << std::endl;

		std::cin >> choice;

		// validate Main Menu choice
		while (choice < 1 || choice > 4){
			std::cout << "Please select 1 - 4." << std::endl;
			std::cin >> choice;
		}

		//if the user didn't exit
		if (choice != 4){
			system(CLEAR_SCREEN);



			// for String Reverse
			if (choice == 1){
				std::cout << "Please enter a string valaue to be reversed." << std::endl;
				std::cin.ignore();
				std::getline(std::cin, strIn);
				std::cout << std::endl;

				// recursive call
				std::cout << strReverse(strIn);
			}






			// for Integer Sum
			else if (choice == 2){
				arrIndex = 0;
				std::cout << "Please enter up to 50 integers to Sum them." << std::endl;
				std::cout << "Enter Zero as the last number." << std::endl;
				std::cin >> arrInput;

				// populate the array with user enterd input
				while (arrInput != 0) {
					userArray[arrIndex] = arrInput;
					arrIndex++;
					std::cin >> arrInput;
				}
				std::cout << std::endl;

				// recursive call
				std::cout << "The sum total of the entered integers is: "
					      << intSum(userArray, arrIndex) << std::endl;

				//for formatting...
				std::cout << std::endl;
				std::cin.ignore();
			}





			// for Triangular Number
			else // (choice == 3)
			{
				std::cout << "Please enter an integer value between 0 and " << std::endl;
				std::cout << "50 to see the amount of items for that " << std::endl;
			    std::cout << "integers Triangular Number." << std::endl;
				std::cin >> tri;

				// validate number entered
				while (tri < 0 || tri > 50){
					std::cout << "Please enter an integer value between 1 and 50." << std::endl;
					std::cin >> tri;
				}
				std::cout << std::endl;

				// recursive call
				std::cout << "A triangle with " << tri << " rows has " 
					      << triNumber(tri) << " items." << std::endl;

				std::cin.ignore();

			}

			std::cout << std::endl;
			std::cout << "Press \"Enter\" to continue to the Main menu.";
			std::cin.get();
		}
	} while (choice != 4);

	return 0;
}