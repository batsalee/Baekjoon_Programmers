#include <iostream>

int main()
{
	// 다 맞으면 Accepted
	// 샘플을 틀리면 Wrong Answer
	// 샘플맞고 시스템 틀리면 Why Wrong

	int S1, S2;
	std::cin >> S1 >> S2;

	int correct, submit;
	for (int i = 0; i < S1; i++) {
		std::cin >> correct >> submit;
		if (correct != submit) {
			std::cout << "Wrong Answer";
			return 0;
		}
	}

	for (int i = 0; i < S2; i++) {
		std::cin >> correct >> submit;
		if (correct != submit) {
			std::cout << "Why Wrong!!!";
			return 0;
		}
	}

	std::cout << "Accepted";
	return 0;
}