#include <bits/stdc++.h>
using namespace std;

long long factorial(int N)
{
	if (N == 0) return 1;
	else return N * factorial(N - 1);
}

void solve()
{
	int N;
	cin >> N;
	cout << factorial(N);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}