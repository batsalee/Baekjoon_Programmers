#include <iostream>
#include <cmath>

int main()
{
	int T;
	std::cin >> T;

	int d;
	while (T--) {
		std::cin >> d;
		for (int i = sqrt(d); i >= 0; i--) {
			if (pow(i, 2) + i <= d) {
				std::cout << i << '\n';
				break;
			}
		}
	}

	return 0;
}