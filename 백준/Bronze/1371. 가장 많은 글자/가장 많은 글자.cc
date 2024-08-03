#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
		
	array<int, 26> count = { 0 };

	string input;
	while (getline(cin, input)) {
		for (const char& c : input) {
			if (islower(c)) count[c - 'a']++;
		}
	}

	int maximum = *max_element(count.begin(), count.end());
	for (int i = 0; i < count.size(); i++) {
		if (count[i] == maximum) cout << static_cast<char>('a' + i);
	}

	return 0;
}