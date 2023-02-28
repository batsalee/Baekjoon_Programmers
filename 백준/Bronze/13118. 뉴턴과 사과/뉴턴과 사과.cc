#include <iostream>

int main()
{
	int p[4];
	for (int i = 0; i < 4; i++) { std::cin >> p[i]; }

	int x, y, r;
	std::cin >> x >> y >> r;

	int flag = 0;
	for (int i = 0; i < 4; i++) { 
		if (p[i] == x) {
			std::cout << i + 1;
			flag = 1;
		}
	}

	if (!flag) std::cout << 0;

	return 0;
}