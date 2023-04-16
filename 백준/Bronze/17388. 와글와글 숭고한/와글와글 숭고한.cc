#include <iostream>

int main()
{
	int S, K, H;
	std::cin >> S >> K >> H;

	if (S + K + H >= 100) std::cout << "OK";
	else {
		int min = S;
		if (min > K) min = K;
		if (min > H) min = H;

		if (min == S) std::cout << "Soongsil";
		else if (min == K) std::cout << "Korea";
		else if (min == H) std::cout << "Hanyang";
	}

	return 0;
}