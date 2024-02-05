#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		vector<vector<int>> vec, ps;
		vec.resize(2, vector<int>(n + 2));
		ps.resize(2, vector<int>(n + 2));
		
		for (int i = 0; i < 2; i++) {
			for (int j = 2; j < n + 2; j++) {		
				cin >> vec[i][j];				
			}
		}		

		for (int j = 2; j < n + 2; j++) {
			for (int i = 0; i < 2; i++) {
				ps[i][j] = max(ps[i ^ 1][j - 1], max(ps[0][j - 2], ps[1][j - 2]));
				ps[i][j] += vec[i][j];
			}
		}

		cout << max(max(ps[0][n + 1], ps[1][n + 1]), max(ps[0][n], ps[1][n])) << '\n';
	}

	return 0;
}