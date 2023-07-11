#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	cin >> input;

	if (input == "fdsajkl;" || input == "jkl;fdsa") cout << "in-out";
	else if (input == "asdf;lkj" || input == ";lkjasdf") cout << "out-in";
	else if (input == "asdfjkl;") cout << "stairs";
	else if (input == ";lkjfdsa") cout << "reverse";
	else cout << "molu";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}