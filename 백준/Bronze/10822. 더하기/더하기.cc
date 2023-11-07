#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string S;
	cin >> S;

	int sum = 0; string num;
	stringstream ss; ss.str(S);
	while (getline(ss, num, ',')) {
		sum += stoi(num);
	}

	cout << sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}