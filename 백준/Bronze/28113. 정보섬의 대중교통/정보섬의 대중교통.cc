#include <iostream>

int main()
{
	int N, A, B;
	std::cin >> N >> A >> B;

	if (A < B) std::cout << "Bus";
	else if (A == B) {
		if (N > B) std::cout << "Bus";
		else std::cout << "Anything";
	}
	else if (A > B) {
		if (N <= B) std::cout << "Subway";
		else std::cout << "Bus";
	}

	return 0;
}