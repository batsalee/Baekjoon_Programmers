#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector<vector<int>> origin(N, vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> origin[i][j];
		}
	}
	
	vector<vector<int>> result;
	vector<int> inner_vector;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < K; k++) {
				inner_vector.push_back(origin[i][j]);
			}
		}
		for (int k = 0; k < K; k++) {
			result.push_back(inner_vector);
		}
		inner_vector.clear();
	}

	for (int i = 0; i < N * K; i++) {
		for (int j = 0; j < N * K; j++) {
			cout << result[i][j] << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}