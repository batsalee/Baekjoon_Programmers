#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int T;
	cin >> T;

	while (T--) {
		int N, M;
		cin >> N >> M;

		vector<int> vecN(N), vecM(M);
		for (int i = 0; i < N; i++) { cin >> vecN[i]; }
		for (int i = 0; i < M; i++) { cin >> vecM[i]; }

		sort(vecN.begin(), vecN.end());
		sort(vecM.begin(), vecM.end());

		int result = 0;
		for (int i = 0; i < N; i++) {
			result += lower_bound(vecM.begin(), vecM.end(), vecN[i]) - vecM.begin();
		}

		cout << result << '\n';
	}

	return 0;
}