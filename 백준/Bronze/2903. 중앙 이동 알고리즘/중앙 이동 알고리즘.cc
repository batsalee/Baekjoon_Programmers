#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;
	}

	return result;
}

void solve()
{
	int N;
	cin >> N;

	cout << pow(1 + pow(2, N), 2) << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}