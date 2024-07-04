#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	priority_queue<pair<int, int>> pq; // 최대힙
	vector<bool> selected(N + 1, false);

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq_greater; // 최소힙
	vector<bool> selected_greater(N + 1, false);

	// 0 - 1 정보
	int A, B, C;
	cin >> A >> B >> C;
	selected[0] = true; // 시작점 0번
	pq.push({ !C, 1 }); // 0번과 연결된 정점인 1번 업데이트
	selected_greater[0] = true;	
	pq_greater.push({ !C, 1 });

	// 1 ~ N 간선 정보
	vector<vector<pair<int, int>>> lines(N + 1);
	for (int i = 0; i < M; i++) {
		cin >> A >> B >> C;
		lines[A].push_back({ B, !C });
		lines[B].push_back({ A, !C }); // 반대로 가도 비용 같으니 넣어주기
	}
	
	// 계산
	int maximum = 0, minimum = 0;
	while (pq.size()) {
		int distance_to_this = pq.top().first;
		int this_vertex = pq.top().second;
		pq.pop();

		if (!selected[this_vertex]) {
			selected[this_vertex] = true;
			for (auto p : lines[this_vertex]) { // 이 정점에서의 거리 업데이트
				int adj_vertex = p.first;
				int distance_to_adj = p.second;
				if (!selected[adj_vertex]) pq.push({ distance_to_adj, adj_vertex });
			}

			maximum += distance_to_this;
		}

		distance_to_this = pq_greater.top().first;
		this_vertex = pq_greater.top().second;
		pq_greater.pop();

		if (!selected_greater[this_vertex]) {
			selected_greater[this_vertex] = true;
			for (auto p : lines[this_vertex]) { // 이 정점에서의 거리 업데이트
				int adj_vertex = p.first;
				int distance_to_adj = p.second;
				if (!selected_greater[adj_vertex]) pq_greater.push({ distance_to_adj, adj_vertex });
			}

			minimum += distance_to_this;
		}
	}

	cout << pow(maximum, 2) - pow(minimum, 2);

	return 0;
}