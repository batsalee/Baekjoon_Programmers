#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string input;
	getline(cin, input);

	regex happy(":-\\)"), sad(":-\\(");
	int h = 0, s = 0;
	for (auto itr = sregex_iterator(input.begin(), input.end(), happy); itr != sregex_iterator(); ++itr) { h++; }
	for (auto itr = sregex_iterator(input.begin(), input.end(), sad); itr != sregex_iterator(); ++itr) { s++; }

	if (h == 0 && s == 0) cout << "none";
	else if (h == s) cout << "unsure";
	else if (h > s) cout << "happy";
	else if (h < s) cout << "sad";

	return 0;
}