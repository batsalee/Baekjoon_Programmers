#include <iostream>
#include <vector>
#include <numeric>

void fast()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
}

int main() {
	fast();

	int N;
	std::cin >> N;

	std::vector<int> tree(N);
	std::cin >> tree[0] >> tree[1];

	int gcd = tree[1] - tree[0];
	for (int i = 2; i < N; i++) {
		std::cin >> tree[i];
		gcd = std::gcd(gcd, tree[i] - tree[i - 1]);
	}

	std::cout << (tree.back() - tree.front()) / gcd - N + 1;

	return 0;
}