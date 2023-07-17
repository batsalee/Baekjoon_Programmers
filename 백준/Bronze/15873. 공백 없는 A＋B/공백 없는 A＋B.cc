#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	cin >> input;

	if (input.length() == 4) cout << 20;
	else if (input.length() == 3) {
		if(input[1] == '0') cout << (input[2] - '0') + 10;
		else if (input[2] == '0') cout << (input[0] - '0') + 10;
	}
	else cout << (input[0] - '0') + (input[1] - '0');
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}