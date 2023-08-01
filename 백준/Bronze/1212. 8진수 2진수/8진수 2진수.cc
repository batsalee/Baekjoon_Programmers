#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	string input;
	cin >> input;

	string oct[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	switch (input[0] - '0') {
	case 0:
		cout << 0;
		break;
	case 1:
		cout << 1;
		break;
	case 2:
		cout << 10;
		break;
	case 3:
		cout << 11;
		break;
	default:
		cout << oct[input[0] - '0'];
	}

	for (int i = 1; i < input.length(); i++) {
		cout << oct[input[i] - '0'];
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}