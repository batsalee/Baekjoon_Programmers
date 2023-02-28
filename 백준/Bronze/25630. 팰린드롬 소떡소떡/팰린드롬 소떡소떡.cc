#include <iostream>

int main()
{
	int len;
	std::string str;
	std::cin >> len >> str;

	int answer = 0;
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) answer++;
	}

	std::cout << answer;

	return 0;
}