#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int C;
	cin >> C;

	while (C--) {
		int N;
		cin >> N;
		
		vector<int> scores(N);
		for (int i = 0; i < N; i++) {
			cin >> scores[i];
		}

		double avg = accumulate(scores.begin(), scores.end(), 0.0) / N;		
		int count = 0;
		for (int i : scores) {
			if (i > avg) count++;
		}

		cout << fixed;
		cout.precision(3);
		cout << 100 * count / (double)N << "%\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}