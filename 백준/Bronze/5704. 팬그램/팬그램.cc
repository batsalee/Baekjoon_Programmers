#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	string input;
	while (getline(cin, input)) {		
		if (input == "*") break;

		bool alphabet[26] = { false };		
		for (char& c : input) {
			if(c != ' ') alphabet[c - 'a'] = true;
		}

		int i;
		for (i = 0; i < 26; i++) {
			if (alphabet[i] == false) break;
		}
		if (i == 26) cout << "Y\n";
		else cout << "N\n";
	}

	return 0;
}