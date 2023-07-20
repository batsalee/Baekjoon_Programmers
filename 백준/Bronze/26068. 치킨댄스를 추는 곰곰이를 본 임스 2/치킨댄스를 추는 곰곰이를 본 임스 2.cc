#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, res = 0;
	cin >> N;
		
	string input;
	while (N--) {		
		cin >> input;
		if (stoi(input.substr(2)) <= 90) res++;		
	}

	cout << res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}