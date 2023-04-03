#include <iostream>

int main()
{
	std::string short_title;
	std::cin >> short_title;

	if (short_title == "NLCS") std::cout << "North London Collegiate School";
	else if (short_title == "BHA") std::cout << "Branksome Hall Asia";
	else if (short_title == "KIS") std::cout << "Korea International School";
	else if (short_title == "SJA") std::cout << "St. Johnsbury Academy";	

	return 0;
}