#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> array(N, 0);
	int i, j, k;
	while (M--) {
		std::cin >> i >> j >> k;
		for (int index = i - 1; index <= j - 1; index++) {
			array[index] = k;
		}
	}

	for (int a : array) {
		std::cout << a << ' ';
	}

	return 0;
}