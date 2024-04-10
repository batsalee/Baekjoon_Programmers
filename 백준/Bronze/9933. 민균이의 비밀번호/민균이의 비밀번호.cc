#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<string> passwords(N + 1, "");
	string input;
	for (int i = 1; i < N + 1; i++) {
		cin >> input;
		passwords[i] = input;

		reverse(input.begin(), input.end());
		auto itr = find(passwords.begin(), passwords.end(), input);

		if (itr != passwords.end()) {
			cout << (*itr).length() << ' ' << (*itr)[(*itr).length() / 2];
			return 0;
		}
	}
}