#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> v(n + 5, -1);
	v[2] = 1;
	v[4] = 2;
	v[5] = 1;

	for (int i = 5; i <= n; i++) {
		if (i % 5 == 0) {
			v[i] = i / 5; // greedy
			continue;
		}

		if (v[i - 2] != -1) v[i] = v[i - 2] + 1;
		else if(v[i - 5] != -1) v[i] = v[i - 5] + 1;
	}

	std::cout << v[n];

	return 0;
}