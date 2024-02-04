#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;
		
	while (T--) {
		int n;
		cin >> n;

		map<string, int> m;
		string clothes, type;
		for (int i = 0; i < n; i++) {
			cin >> clothes >> type;
			m[type]++;
		}

		int mul = 1;
		for (auto p : m) {
			mul *= p.second + 1;
		}
		cout << mul - 1 << '\n';
	}

	return 0;
}