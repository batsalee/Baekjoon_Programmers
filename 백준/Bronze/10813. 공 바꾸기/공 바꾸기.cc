#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> array(N);
	for (int i = 1; i <= array.size(); i++) {
		array[i-1] = i;
	}

	int i, j;
	while (M--) {
		std::cin >> i >> j;
		std::swap(array[i-1], array[j-1]);
	}

	for (int a : array) {
		std::cout << a << ' ';
	}

	return 0;
}