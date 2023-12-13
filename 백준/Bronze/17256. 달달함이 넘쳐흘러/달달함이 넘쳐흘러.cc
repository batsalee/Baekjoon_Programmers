#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int ax, ay, az, cx, cy, cz;
	cin >> ax >> ay >> az >> cx >> cy >> cz;
	cout << cx - az << ' ' << cy / ay << ' ' << cz - ax;	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}