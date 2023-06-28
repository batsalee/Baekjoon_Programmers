#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> tree;
vector<int> visited;

void preOrder(int here)
{
	if (visited[here] == 0) {
		visited[here] = 1;
		cout << (char)(here + 'A');

		if (tree[here][0] != '.') preOrder(tree[here][0] - 'A');
		if (tree[here][1] != '.') preOrder(tree[here][1] - 'A');
	}
}

void inOrder(int here)
{
	if (visited[here] == 0) {
		if (tree[here][0] != '.') inOrder(tree[here][0] - 'A');
		visited[here] = 1;
		cout << (char)(here + 'A');
		if (tree[here][1] != '.') inOrder(tree[here][1] - 'A');
	}
}

void postOrder(int here)
{
	if (visited[here] == 0) {
		if (tree[here][0] != '.') postOrder(tree[here][0] - 'A');
		if (tree[here][1] != '.') postOrder(tree[here][1] - 'A');

		visited[here] = 1;
		cout << (char)(here + 'A');
	}
}

void solve()
{
	int N;
	cin >> N;
	tree.resize(N);
	visited.resize(N);

	for (int i = 0; i < N; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		tree[a - 'A'].push_back(b);
		tree[a - 'A'].push_back(c);
	}

	preOrder(0); 
	fill(visited.begin(), visited.end(), 0);
	cout << '\n';

	inOrder(0);
	fill(visited.begin(), visited.end(), 0);
	cout << '\n';

	postOrder(0);
	fill(visited.begin(), visited.end(), 0);
	cout << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}