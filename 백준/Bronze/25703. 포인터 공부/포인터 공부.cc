#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	std::cout << "int a;\n";
	std::cout << "int *ptr = &a;\n";

	for (int i = 2; i <= N; i++) {
		std::cout << "int " << std::string(i, '*') << "ptr" << i << " = &ptr";
		
		if (i == 2) std::cout << ";\n";
		else std::cout << i - 1 << ";\n";
	}

	return 0;
}