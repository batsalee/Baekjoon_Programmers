#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	// line[1]에는 1과 인접한 간선들의 정보가 들어감
	// line[1][0] 은 1에 인접된 첫번째 간선의 정보이며 to, cost 순서인 pair객체
	vector<vector<pair<int, int>>> lines(N + 1); // 정점을 1번부터 쓰니까 N + 1
	int from, to, cost;
	for (int i = 0; i < M; i++) {
		cin >> from >> to >> cost;
		lines[from].push_back({ to, cost });
		lines[to].push_back({ from, cost }); // 반대로 가도 비용 같으니 넣어주기
	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	vector<bool> selected(N + 1, false);

	selected[1] = true; // 시작점 무난하게 1번으로
	for (auto p : lines[1]) { // 1번에 연결된 정점들 정보 업데이트
		int adj_vertex = p.first;
		int distance_to_adj = p.second;
		pq.push({ distance_to_adj, adj_vertex }); // dist로 정렬하기 위해 순서 반대로
	}

	int answer = 0;
	while (pq.size()) {
		int distance_to_this = pq.top().first;
		int this_vertex = pq.top().second;
		pq.pop();
		
		if (selected[this_vertex]) continue;

		selected[this_vertex] = true; // 가장 가까운 곳 선택하고
		for (auto p : lines[this_vertex]) { // 이 정점에서의 거리 업데이트
			int adj_vertex = p.first;
			int distance_to_adj = p.second;
			if(!selected[adj_vertex]) pq.push({ distance_to_adj, adj_vertex });
		}

		answer += distance_to_this;		
	}

	cout << answer;

	return 0;
}