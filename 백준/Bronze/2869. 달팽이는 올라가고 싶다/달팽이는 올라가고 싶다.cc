#include <iostream>

int main()
{
	int plus, minus, height;
	std::cin >> plus >> minus >> height;

	int result = ((height - plus) % (plus - minus)) ? ((height - plus) / (plus - minus))+1 : ((height - plus) / (plus - minus));
	std::cout << result + 1;

	return 0;
}