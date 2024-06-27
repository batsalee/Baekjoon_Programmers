#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N), B(N);
	for (int i = 0; i < N; i++) { cin >> A[i]; }
	for (int i = 0; i < N; i++) { cin >> B[i]; }

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<>());
	cout << inner_product(A.begin(), A.end(), B.begin(), 0);

	return 0;
}