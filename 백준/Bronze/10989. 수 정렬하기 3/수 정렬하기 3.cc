#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int count;
	std::cin >> count;

	std::vector<int> array(10001, 0);
	int input;
	for (int i = 0; i < count; i++) {
		std::cin >> input;
		array[input]++;
	}

	for (int i = 0; i < array.size(); i++) {
		for (int j = 0; j < array[i]; j++) {
			std::cout << i << '\n';
		}
	}

	return 0;
}