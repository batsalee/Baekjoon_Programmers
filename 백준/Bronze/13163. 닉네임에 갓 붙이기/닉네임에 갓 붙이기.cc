#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	string input;
	while (N--) {
		cin >> input;
		getline(cin, input);

		cout << "god";
		for (char& i : input) {
			if (i != ' ') cout << i;
		}
		cout << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}