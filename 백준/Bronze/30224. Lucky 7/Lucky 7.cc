#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string number;
	cin >> number;

	if (number.find('7') != string::npos && stoi(number) % 7 == 0) cout << 3;
	else if(number.find('7') != string::npos && stoi(number) % 7 != 0) cout << 2;
	else if (number.find('7') == string::npos && stoi(number) % 7 == 0) cout << 1;
	else if (number.find('7') == string::npos && stoi(number) % 7 != 0) cout << 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}