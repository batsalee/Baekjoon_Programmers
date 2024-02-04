#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<string, string> m;
	string site, password;
	while (N--) {
		cin >> site >> password;
		m[site] = password;
	}

	while (M--) {
		cin >> site;
		cout << m[site] << '\n';
	}

	return 0;
}