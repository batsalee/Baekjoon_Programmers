#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	while (getline(cin, input)) {
		int lower = 0, upper = 0, digit = 0, space = 0;

		for (char& c : input) {
			if (islower(c)) lower++;
			else if (isupper(c)) upper++;
			else if (isdigit(c)) digit++;
			else if (isspace(c)) space++;
		}

		cout << lower << ' ' << upper << ' ' << digit << ' ' << space << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}