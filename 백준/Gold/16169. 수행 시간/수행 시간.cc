#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, int>> input(n);
	int max_rank = 0;
	for (int i = 0; i < n; i++) {
		cin >> input[i].first >> input[i].second;
		max_rank = max(max_rank, input[i].first);
	}

	vector<vector<int>> rank_info(max_rank + 1);
	for (int i = 0; i < n; i++) {
		rank_info[input[i].first].push_back(i);
	}

	vector<vector<int>> graph(n);
	vector<int> inDegree(n, 0);
	for (int i = 1; i <= max_rank - 1; i++) {
		for (int u : rank_info[i]) {
			for (int v : rank_info[i + 1]) {
				graph[u].push_back(v);
				inDegree[v]++;
			}
		}
	}

	queue<int> q;
	for (int i = 0; i < n; i++) {
		if (inDegree[i] == 0) q.push(i);
	}

	vector<int> answer(n, 0);
	for (int i = 0; i < n; i++) {
		if(input[i].first == 1) answer[i] = input[i].second;
	}

	for (int i = 0; i < n; i++) {
		int node = q.front();
		q.pop();

		for (int adj : graph[node]) {
			inDegree[adj]--;
			answer[adj] = max(answer[adj], input[adj].second + answer[node] + (adj - node) * (adj - node));
			if (inDegree[adj] == 0) q.push(adj);
		}
	}

	cout << *max_element(answer.begin(), answer.end());

	return 0;
}