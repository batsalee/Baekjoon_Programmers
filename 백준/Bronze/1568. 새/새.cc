#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	int result = 0, now = 1;
	while (N) {
		if (N >= now) {
			N -= now;
			result++;
			now++;
		}
		else now = 1;
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