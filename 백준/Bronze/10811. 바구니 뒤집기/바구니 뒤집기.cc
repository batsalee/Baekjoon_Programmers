#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> array(N);
	for (int i = 1; i <= array.size(); i++) {
		array[i - 1] = i;
	}

	int i, j;
	while (M--) {
		std::cin >> i >> j;
		reverse(array.begin() + i - 1, array.begin() + j);
	}
	
	for (int a : array) {
		std::cout << a << ' ';
	}
	
	return 0;
}