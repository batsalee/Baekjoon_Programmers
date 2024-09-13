#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string text, word;
	getline(cin, text);
	getline(cin, word);

	int result = 0;
	regex re(word);
	smatch match;
	while (regex_search(text, match, re)) {
		result++;
		text = match.suffix();
	}

	cout << result;

	return 0;
}