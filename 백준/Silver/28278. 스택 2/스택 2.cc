#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	
	stack<int> s;
	int input, X;
	while (N--) {
		cin >> input;
		
		if (input == 1) {
			cin >> X;
			s.push(X);
		}
		else if (input == 2) {
			if (s.empty()) cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (input == 3) {
			cout << s.size() << '\n';
		}
		else if (input == 4) {
			cout << s.empty() << '\n';
		}
		else if (input == 5) {
			if (s.empty()) cout << -1 << '\n';
			else cout << s.top() << '\n';
		}
	}

	return 0;
}