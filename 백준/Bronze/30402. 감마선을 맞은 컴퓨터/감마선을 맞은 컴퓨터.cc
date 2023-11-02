#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T = 15 * 15;
	char input;
	while (T--) {
		cin >> input;
		if (input == 'w') {
			cout << "chunbae";
			break;
		}
		else if (input == 'b') {
			cout << "nabi";
			break;
		}
		else if (input == 'g') {
			cout << "yeongcheol";
			break;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}