#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
	priority_queue<int, vector<int>, greater<>> pq;
	for (int s : scoville) { pq.push(s); }

	int answer = 0, now;
	while (pq.top() < K) {
		now = pq.top(); pq.pop();
        
        if(pq.empty()) return -1;
		now += 2 * pq.top(); pq.pop();
		pq.push(now); answer++;
	}

	return answer;
}