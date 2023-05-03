#include <iostream>

int main()
{
	std::string jinho_mbti;
	std::cin >> jinho_mbti;

	int N;
	std::cin >> N;

	std::string freind_mbti;
	int result = 0;
	while (N--) {
		std::cin >> freind_mbti;
		result += (jinho_mbti == freind_mbti);
	}

	std::cout << result;

	return 0;
}