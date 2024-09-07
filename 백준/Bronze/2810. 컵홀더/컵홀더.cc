#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	char input;
	int S = 0, L = 0;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == 'S') S++;
		else if (input == 'L') L++;
	}

	cout << min(N, S + L / 2 + 1);

	return 0;
}