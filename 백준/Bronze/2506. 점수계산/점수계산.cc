#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	vector<int> scores(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> scores[i];		

		if (scores[i]) scores[i] = scores[i - 1] + 1;
	}

	cout << accumulate(scores.begin(), scores.end(), 0);		
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}