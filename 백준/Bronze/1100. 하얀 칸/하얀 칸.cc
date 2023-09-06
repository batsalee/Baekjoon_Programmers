#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int result = 0, toggle = 0;
	char chess[9][8];	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> chess[i][j];
			if (j % 2 == toggle && chess[i][j] == 'F') result++;
		}
		toggle ^= 1;
	}
	
	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}