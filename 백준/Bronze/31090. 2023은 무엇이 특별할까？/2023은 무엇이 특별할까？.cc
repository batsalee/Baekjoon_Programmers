#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int T;
	cin >> T;

	int N;
	while (T--) {
		cin >> N;
		if ((N + 1) % (N % 100) == 0) cout << "Good\n";
		else cout << "Bye\n";
	}

	return 0;
}