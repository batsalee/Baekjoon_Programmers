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

    for (int i = min; i <= max; i++) {
        if (arr[i]) std::cout << i << '\n';
    }
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;
	
	is_primenumber(num1, num2);
	
	return 0;
}