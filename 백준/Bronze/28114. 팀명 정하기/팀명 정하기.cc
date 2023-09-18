#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int Y[3];
	pair<int, string> PS[3];

	int temp;
	string tempS;
	for (int i = 0; i < 3; i++) {
		cin >> temp >> Y[i] >> tempS;
		PS[i].first = temp;
		PS[i].second = tempS;
	}

	sort(Y, Y + 3);
	cout << Y[0] % 100 << Y[1] % 100 << Y[2] % 100 << '\n';

	sort(PS, PS + 3, greater<>());
	cout << PS[0].second[0] << PS[1].second[0] << PS[2].second[0];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}