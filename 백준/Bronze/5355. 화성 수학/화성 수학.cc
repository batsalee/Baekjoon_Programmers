#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;	
	cin.ignore();
	
	while (T--) {
		stringstream ss;
		string input;
		getline(cin, input);
		ss.str(input);
	
		double result = 0;
		string part;
		while (ss >> part) {
			if (part == "@") result *= 3;
			else if (part == "%") result += 5;
			else if (part == "#") result -= 7;
			else result = stod(part);
		}

		cout << fixed;
		cout.precision(2);
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