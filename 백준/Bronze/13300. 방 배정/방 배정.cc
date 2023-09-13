#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, K;
	cin >> N >> K;

	int students[6][2] = {0};
	int S, Y;
	while (N--) {
		cin >> S >> Y;
		students[Y - 1][S]++;
	}

	int result = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			if (students[i][j])	result += students[i][j] / K + (bool)(students[i][j] % K);
		}
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