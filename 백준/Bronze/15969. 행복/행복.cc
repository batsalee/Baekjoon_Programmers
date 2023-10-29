#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int N;
	cin >> N;

	int min = 1000, max = 0, input;
	while (N--) {
		cin >> input;
		if (input > max) max = input;
		if (input < min) min = input;
	}

	cout << max - min;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}