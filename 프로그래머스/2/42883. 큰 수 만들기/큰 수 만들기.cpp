#include <bits/stdc++.h>
using namespace std;

string solution(string number, int k) {
	stack<char> s;
	int i;

	for (i = 0; i < number.size(); i++) {
		while (k && s.size() && s.top() < number[i]) {			
			s.pop(); 
			k--;
		}
		if (k == 0) break;
		s.push(number[i]);
	}
	
	string answer = "";
	while (s.size()) {
		answer.push_back(s.top());
		s.pop();
	}
	reverse(answer.begin(), answer.end());
	answer += number.substr(i);
	
	while (k--) {
		answer.pop_back();
	}

	return answer;
}