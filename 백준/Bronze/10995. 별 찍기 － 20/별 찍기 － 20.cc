#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		if (i & 1) std::cout << ' ';
			
		for (int j = 0; j < N; j++) { std::cout << "* "; }
		std::cout << '\n';		
	}

	return 0;
}