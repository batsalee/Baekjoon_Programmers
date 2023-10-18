#include <bits/stdc++.h>
using namespace std;

void solve()
{
	const string Phrases[7] = {
		"Never gonna give you up",
		"Never gonna let you down",
		"Never gonna run around and desert you",
		"Never gonna make you cry",
		"Never gonna say goodbye",
		"Never gonna tell a lie and hurt you",
		"Never gonna stop"
	};

	int N;
	cin >> N;
	cin.ignore();

	string input;
	while (N--) {
		getline(cin, input);

		bool hacked = true;
		for (int i = 0; i < 7; i++) {
			if (input == Phrases[i]) {
				hacked = false;
				break;
			}
		}
		
		if (hacked) {
			cout << "Yes";
			return;
		}
	}

	cout << "No";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}