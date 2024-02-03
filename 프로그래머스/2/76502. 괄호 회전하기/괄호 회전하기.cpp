#include <bits/stdc++.h>
using namespace std;

bool isProper(string& s) 
{
	stack<char> st;
	for (char& c : s) {
		if (c == '(' || c == '[' || c == '{') st.push(c);		
		else if (c == ')') {
			if (!st.empty() && st.top() == '(') st.pop();
			else return false;
		}
		else if (c == ']') {
			if (!st.empty() && st.top() == '[') st.pop();
			else return false;
		}
		else if (c == '}') {
			if (!st.empty() && st.top() == '{') st.pop();
			else return false;
		}
	}
	
	if (st.empty()) return true;
	else return false;
}

int solution(string s) 
{
	int answer = 0;

	for (int i = 0; i < s.size(); i++) {
		rotate(s.begin(), s.begin() + 1, s.end());
		if(isProper(s)) answer++;
	}

	return answer;
}