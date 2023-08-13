#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int socks[10] = { 0 }, input;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		socks[input] ^= 1;
	}

	for (int i = 0; i < 10; i++) {
		if (socks[i]) cout << i;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}