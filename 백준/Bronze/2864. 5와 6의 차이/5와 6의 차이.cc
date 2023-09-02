#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string num1, num2;
	cin >> num1 >> num2;

	replace(num1.begin(), num1.end(), '6', '5');
	replace(num2.begin(), num2.end(), '6', '5');
	cout << stoi(num1) + stoi(num2) << ' ';

	replace(num1.begin(), num1.end(), '5', '6');
	replace(num2.begin(), num2.end(), '5', '6');
	cout << stoi(num1) + stoi(num2);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}