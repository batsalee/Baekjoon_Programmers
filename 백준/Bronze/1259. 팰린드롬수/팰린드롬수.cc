#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string input, rev;
	while (true) {
		cin >> input;
		if (input == "0") return 0;

		rev = input;
		reverse(rev.begin(), rev.end());
		if (input == rev) cout << "yes\n";
		else cout << "no\n";
	}
}