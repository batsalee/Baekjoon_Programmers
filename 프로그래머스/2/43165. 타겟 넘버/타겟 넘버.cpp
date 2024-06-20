#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers, int target) 
{
	queue<pair<int, int>> q; // index, sum
	q.push({ 0, -1 * numbers.front() });
	q.push({ 0, numbers.front() });

	int answer = 0;
	while (q.size()) {
		int index = q.front().first;
		int sum = q.front().second;
		q.pop();

		if (index == numbers.size() - 1) {
			if (sum == target) answer++;
			continue;
		}

		int next_index = index + 1;
		int next_add_sum = sum + numbers[next_index];
		int next_minus_sum = sum - numbers[next_index];
		
		q.push({ next_index, next_add_sum });
		q.push({ next_index, next_minus_sum });				
	}	

	return answer;
}