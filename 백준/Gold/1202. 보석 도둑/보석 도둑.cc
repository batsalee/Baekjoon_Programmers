#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector<pair<int, int>> pq(N);
	int M, V;
	for (int i = 0; i < N; i++) {
		cin >> M >> V;
		pq[i] = { V, M };
	}
	sort(pq.begin(), pq.end(),
		[&](auto a, auto b) {
			if (a.first == b.first) return a.second < b.second;
			else return a.first > b.first;
		}
	);

	multiset<int> C;
	int input;
	for (int i = 0; i < K; i++) {
		cin >> input;
		C.insert(input);
	}

	long long answer = 0;
	int index = 0;
	while (index < N && C.size()) {
		int value = pq[index].first;
		int weight = pq[index].second;
		index++;

		auto itr = C.lower_bound(weight);
		if (itr != C.end()) {
			answer += value;
			C.erase(itr);
		}		
	}

	cout << answer;
	
	return 0;
}