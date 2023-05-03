#include <iostream>

int main()
{
	int T;
	std::cin >> T;

	int N, D, v, f, c;
	while (T--) {
		std::cin >> N >> D;
		int result = 0;
		while (N--) {
			std::cin >> v >> f >> c;
			if (v * f / c >= D) result++;
		}
		std::cout << result << '\n';
	}

	return 0;
}