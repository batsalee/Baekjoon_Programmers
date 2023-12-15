#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string str1, str2;
	cin >> str1 >> str2;

	map<char, int> m;
	for (char& c : str1) { m[c]++; }
	for (char& c : str2) { m[c]--; }

	int count = 0;
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		count += abs(itr->second);
	}

	cout << count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}