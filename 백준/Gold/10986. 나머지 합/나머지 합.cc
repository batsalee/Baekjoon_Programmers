#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, M;
	std::cin >> N >> M;

	std::vector<int> ps(N + 1, 0);
	std::vector<long long> count(M, 0);
	int input;

	for (int i = 1; i < N + 1; i++) {
		std::cin >> input;
		ps[i] = (ps[i - 1] + (input % M)) % M;
		count[ps[i]]++;
	}

	long long answer = count[0];
	for (int i = 0; i < M; i++) {
		answer += count[i] * (count[i] - 1) / 2;
	}
	
	std::cout << answer;
	
	return 0;
}