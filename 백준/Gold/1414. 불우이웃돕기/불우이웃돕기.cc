#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int Find(int x)
{
	if (parent[x] == x) return x;
	return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);
	if (x < y) parent[y] = x;
	else if (x > y) parent[x] = y;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	
	parent.resize(N);
	for (int i = 0; i < N; i++) {
		parent[i] = i;
	}

	vector<tuple<int, int, int>> lens; // cost, from, to
	string s;
	int answer = 0;
	for (int i = 0; i < N; i++) {
		cin >> s;
		for (int j = 0; j < N; j++) {
			char c = s[j];
			int cost = 0;

			if (islower(c)) cost = c - 'a' + 1;
			else if (isupper(c)) cost = c - 'A' + 27;

			if (c != '0') {
				lens.push_back({ cost, i, j });
				answer += cost;
			}
		}
	}
	sort(lens.begin(), lens.end());
	
	int count = 0;
	for (auto t : lens) {
		int cost = get<0>(t);
		int from = get<1>(t);
		int to = get<2>(t);

		if (Find(from) != Find(to)) {
			answer -= cost;
			Union(from, to);
			count++;
		}

		if (count == N - 1) break;
	}

	if (count == N - 1) cout << answer;
	else cout << -1;

	return 0;
}