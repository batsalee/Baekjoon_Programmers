#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> order) {
	int count = 0;
	stack<int> sub;
		
	for (int i = 1; i <= order.size(); i++) {
		sub.push(i);
		while (sub.size() && sub.top() == order[count]) {
			sub.pop();
			count++;
		}
	}

	return count;
}