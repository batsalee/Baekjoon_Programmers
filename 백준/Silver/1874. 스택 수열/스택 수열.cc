#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	stack<int> s;
	vector<char> v;
	int top;

	int i = 1;
	while (n--) {
		cin >> top;

		do {
			if (s.empty() || top > s.top()) {
				s.push(i++);
				v.push_back('+');
			}			
			else if (top < s.top()) {
				cout << "NO";
				return;
			}

			if (top == s.top()) {
				s.pop();
				v.push_back('-');
				break;
			}
		} while (true);
	}

	for (char& c : v) {
		cout << c << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}