#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int input, sum;
	std::vector<int> divisors;

	while (true) {
		std::cin >> input;
		if (input == -1) break;
				
		divisors.clear();
		divisors.push_back(1);
		sum = 1;

		for (int i = 2; i < input; i++) {
			if (input % i == 0) {
				divisors.push_back(i);
				sum += i;
			}
		}

		if (sum == input) {
			std::cout << input << " = ";
			for (int i = 0; i < divisors.size() - 1; i++) {
				std::cout << divisors[i] << " + ";
			}
			std::cout << divisors.back() << '\n';
		}
		else
			std::cout << input << " is NOT perfect.\n";		
	}

	return 0;
}