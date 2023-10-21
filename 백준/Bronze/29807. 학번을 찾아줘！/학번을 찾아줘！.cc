#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	vector<int> scores(T);
	for (int i = 0; i < T; i++) {
		cin >> scores[i];
	}

	int result = 0;
	if (scores[0] > scores[2]) result += (scores[0] - scores[2]) * 508;
	else result += (scores[2] - scores[0]) * 108;

	if (scores[1] > scores[3]) result += (scores[1] - scores[3]) * 212;
	else result += (scores[3] - scores[1]) * 305;

	if (T == 5) result += scores[4] * 707;

	cout << result * 4763;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}