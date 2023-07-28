#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int res[10] = { 0 }, A, B, C, mul;	
	cin >> A >> B >> C;
	mul = A * B * C;

	while (mul) {
		int temp = mul % 10;
		res[temp]++;
		mul /= 10;
	}

	for (int r : res) {
		cout << r << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}