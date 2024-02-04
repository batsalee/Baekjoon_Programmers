#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 0; i < N; i++) { cin >> v[i]; }

	vector<int> LIS(1, 0);
	for (int i = 0; i < N; i++) {
		if (v[i] > LIS.back()) LIS.push_back(v[i]);
		else {
			auto itr = lower_bound(LIS.begin(), LIS.end(), v[i]);
			*itr = v[i];
		}
	}

	cout << LIS.size() - 1;

	return 0;
}