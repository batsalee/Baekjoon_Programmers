#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	regex re_while("while"), re_for("for");
	smatch match;

	int C;
	cin >> C;

	int result = 0;
	string input;
	while (C--) {
		cin >> input;
		
		int count = 0;
		
		auto start_while = sregex_iterator(input.begin(), input.end(), re_while);
		auto start_for = sregex_iterator(input.begin(), input.end(), re_for);
		auto end = sregex_iterator();

		while (start_while != end) {
			count++;
			++start_while;
		}
		
		while (start_for != end) {
			count++;
			++start_for;
		}

		result = max(result, count);
	}

	cout << result;

	return 0;
}