#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	priority_queue<tuple<int, int, int>> info;
	int na, st, gr;
	for (int i = 0; i < N; i++) {
		cin >> na >> st >> gr;
		info.push({gr, na, st});
	}

	vector<pair<int, int>> result;
	while (result.size() < 3) {
		auto [gr, na, st] = info.top();
		info.pop();

		if (result.size() == 2 && result[0].first == na && result[1].first == na) continue;
		else {
			cout << na << ' ' << st << '\n';
			result.push_back({ na, st });
		}
	}

	return 0;
}