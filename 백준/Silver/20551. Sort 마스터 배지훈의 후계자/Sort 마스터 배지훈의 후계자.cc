#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int N, M;
	cin >> N >> M;

	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int D;
	while (M--) {
		cin >> D;
		auto itr = lower_bound(A.begin(), A.end(), D);

		if (itr != A.end() && *itr == D) cout << itr - A.begin() << '\n';
		else cout << -1 << '\n';
	}

	return 0;
}