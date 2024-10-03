#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	cin >> S;

	int T;
	cin >> T;

	int A, B;
	while (T--) {
		cin >> A >> B;
		swap(S[A], S[B]);
	}

	cout << S;

	return 0;
}