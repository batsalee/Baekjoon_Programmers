#include <bits/stdc++.h>
using namespace std;

void solve()
{
	long long A, B, C;
	cin >> A >> B >> C;
	
	string multiple = to_string(A * B * C);
	int num[10] = { 0 };
	for (char m : multiple) {
		num[m - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}