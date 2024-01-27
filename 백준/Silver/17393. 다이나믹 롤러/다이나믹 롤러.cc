#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int N;
	cin >> N;
	
	vector<long long> A(N), B(N);
	for (int i = 0; i < N; i++) { cin >> A[i]; }
	for (int i = 0; i < N; i++) { cin >> B[i]; }

	for (int i = 0; i < N; i++) {
		cout << upper_bound(B.begin() + i + 1, B.end(), A[i]) - (B.begin() + i + 1) << ' ';
	}

	return 0;
}