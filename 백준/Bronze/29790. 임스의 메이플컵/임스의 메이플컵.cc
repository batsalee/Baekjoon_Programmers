#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, U, L;
	cin >> N >> U >> L;

	if (N >= 1000 && (U >= 8000 || L >= 260)) cout << "Very Good";
	else if (N >= 1000) cout << "Good";
	else cout << "Bad";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}