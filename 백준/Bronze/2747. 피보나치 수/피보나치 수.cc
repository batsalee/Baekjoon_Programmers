#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int fibonacci[46] = {0, 1}, input;

	cin >> input;
	for (int i = 2; i <= input; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	cout << fibonacci[input];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}