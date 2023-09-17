#include <bits/stdc++.h>
using namespace std;

void solve()
{
	vector<double> temperature;
	double input;
	while (true) {
		cin >> input;
		if (input == 999) break;
		else temperature.push_back(input);
	}

	for (int i = 1; i < temperature.size(); i++) {
		cout.precision(2);
		cout << fixed;
		cout << temperature[i] - temperature[i - 1] << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}