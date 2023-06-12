#include <iostream>
#include <string>

std::string dp(std::string str)
{
	while (str.length() > 2) {
		int len = str.length();
	
		// recursion
		for (int i = 0; i < len - 1; i++) {
			str[i] = ((str[i] - '0') + (str[i + 1] - '0')) % 10 + '0';
		}
		str = str.substr(0, len - 1);
	}

	return str;
}

int main()
{
	// input
	std::string A, B;
	std::cin >> A >> B;

	// init
	std::string str = "";
	for (int i = 0; i < 8; i++) {
		str = str + A[i] + B[i];
	}

	std::cout << dp(str);

	return 0;
}