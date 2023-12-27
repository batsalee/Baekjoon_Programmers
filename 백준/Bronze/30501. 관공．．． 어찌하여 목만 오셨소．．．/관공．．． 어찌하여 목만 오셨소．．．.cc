#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	string input;
	while (N--) {
		cin >> input;
		if (input.find('S') != string::npos) break;
	}

	cout << input;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}