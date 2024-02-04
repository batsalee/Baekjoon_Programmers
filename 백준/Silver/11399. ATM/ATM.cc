#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> P(N);
	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}

	sort(P.begin(), P.end());
	for (int i = 1; i < N; i++) {
		P[i] += P[i - 1];
	}

	cout << accumulate(P.begin(), P.end(), 0);

	return 0;
}