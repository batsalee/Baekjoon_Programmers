#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, L, R, X;
	cin >> N >> L >> R >> X;

	vector<int> difficulty(N);
	for (int i = 0; i < N; i++) {
		cin >> difficulty[i];
	}

	int count = 0, skip = 1;	
	for (int i = 1; i < pow(2, N); i++) {
		if (i == skip) {
			skip *= 2;
			continue;
		}		
		int sum = 0;
		int easy = 1000000, hard = 0;
		for(int j = 0; j<=floor(log2(i)); j++) {
			if (i & (1 << j)) {
				sum += difficulty[j];
				if (difficulty[j] < easy) easy = difficulty[j];
				if (difficulty[j] > hard) hard = difficulty[j];
			}
		}

		if (sum >= L && sum <= R && (hard - easy) >= X) count++;
	}

	cout << count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}