#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
	
	queue<int> q1, q2;
	long long sum1 = 0, sum2 = 0;
	for (int i = 0; i < queue1.size(); i++) {
		q1.push(queue1[i]);	sum1 += queue1[i];
		q2.push(queue2[i]);	sum2 += queue2[i];
	}
	
	int answer = 0;
	while (answer < 4 * queue1.size()) {
		if (sum1 > sum2) {
			q2.push(q1.front()); 
			sum2 += q1.front();
			sum1 -= q1.front();
			q1.pop();
			answer++;
		}
		else if (sum1 < sum2) {
			q1.push(q2.front());
			sum1 += q2.front();
			sum2 -= q2.front();
			q2.pop();
			answer++;
		}
		else return answer;
	}

	return -1;
}