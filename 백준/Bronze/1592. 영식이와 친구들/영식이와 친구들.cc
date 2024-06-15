#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M, L;
	cin >> N >> M >> L;

	vector<int> count(N, 0);
	int ball = 0;
	count[0] = 1;
	while (true) {
		if (count[ball] == M) {
			cout << accumulate(count.begin(), count.end(), -1);
			return 0;
		}
		
		if (count[ball] & 1) ball = ball - L;
		else ball = (ball + L) % N;

		if (ball < 0) ball += N;
		count[ball]++;		
	}
}