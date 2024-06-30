#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T[45] = { 0 };
	for (int i = 1; i < 45; i++) {
		T[i] = i * (i + 1) / 2;
	}

	vector<int> sums;
	for (int i = 1; i < 45; i++) {
		for (int j = 1; j < 45; j++) {
			for (int k = 1; k < 45; k++) {
				sums.push_back(T[i] + T[j] + T[k]);
			}
		}
	}
	sort(sums.begin(), sums.end());

	int TC;
	cin >> TC;

	int input;
	while (TC--) {
		cin >> input;
		cout << binary_search(sums.begin(), sums.end(), input) << '\n';
	}

	return 0;
}