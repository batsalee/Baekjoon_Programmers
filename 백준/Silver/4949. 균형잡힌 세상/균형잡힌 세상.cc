#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	while (true) {
		getline(cin, input);
		if (input == ".") break;
		
		if(input.back() == '.') input.pop_back(); // 점빼주기
	
		stack<char> s, poped;
		for (char& c : input) {
			s.push(c);
		}

		while (!s.empty()) {
			if (s.top() == ')') {
				poped.push(')');
			}
			else if (s.top() == '(') {
				if (poped.empty() || (poped.top() != ')')) break;
				else poped.pop();
			}
			else if (s.top() == ']') {
				poped.push(']');
			}
			else if (s.top() == '[') {
				if (poped.empty() || (poped.top() != ']')) break;
				else poped.pop();
			}
			s.pop();
		}
	
		cout << ( (s.empty() && poped.empty()) ? "yes\n" : "no\n" );
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}