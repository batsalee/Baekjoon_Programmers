#include <iostream>
#include <array>
#include <numeric>

int main()
{
	std::array<int, 4> arr;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cin >> arr[j];
		}

		switch (std::accumulate(arr.begin(), arr.end(), 0)) {
		case 0:
			std::cout << "D" << '\n';
			break;		
		case 1:
			std::cout << "C" << '\n';
			break;
		case 2:
			std::cout << "B" << '\n';
			break;
		case 3:
			std::cout << "A" << '\n';
			break;
		case 4:
			std::cout << "E" << '\n';
			break;
		}
	}

	return 0;
}