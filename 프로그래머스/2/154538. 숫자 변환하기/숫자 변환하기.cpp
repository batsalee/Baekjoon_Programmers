#include <bits/stdc++.h>
using namespace std;

int solution(int x, int y, int n) {
	if (x == y) return 0;

	unordered_map<int, bool> visited;
	unordered_map<int, int> m;
	m[x] = 0;

	queue<int> q;
	q.push(x);
	while (q.size()) {
		int num = q.front();
		q.pop();

		if (num + n <= y) {
			if (m[num + n] != 0) m[num + n] = min(m[num + n], m[num] + 1);
			else m[num + n] = m[num] + 1;
		
			if (!visited[num + n]) {
				q.push(num + n);
				visited[num + n] = true;
			}
		}

		if (num * 2 <= y) {
			if (m[num * 2] != 0) m[num * 2] = min(m[num * 2], m[num] + 1);
			else m[num * 2] = m[num] + 1;
		
			if (!visited[num * 2]) {
				q.push(num * 2);
				visited[num * 2] = true;
			}
		}

		if (num * 3 <= y) {
			if (m[num * 3] != 0) m[num * 3] = min(m[num * 3], m[num] + 1);
			else m[num * 3] = m[num] + 1;
		
			if (!visited[num * 3]) {
				q.push(num * 3);
				visited[num * 3] = true;
			}
		}
	}

	return m[y] ? m[y] : -1;
}