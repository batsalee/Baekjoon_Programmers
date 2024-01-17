#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int T;
	cin >> T;

	int N, X, Y;
	while (T--) {
		cin >> N >> X >> Y;
		vector<int> V(N);
		for (int i = 0; i < N; i++) {
			cin >> V[i];
		}

		double fast_time = (double)X / *max_element(V.begin(), V.end() - 1);
		if ((double)X / V.back() < fast_time) cout << 0 << '\n';
		else {
			double result = X - (fast_time - 1) * V.back() + 1;
			if (result <= Y) cout << (int)result << '\n';
			else cout << -1 << '\n';
		}
	}

	return 0;
}