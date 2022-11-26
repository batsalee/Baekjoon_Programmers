#include <iostream>
#include <vector>
#include <cmath>

void is_primenumber(int min, int max)
{
    std::vector<bool> arr(max + 1, true);
	arr[0] = false;
	arr[1] = false;

	for (int i = 2; i <= sqrt(max); i++) {
		if (arr[i])
		{
			for (int j = 2 * i; j <= max; j += i) {
				arr[j] = false;
			}
		}
    }

	int count = 0;
    for (int i = min+1; i <= max; i++) {
		if (arr[i]) count++;
    }
	std::cout << count << std::endl;
}

int main()
{
	int input;

	while (true)
	{
		std::cin >> input;
		if (input == 0) break;
		is_primenumber(input, 2 * input);
	}
	
	return 0;
}