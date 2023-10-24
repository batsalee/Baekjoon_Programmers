#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	set<int> seats;
	int result = 0, num;
	while (N--) {
		cin >> num;
		if (seats.find(num) != seats.end()) result++;
		else seats.insert(num);
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