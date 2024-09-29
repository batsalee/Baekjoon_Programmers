#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	string input;
	while (N--) {
		cin >> input;

		int index = input.find('+');
		if (index == -1) cout << "skipped\n";
		else cout << stoi(input.substr(0, index)) + stoi(input.substr(index + 1)) << '\n';
	}

	return 0;
}