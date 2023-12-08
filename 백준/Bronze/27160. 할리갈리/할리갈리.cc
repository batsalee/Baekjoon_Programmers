#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	map<string, int> haligali;

	while (N--) {
		string S;
		int X;

		cin >> S >> X;
		haligali[S] += X;
	}

	for (auto itr = haligali.begin(); itr != haligali.end(); itr++) {
		if (itr->second == 5) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}