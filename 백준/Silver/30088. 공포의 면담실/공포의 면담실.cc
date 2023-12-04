#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;
	vector<int> times(N);

	for (int i = 0; i < N; i++) {
		int count;
		cin >> count;

		int sum = 0, time;
		while (count--) {
			cin >> time;
			sum += time;
		}

		times[i] = sum;
	}

	sort(times.begin(), times.end());
	for (int i = 1; i < N; i++) {
		times[i] += times[i - 1];
	}

	cout << accumulate(times.begin(), times.end(), 0);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}