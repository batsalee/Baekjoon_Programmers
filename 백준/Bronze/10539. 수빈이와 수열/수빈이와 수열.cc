#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N), B(N);
	long long ps = 0;
	for (int i = 0; i < N; i++) {
		cin >> B[i];
		A[i] = B[i] * (i + 1) - ps;
		ps += A[i];
		cout << A[i] << ' ';
	}

	return 0;
}