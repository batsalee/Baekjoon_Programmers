#include <iostream>
#include <vector>

int main()
{
	const int stroke[] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

	std::string A, B;
	std::cin >> A >> B;

	// init
	int len = A.length();
	std::vector<int> harmony;
	for (int i = 0; i < len; i++) {
		harmony.push_back(stroke[A[i] - 'A']);
		harmony.push_back(stroke[B[i] - 'A']);
	}

	for (int i = len * 2 - 1; i >= 2; i--) {
		for (int j = 0; j < i; j++) {
			harmony[j] = (harmony[j] + harmony[j + 1]) % 10;
		}
	}

	std::cout << harmony[0] << harmony[1];

	return 0;
}