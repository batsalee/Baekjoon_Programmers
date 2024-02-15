#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> priorities, int location)
{	
	priority_queue<int> pq;
	queue<pair<int, int>> q;
	int index = 0;
	for (int p : priorities) {
		pq.push(p);
		q.push({ p, index++ });
	}

	int answer = 1;
	while (q.size()) {
		if (q.front().first == pq.top()) {
			if (q.front().second == location) return answer;
			else {
				q.pop();
				pq.pop();
				answer++;
			}
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
}