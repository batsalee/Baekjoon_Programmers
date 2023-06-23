#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int K;
	cin >> K;

	stack<int> s;
	int input;
	while (K--) {
		cin >> input;
		input ? s.push(input) : s.pop();
	}

	int result = 0;
	while (!s.empty()) {
		result += s.top();
		s.pop();
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}