#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, M;
	cin >> N >> M;

	string input;
	int result = 0;
	for (int i = 0; i < N; i++) {
		cin >> input;
		int count = 0;
		for (int j = 0; j < M; j++) {
			if (input[j] == 'O') count += 1;
			else count -= 1;
		}

		if (count > 0) result++;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}