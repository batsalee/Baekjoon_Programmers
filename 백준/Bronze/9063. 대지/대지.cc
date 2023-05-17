#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int N;
	std::cin >> N;

	std::vector<int> x(N), y(N);
	for (int i = 0; i < N; i++) {
		std::cin >> x[i] >> y[i];
	}

	std::cout << (*max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end()))
		* (*max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end()));

	return 0;
}