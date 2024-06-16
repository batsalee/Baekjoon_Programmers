#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		string num;
		cin >> num;

		set<char> s;
		for (char n : num) {
			s.insert(n);
		}

		cout << s.size() << '\n';
	}

	return 0;
}