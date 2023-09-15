#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int M, N;
	cin >> M >> N;

	int sum = 0, min;
	for (int i = 100; i > 0; i--) {
		int power_num = pow(i, 2);
		if (power_num >= M && power_num <= N) {
			sum += power_num;
			min = power_num;
		}
	}

	if (sum) cout << sum << '\n' << min;
	else cout << -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}