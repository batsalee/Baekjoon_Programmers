#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int num1, num2;
	cin >> num1 >> num2;

	int a = 100 - num1;
	int b = 100 - num2;
	int c = 100 - (a + b);
	int d = a * b;
	int q = d / 100;
	int r = d % 100;

	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n' << c + q << ' ' << r;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}