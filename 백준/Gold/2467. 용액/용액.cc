#include <bits/stdc++.h>
using namespace std;

#define INF 2147483647

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> values(N);
	for (int i = 0; i < N; i++) {
		cin >> values[i];
	}

	int l = 0, r = N - 1;
	int alkaline = values.front(), acid = values.back(), sum = INF;
	while (l < r) {
		if (abs(values[l] + values[r]) < sum) {
			alkaline = values[l];
			acid = values[r];
			sum = abs(values[l] + values[r]);
		}

		if (values[l] + values[r] == 0) break;

		if (values[l] + values[r] < 0) l++;
		else if (values[l] + values[r] > 0) r--;
	}

	cout << alkaline << ' ' << acid;

	return 0;
}