#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int L;
	cin >> L;

	string input;
	cin >> input;

	long long answer = 0;
	for (int i = 0; i < L; i++) {
		long long hash = input[i] - 'a' + 1;
		for (int j = 0; j < i; j++) {
			hash = (hash * 31) % 1234567891;
		}

		answer = (answer + hash) % 1234567891;
	}

	cout << answer;

	return 0;
}