#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	string input;
	while (N--) {
		cin >> input;
		transform(input.begin(), input.end(), input.begin(), ::tolower);
		cout << input << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}