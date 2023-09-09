#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	while (getline(cin, input)) {
		if (input == "#") break;

		string result = "";
		for (auto itr = input.rbegin(); itr != input.rend(); itr++) {
			if (*itr == 'b') result += 'd';
			else if (*itr == 'd') result += 'b';
			else if (*itr == 'p') result += 'q';
			else if (*itr == 'q') result += 'p';
			else if (*itr == 'i' || *itr == 'o' || *itr == 'v' || *itr == 'w' || *itr == 'x') result += *itr;
			else break;
		}

		if (input.length() == result.length()) cout << result << '\n';
		else cout << "INVALID\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}