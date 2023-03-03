#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int N, P;
	std::cin >> N >> P;

	std::vector<int> prices;
	if (N >= 5) prices.push_back( std::max(P - 500, 0) );
	if (N >= 10) prices.push_back(P * 0.9);
	if (N >= 15) prices.push_back( std::max(P - 2000, 0) );
	if (N >= 20) prices.push_back(P * 0.75);

	sort(prices.begin(), prices.end());
	if (N >= 5) std::cout << prices[0];
	else std::cout << P;

	return 0;
}