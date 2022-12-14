#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> x, y;

	int input;
	for (int i = 0; i < 3; i++) {
		std::cin >> input;
		x.push_back(input);
		std::cin >> input;
		y.push_back(input);
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	if (x[0] == x[1]) std::cout << x[2] << ' ';
	else std::cout << x[0] << ' ';

	if (y[0] == y[1]) std::cout << y[2] << ' ';
	else std::cout << y[0] << ' ';

	return 0;
}