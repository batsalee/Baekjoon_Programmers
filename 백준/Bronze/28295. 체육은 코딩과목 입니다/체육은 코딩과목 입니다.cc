#include <bits/stdc++.h>
using namespace std;

void solve()
{
	char direction[4] = {'N', 'E', 'S', 'W'};
	int now = 0, input;
	for (int i = 0; i < 10; i++) {
		cin >> input;
		switch (input) {
		case 1: {
			now = (now + 1) % 4;
			break;
		}
		case 2: {
			now = (now + 2) % 4;
			break;
		}
		case 3: {
			now -= 1;
			if (now == -1) now = 3;
			break;
		}
		}
	}

	cout << direction[now];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}