#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, K;
	cin >> N >> K;
	
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int sum = 0;
	for (auto ritr = A.rbegin(); ritr != A.rend(); ritr++) {
		sum += K / *ritr;
		K %= *ritr;

		if (K == 0) break;
	}

	cout << sum;

	return 0;
}