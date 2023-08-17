#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int fingers[] = {2, 1, 2, 3, 4, 5, 4, 3};
	
	int n;
	cin >> n;
	cout << fingers[n % 8];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}