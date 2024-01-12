#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int N, K;
	cin >> N >> K;

	int dis[100001];
	fill_n(dis, 100001, -1);

	queue<int> q;
	dis[N] = 0;
	q.push(N);

	while (q.size()) {
		int here = q.front();
		q.pop();

		if (here == K) {
			cout << dis[here];
			return 0;
		}

		if (2 * here <= 100000 && dis[2 * here] == -1) {
			dis[2 * here] = dis[here] + 1;
			q.push(2 * here);
		}
		if (here + 1 <= 100000 && dis[here + 1] == -1) {
			dis[here + 1] = dis[here] + 1;
			q.push(here + 1);
		}
		if (here - 1 >= 0 && dis[here - 1] == -1) {
			dis[here - 1] = dis[here] + 1;
			q.push(here - 1);
		}
	}
}