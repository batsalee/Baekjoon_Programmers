#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int L;
	cin >> L;
	vector<bool> cake(L + 1, 0);

	int N;
	cin >> N;
	vector<int> piece(N + 1);

	int P, K, biggest = 0, expect;
	for (int i = 1; i <= N; i++) {
		cin >> P >> K;
		if (K - P > biggest) {
			biggest = K - P;
			expect = i;
		}
		for (int j = P; j <= K; j++) {
			if (!cake[j]) {
				piece[i]++;
				cake[j] = true;
			}
		}
	}

	cout << expect << '\n' << max_element(piece.begin(), piece.end()) - piece.begin();

	return 0;
}