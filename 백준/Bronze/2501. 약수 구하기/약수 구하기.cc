#include <iostream>

int main() {
	int N, K;
	std::cin >> N >> K;

	int count = 0, i;
	for (i = 1; i <= N; i++) {
		if (N % i == 0) count++;
		if (count == K) break;
	}
	std::cout << (i > N ? 0 : i);

	return 0;
}