#include <iostream>

int main()
{
	std::string str1, str2;
	std::cin >> str1 >> str2;

	std::cout << (str1.length() >= str2.length() ? "go" : "no");

	return 0;
}