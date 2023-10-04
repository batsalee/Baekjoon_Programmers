#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int result;
	cin >> result;

	char cal;
	int input;
	while (true) {
		cin >> cal;
		if (cal == '=') break;
		cin >> input;

		switch (cal) {
		case '+':
			result += input;
			break;
		case '-':
			result -= input;
			break;
		case '*':
			result *= input;
			break;
		case '/':
			result /= input;
			break;
		}
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