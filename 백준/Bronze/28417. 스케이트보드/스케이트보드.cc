#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, R[2], T[5];
	cin >> N;
	
	int win_point = 0;
	while (N--) {
		for (int i = 0; i < 2; i++) { cin >> R[i]; }
		for (int i = 0; i < 5; i++) { cin >> T[i]; }
		partial_sort(R, R + 1, R + 2, greater<>());
		partial_sort(T, T + 2, T + 5, greater<>());

		win_point = max(win_point, R[0] + T[0] + T[1]);
	}

	cout << win_point;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}