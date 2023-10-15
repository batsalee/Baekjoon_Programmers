#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, K;
	cin >> N >> K;
	
	int G;
	double P;
	while(K--) {
		cin >> G;
		P = G * 100 / N;

		if (P > 96) cout << 9 << ' ';
		else if (P > 89) cout << 8 << ' ';
		else if (P > 77) cout << 7 << ' ';
		else if (P > 60) cout << 6 << ' ';
		else if (P > 40) cout << 5 << ' ';
		else if (P > 23) cout << 4 << ' ';
		else if (P > 11) cout << 3 << ' ';
		else if (P > 4) cout << 2 << ' ';
		else cout << 1 << ' ';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}