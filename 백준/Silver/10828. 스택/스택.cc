#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	stack<int> s;
	string input;
	int num;
	while (N--) {
		cin >> input;
		
		if (input == "push") {
			cin >> num;
			s.push(num);
		}
		else if (input == "pop") {
			if (s.empty()) cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (input == "size") {
			cout << s.size() << '\n';
		}
		else if (input == "empty") {
			cout << (s.empty() ? 1 : 0) << '\n';
		}
		else if (input == "top") {
			if (s.empty()) cout << -1 << '\n';
			else cout << s.top() << '\n';
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}