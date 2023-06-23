#include <iostream>
#include <stack>

int main()
{
	int N;
	std::cin >> N;

	std::stack<int> s;
	int input;
	for (int i = 0; i < N; i++) {
		std::cin >> input;
		s.push(input);
	}

	int higher = 0, now, count = 0;
	for (int i = 0; i < N; i++) {
		now = s.top();
		s.pop();

		if (now > higher) {
			count++;
			higher = now;
		}
	}

	std::cout << count;

	return 0;
}