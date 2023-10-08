#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	vector<int> queue;
	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		queue.insert(queue.begin() + i - input, i + 1);
	}
	
	for (int q : queue) {
		cout << q << ' ';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}