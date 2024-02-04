#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	// case1 : A * 2
	// case2 : A * 10 + 1

	// cout 최단거리 + 1, 루트가 없다면 -1
	// 바텀업으로 해서 dp[b] == 0이면 -1출력

	int A, B;
	cin >> A >> B;

	map<long long, int> m; // 값, 비용 순
	queue<int> q;
	q.push(A);
	m[A] = 0;

	while (q.size()) {
		long long here = q.front();
		q.pop();

		// case 1
		if (m[here * 2] == 0) m[here * 2] = m[here] + 1;
		else m[here * 2] = min(m[here * 2], m[here] + 1);

		// case 2
		if (m[here * 10 + 1] == 0) m[here * 10 + 1] = m[here] + 1;
		else m[here * 10 + 1] = min(m[here * 10 + 1], m[here] + 1);


		if (here * 2 == B || here * 10 + 1 == B) break;

		if (here * 2 < B) q.push(here * 2);
		if (here * 10 + 1 < B) q.push(here * 10 + 1);
	}

	if (m[B] == 0) cout << -1;
	else cout << m[B] + 1;

	return 0;
}