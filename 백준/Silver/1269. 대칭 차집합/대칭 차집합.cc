#include <iostream>
#include <set>

int main()
{
	// 입력받는 part
	int sizeA, sizeB;
	std::cin >> sizeA >> sizeB;

	std::set<int> setA, setB;
	int input;
	for (int i = 0; i < sizeA; i++) {
		std::cin >> input;
		setA.insert(input);
	}
	for (int i = 0; i < sizeB; i++) {
		std::cin >> input;
		setB.insert(input);
	}

	// 대칭 차집합 구하는 part
	int result = 0;
	for (int i : setA) {
		auto itr = setB.find(i);
		if (itr == setB.end()) result++;
	}
	for (int i : setB) {
		auto itr = setA.find(i);
		if (itr == setA.end()) result++;
	}

	std::cout << result;

	return 0;
}