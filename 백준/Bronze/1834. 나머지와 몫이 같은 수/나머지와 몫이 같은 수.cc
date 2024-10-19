#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	long long result = 0;
	for (long long i = 1; i < N; i++) {
		result += (i * N + i);
	}

	cout << result;

	return 0;
}