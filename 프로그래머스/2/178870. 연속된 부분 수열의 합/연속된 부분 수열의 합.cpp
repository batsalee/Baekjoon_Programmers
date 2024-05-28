#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> sequence, int k) {
	vector<int> answer(2);
	int l = 0, r = 0, count = sequence.size(), sum = sequence[0];
	while (l <= r) {
		if (sum < k) {
			if (r < sequence.size() - 1) sum += sequence[++r];
			else break;
		}
		else if (sum >= k) sum -= sequence[l++];
		
		if (sum == k && r - l < count) {
			answer[0] = l;
			answer[1] = r;
			count = r - l;
		}
	}
	
	return answer;
}