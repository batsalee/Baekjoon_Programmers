#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<array<int, 4>> input(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> input[i][j];
		}
	}

	vector<long long> AB(N * N), CD(N * N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			AB[N * i + j] = input[i][0] + input[j][1];
			CD[N * i + j] = input[i][2] + input[j][3];
		}
	}

	sort(AB.begin(), AB.end());
	sort(CD.begin(), CD.end());

	long long result = 0;
	for (long long ab : AB) {
		result += upper_bound(CD.begin(), CD.end(), -ab) - lower_bound(CD.begin(), CD.end(), -ab);
	}

	cout << result;

	return 0;
}