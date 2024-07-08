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

	int n, m;
	cin >> n >> m;

	parent.resize(n);
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}

	int a, b, answer = 0;
	for (int i = 1; i < m + 1; i++) {
		cin >> a >> b;
		
		if (Find(a) != Find(b)) Union(a, b);
		else {
			answer = i;
			break;
		}
	}

	cout << answer;

	return 0;
}