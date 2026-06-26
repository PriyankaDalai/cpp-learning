#include<iostream>

int main()
{
	/*-----------------------------Leap Year------------------------------*/
	int year;
	std::cout << "Enter a year: ";
	std::cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 != 0 || year % 400 == 0)
		{
			std::cout << year << " is leap year";
		}
		else
		{
			std::cout << year << " is not a leap year";
		}
	}
	else
	{
		std::cout << year << " is not a leap year";
	}

	return 0;
	
	/*-----------------------------Even or Odd------------------------------*/
	//int x;

	//std::cout << "Enter a number:";
	//std::cin >> x;

	////int largest = x;

	//if (x%2 == 0)
	//{
	//	std::cout << x << " is even";
	//}

	//else
	//{
	//	std::cout << x << " is odd";
	//}
	//
	//return 0;

	
		
	/*-----------------------------Largest Number------------------------------*/
	// int x, y, z; 
	/*std::cout << "Enter three number:"; 
	std::cin >> x >> y >> z; 
	
	int largest = x; 
	if (y > largest) 
	{ 
		largest = y; 
	} 
	if (z > largest) 
	{ 
		largest = z; 
	} 
	std::cout << largest; 
	return 0;*/

	
	/*-----------------------------Hello World------------------------------*/
	// int x, y, z; 
	/*std::cout << "Hello World";
	return 0;*/

}