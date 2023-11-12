#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	string input;
	cin >> input;

	int score = 0, bonus = 0;
	for (int i = 0; i < N; i++) {
		if (input[i] == 'X') bonus = 0;
		else score += (i + 1 + bonus++);
	}

	cout << score;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}