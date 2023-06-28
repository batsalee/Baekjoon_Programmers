#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	cin >> input;

	if (input == "SONGDO") cout << "HIGHSCHOOL";
	else if (input == "CODE") cout << "MASTER";
	else if (input == "2023") cout << "0611";
	else if (input == "ALGORITHM") cout << "CONTEST";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}