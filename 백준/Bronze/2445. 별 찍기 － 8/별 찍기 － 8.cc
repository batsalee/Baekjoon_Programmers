#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {
		std::cout << std::string(i, '*') 
			<< std::string(N - i, ' ')
			<< std::string(N - i, ' ') 
			<< std::string(i, '*') 
			<< '\n';
	}
	for (int i = N - 1; i >= 1; i--) {
		std::cout << std::string(i, '*')
			<< std::string(N - i, ' ')
			<< std::string(N - i, ' ')
			<< std::string(i, '*')
			<< '\n';
	}

	return 0;
}