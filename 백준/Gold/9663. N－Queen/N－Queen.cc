#include <bits/stdc++.h>
using namespace std;

int N;
int arr[15];
int ans;

bool check(int x) 
{
	for (int i = 0; i < x; i++) {
		if (arr[x] == arr[i] || (x - i) == abs(arr[x] - arr[i])) return false;
	}
	return true;
}

void reculsive(int x)
{
	if (x == N) ans++;
	else {
		for (int i = 0; i < N; i++) {
			arr[x] = i;
			if (check(x)) reculsive(x + 1);
		}
	}
}

void solve()
{
	cin >> N;
	reculsive(0);
	cout << ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}