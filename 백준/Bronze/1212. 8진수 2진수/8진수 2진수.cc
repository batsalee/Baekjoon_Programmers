#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	string input;
	cin >> input;

	string oct[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };	
	cout << stoi(oct[input[0] - '0']);
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