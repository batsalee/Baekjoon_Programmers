#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	A += D / 3600; D %= 3600;
	B += D / 60; D %= 60;
	C += D;

	B += C / 60; C %= 60;
	A += B / 60; B %= 60;
	A %= 24;

	cout << A << ' ' << B << ' ' << C;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}