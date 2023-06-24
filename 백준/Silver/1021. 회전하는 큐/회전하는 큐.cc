#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, M;
	cin >> N >> M;

	deque<int> dq;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	vector<int> nums(M);
	for (int i = 0; i < M; i++) {
		cin >> nums[i];
	}
	int count = 0;
	for (int i = 0; i < M; i++) {
		if (dq.front() == nums[i]) dq.pop_front();
		else {
			auto itr = find(dq.begin(), dq.end(), nums[i]);

			if (itr - dq.begin() <= dq.end() - itr) {
				for (int i = 0; i < itr - dq.begin(); i++) {
					rotate(dq.begin(), dq.begin() + 1, dq.end());
				}
				count += itr - dq.begin();
				dq.pop_front();
			}
			else {
				for (int i = 0; i < dq.end() - itr; i++) {
					rotate(dq.begin(), dq.end() - 1, dq.end());
				}
				count += (dq.end() - itr);
				dq.pop_front();
			}
		}
	}

	cout << count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}