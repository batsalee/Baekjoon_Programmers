#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	std::cout << ( (N&1) ? "CY" : "SK" );
	
	return 0;
}