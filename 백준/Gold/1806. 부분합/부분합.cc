#include <bits/stdc++.h>
using namespace std;

#define INF 2147483647

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, S;
	cin >> N >> S;

	vector<int> nums(N);
	for (int i = 0; i < N; i++) { cin >> nums[i]; }

	int l = 0, r = 0, sum = nums.front(), answer = INF;
	while (true) {
		if (sum >= S) {
			answer = min(r - l + 1, answer);

			if (l < N - 1) sum -= nums[l++];
			else break;
			
			if (l > r) swap(l, r);
		}
		else if (sum < S) {
			if (r < N - 1) {
				r++;
				sum += nums[r];
			}
			else {
				if (l < N - 1) l++;
				else break; 

				sum -= nums[l];
			}
		}
	}

	if (answer == INF) cout << 0;
	else cout << answer;

	return 0;
}