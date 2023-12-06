#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++) {
		string input;
		getline(cin, input);

		vector<string> words;
		stringstream ss;
		ss.str(input);
		
		string temp;
		while (ss >> temp) {
			words.push_back(temp);
		}

		cout << "Case #" << i + 1 << ": ";
		for (auto ritr = words.rbegin(); ritr != words.rend(); ritr++) {
			cout << *ritr << ' ';
		}
		cout << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}