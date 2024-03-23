#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	unordered_map<int, pair<bool, int>> um; // map[3] == {isThere, score};
	vector<int> cards(N);
	int biggest = 0;
	for (int i = 0; i < N; i++) {
		cin >> cards[i];
		biggest = max(cards[i], biggest);
		um[cards[i]] = { true, 0 };
	}

	for (int i = 0; i < N; i++) {
		for (int j = 2 * cards[i]; j <= biggest; j += cards[i]) {
			if (um[j].first) {
				um[cards[i]].second += 1;
				um[j].second -= 1;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << um[cards[i]].second << ' ';
	}

	return 0;
}