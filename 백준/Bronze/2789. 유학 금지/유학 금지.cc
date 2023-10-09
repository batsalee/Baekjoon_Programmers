#include <bits/stdc++.h>
using namespace std;

void solve()
{
	const string CAMBRIDGE = "CAMBRIDGE";
	string input, result = "";
	cin >> input;

	for (const char& i : input) {
		bool flag = true;
		for (const char& c : CAMBRIDGE) {
			if (i == c) {
				flag = false;
				break;
			}
		}

		if (flag) result += i;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}