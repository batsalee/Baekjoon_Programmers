#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string A, B;
	cin >> A >> B;

	int pos_a, pos_b;
	for (int i = 0; i < A.size(); i++) {
		auto itr = find(B.begin(), B.end(), A[i]);
		if (itr != B.end()) {
			pos_a = i;
			pos_b = itr - B.begin();
			break;
		}
	}

	vector<vector<char>> result(B.size(), vector<char>(A.size(), '.'));
	for (int i = 0; i < A.size(); i++) {
		result[pos_b][i] = A[i];
	}
	for (int i = 0; i < B.size(); i++) {
		result[i][pos_a] = B[i];
	}

	for (int i = 0; i < B.size(); i++) {
		for (int j = 0; j < A.size(); j++) {
			cout << result[i][j];
		}
		cout << '\n';
	}

	return 0;
}