#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, I;
	std::cin >> N >> I;

	std::vector<std::string> handles(N);
	for (int i = 0; i < N; i++) {
		std::cin >> handles[i];
	}

	sort(handles.begin(), handles.end());

	std::cout << handles[I - 1];

	return 0;
}