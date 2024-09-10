#include <bits/stdc++.h>
using namespace std;

vector<int> Parent;

int Find(int x)
{
    if (Parent[x] == x) return x;
    return Parent[x] = Find(Parent[x]);
}

void Union(int x, int y)
{
	x = Find(x);
	y = Find(y);

	if (x < y) Parent[y] = x;
	else if (x > y) Parent[x] = y;
}

int solution(int n, vector<vector<int>> computers) {
    Parent.resize(n);
    for (int i = 0; i < n; i++) {
        Parent[i] = i;
    }

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (computers[i][j]) Union(i, j);
		}
	}

	set<int> s;
	for (int p : Parent) {
		s.insert(Find(p));
	}
	return s.size();
}