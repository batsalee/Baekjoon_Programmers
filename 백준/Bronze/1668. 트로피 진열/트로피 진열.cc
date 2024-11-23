#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> trophy(N);
	for (int& it : trophy) {
		cin >> it;
	}

	int now = 0, cnt = 0;
	for (int it : trophy) {
		if (it > now) {
			cnt++;
			now = it;
		}
	}
	cout << cnt << '\n';

	now = 0, cnt = 0;
	for (auto ritr = trophy.rbegin(); ritr != trophy.rend(); ritr++) {
		if (*ritr > now) {
			now = *ritr;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}