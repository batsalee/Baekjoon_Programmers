#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, K;
	cin >> N >> K;

	int students[3][2] = {0};
	int S, Y;
	while (N--) {
		cin >> S >> Y;
		if (Y == 1 || Y == 2) students[0][S]++;
		else if (Y == 3 || Y == 4) students[1][S]++;
		else if (Y == 5 || Y == 6) students[2][S]++;
	}

	cout << (students[0][0] + students[0][1]) / K + bool((students[0][0] + students[0][1]) % K)
		+ students[1][0] / K + bool(students[1][0] % K) + students[1][1] / K + bool(students[1][1] % K)
		+ students[2][0] / K + bool(students[2][0] % K) + students[2][1] / K + bool(students[2][1] % K);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}