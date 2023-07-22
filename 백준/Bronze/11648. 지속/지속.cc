#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int now, temp, res = 0;
	cin >> now;
	
	while (now >= 10) {		
		res++;
		temp = 1;
		while (now) {
			temp *= now % 10;
			now /= 10;
		}
		now = temp;
	}

	cout << res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}