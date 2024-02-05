#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> nums, temp;
vector<bool> visited;
void recursion(int count, int start)
{
	if (count == M) {
		for (int t : temp) { cout << t << ' '; }
		cout << '\n';
		return;
	}

	for (int i = start; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			temp[count] = nums[i];
			recursion(count + 1, i);
			visited[i] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
		
	cin >> N >> M;
	nums.resize(N);
	temp.resize(M);
	visited.resize(N);

	for (int i = 0; i < N; i++) { cin >> nums[i]; }
	sort(nums.begin(), nums.end());

	recursion(0, 0);

	return 0;
}