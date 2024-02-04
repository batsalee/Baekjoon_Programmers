#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int L;
	cin >> L;

	string input;
	cin >> input;

	int answer = 0;
	for (int i = 0; i < L; i++) {
		answer += int((input[i] - 'a' + 1) * pow(31, i)) % 1234567891;
	}

	cout << answer;

	return 0;
}