#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int input;
	std::cin >> input;

	std::vector<int> array(input);
	for (int i = 0; i < input; i++) {
		std::cin >> array[i];
	}

	sort(array.begin(), array.end());

	for (int i = 0; i < input; i++) {
		std::cout << array[i] << '\n';
	}

	return 0;
}