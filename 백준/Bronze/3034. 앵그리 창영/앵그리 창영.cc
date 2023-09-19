#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, W, H;
	cin >> N >> W >> H;

	double limit = sqrt(pow(W, 2) + pow(H, 2));
	int input;
	while (N--) {
		cin >> input;
		if (input <= limit) cout << "DA\n";
		else cout << "NE\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}