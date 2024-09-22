#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int maximum = 0, result = 0;
	for (auto ritr = a.rbegin(); ritr != a.rend(); ritr++) {
		maximum = max(maximum, *ritr);
		result = max(result, maximum - *ritr);
	}

	cout << result;

	return 0;
}