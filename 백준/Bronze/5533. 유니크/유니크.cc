#include <bits/stdc++.h>
using namespace std;

int N;
vector<array<int, 3>> input;
bool isSame(int i, int j) 
{
	for (int k = 0; k < N; k++) {
		if (i == k) continue;
		if (input[i][j] == input[k][j]) return true;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> N;
	input.resize(N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> input[i][j];
		}
	}

	vector<int> result(N, 0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			if (!isSame(i, j)) result[i] += input[i][j];
		}
	}

	for (int& r : result) {
		cout << r << '\n';
	}

	return 0;
}