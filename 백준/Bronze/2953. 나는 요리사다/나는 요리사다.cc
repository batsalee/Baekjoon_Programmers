#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int winner = 0, top_score = 0, now_score[4], now_sum;
	for (int i = 0; i < 5; i++) {
		now_sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> now_score[j];
			now_sum += now_score[j];
		}
		if (now_sum > top_score) {
			top_score = now_sum;
			winner = i + 1;
		}
	}

	cout << winner << ' ' << top_score;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}