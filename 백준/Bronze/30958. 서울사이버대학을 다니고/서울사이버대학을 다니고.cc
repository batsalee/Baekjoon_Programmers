#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;
	cin.ignore();

	string input;
	getline(cin, input);

	vector<int> alphabet(26, 0);
	int max = 0;
	for (char& c : input) {
		if (c != ' ' && c != '.' && c != ',') {
			alphabet[c - 'a']++;
			max = std::max(alphabet[c - 'a'], max);
		}
	}

	cout << max;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}