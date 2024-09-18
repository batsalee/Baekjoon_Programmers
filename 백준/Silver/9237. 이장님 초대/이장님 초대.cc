#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> days(N);
	for (int i = 0; i < N; i++) {
		cin >> days[i];
	}
	sort(days.begin(), days.end(), greater());

	int day = 1, last_day = 0;
	for (int d : days) {
		last_day = max(last_day, day + d);
		day++;
	}

	cout << last_day + 1;

	return 0;
}