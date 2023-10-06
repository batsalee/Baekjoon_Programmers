#include <bits/stdc++.h>
using namespace std;

void solve()
{
	const char* DKSH = "DKSH";
	
	string input;
	cin >> input;
	if (input.length() < 4) {
		cout << 0;
		return;
	}

	int count = 0;
	for (int i = 0; i <= input.length() - 4; i++) {
		if (input[i] == 'D' && input[i + 1] == 'K' && input[i + 2] == 'S' && input[i + 3] == 'H') count++;
	}

	cout << count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}