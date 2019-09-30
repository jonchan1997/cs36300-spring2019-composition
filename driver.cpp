#include "Base_Array.h"
#include "Array.h"
#include "Fixed_Array.h"
#include "Queue.h"
#include "Stack.h"


#include <iostream>
#include <cstdlib>

// Main function
int main()
{
	bool QUIT = false;
	int input=0;
	while(!(QUIT))
	{
		std::cout << "Please make a Selection:" << std::endl;
		std::cout << "1. ENTER CALCULATION" << std::endl;
		std::cout << "2. QUIT" << std::endl;
		std::cout << std::endl;
		std::cout << "~";
		std::cin >> input;
		std::cout << std::endl;
		if(input == 1)
		{
			std::cout << "~";
			std::cin >> input;			
			std::cout << std::endl;
		}
		else if(input == 2)
		{
			QUIT=true;
			break;
		}
		else
		{
			//error entry
			std::cout << "Illegal Input Value, Try Again!" << std::endl;
			std::cout << std::endl;
			continue;
		}
	}
	return 0;


}