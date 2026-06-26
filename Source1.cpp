#include<iostream>

int main()
{
	int x, y, z;

	std::cout << "Enter three number:";
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
	return 0;

}