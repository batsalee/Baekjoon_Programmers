#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}

	vector<int> difficulty(n);
	for (int i = 0; i < n; i++) {
		cin >> difficulty[i];
	}

	sort(difficulty.begin(), difficulty.end());

	int cut = round(n * 0.15);
	int sum = accumulate(difficulty.begin() + cut, difficulty.end() - cut, 0);
	if (cut == 0) cout << sum / n;
	else cout << round(sum / double(n - 2 * cut));

	return 0;
}