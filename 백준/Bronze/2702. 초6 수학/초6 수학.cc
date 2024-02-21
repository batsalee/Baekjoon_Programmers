#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	int a, b;
	while (T--) {
		cin >> a >> b;
		cout << lcm(a, b) << ' ' << gcd(a, b) << '\n';
	}

	return 0;
}