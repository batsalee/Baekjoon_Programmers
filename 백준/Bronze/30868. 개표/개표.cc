#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	while (N--) {
		int input;
		cin >> input;

		for (int i = 0; i < input / 5; i++) {
			cout << "++++ ";
		}
		for (int i = 0; i < input % 5; i++) {
			cout << '|';
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