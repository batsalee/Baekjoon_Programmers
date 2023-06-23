#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int>& p1, pair<string, int>& p2)
{
	if (p1.second != p2.second) return p1.second > p2.second;

	if (p1.first.length() != p2.first.length()) return p1.first.length() > p2.first.length();
	else return p1.first < p2.first;	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	unordered_map<string, int> m;
	string input;
	while (N--) {
		cin >> input;
		if (input.length() >= M) m[input]++;
	}

	vector<pair<string, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), comp);

	for (auto _v : v) {
		cout << _v.first << '\n';
	}

	return 0;
}