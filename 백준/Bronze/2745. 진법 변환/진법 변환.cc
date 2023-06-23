#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string N;
	int B;
	cin >> N >> B;

	int result = 0, ns = 1;
	while (!N.empty()) {		
		int back;
		if (N.back() >= 'A') back = N.back() - 'A' + 10;
		else back = N.back() - '0';

		N.pop_back();

		result += back * ns;
		ns *= B;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}