#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;
	cout << ((A / C + bool(A % C)) > (B / D + bool(B % D)) ? L - (A / C + bool(A % C)) : L - (B / D + bool(B % D)));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}