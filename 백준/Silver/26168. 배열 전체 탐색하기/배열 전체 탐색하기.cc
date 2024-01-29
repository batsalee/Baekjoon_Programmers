#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int n, m;
	cin >> n >> m;

	vector<long long> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	while (m--) {
		int B;
		cin >> B;

		if (B == 1) {
			long long k;
			cin >> k;
			cout << n - (lower_bound(A.begin(), A.end(), k) - A.begin()) << '\n';
		}
		else if (B == 2) {
			long long k;
			cin >> k;
			cout << n - (upper_bound(A.begin(), A.end(), k) - A.begin()) << '\n';
		}
		else if (B == 3) {
			long long i, j;
			cin >> i >> j;
			cout << upper_bound(A.begin(), A.end(), j) - lower_bound(A.begin(), A.end(), i) << '\n';
		}
	}

	return 0;
}