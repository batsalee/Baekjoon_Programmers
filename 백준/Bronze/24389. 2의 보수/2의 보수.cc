#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	int count = 0;
	for (int i = 0; i < 32; i++) {
		if((N & (1<<i)) != ((- 1 * N) & (1<<i))) count++;
	}
	cout << count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}