#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int N;
	cin >> N;

	int sum = 0, pow3_sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += i;
		pow3_sum += pow(i, 3);
	}

	cout << sum << '\n' << sum * sum << '\n' << pow3_sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}