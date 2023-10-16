#include <bits/stdc++.h>
using namespace std;

void solve()
{
	while (true) {
		string input;
		cin >> input;
		if (input == "#") break;

		int result = 0, mag = 1;
		for (auto ritr = input.rbegin(); ritr != input.rend(); ritr++) {
			if (*ritr == '-') result += 0 * mag;
			else if (*ritr == '\\') result += 1 * mag;
			else if (*ritr == '(') result += 2 * mag;
			else if (*ritr == '@') result += 3 * mag;
			else if (*ritr == '?') result += 4 * mag;
			else if (*ritr == '>') result += 5 * mag;
			else if (*ritr == '&') result += 6 * mag;
			else if (*ritr == '%') result += 7 * mag;
			else if (*ritr == '/') result += -1 * mag;

			mag *= 8;
		}

		cout << result << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}