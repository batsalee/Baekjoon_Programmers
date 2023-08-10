#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	string input;
	cin >> input;

	int height = 10;
	for (int i = 1; i < input.length(); i++) {
		if (input[i] != input[i - 1]) height += 10;
		else height += 5;
	}

	cout << height;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}