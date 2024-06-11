#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	while (N--) {
		string A, B;
		cin >> A >> B;

		cout << "Distances: ";
		for (int i = 0; i < A.size(); i++) {
			if (A[i] <= B[i]) cout << B[i] - A[i] << ' ';
			else cout << (B[i] + 26) - A[i] << ' ';
		}
		cout << '\n';
	}

	return 0;
}