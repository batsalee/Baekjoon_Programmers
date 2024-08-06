#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	map<char, double> discount_rate = {
		{'R', 0.55}, {'G', 0.7}, {'B', 0.8}, {'Y', 0.85}, {'O', 0.9}, {'W', 0.95}
	};

	int T;
	cin >> T;

	double cost;
	char color, coupon, is_cash;
	while (T--) {
		cin >> cost >> color >> coupon >> is_cash;

		cost *= discount_rate[color];
		if (coupon == 'C') cost *= 0.95;				
		if (is_cash == 'C') cost = round(cost * 10) / 10;

		cout << fixed;
		cout.precision(2);
		cout << '$' << cost << '\n';
	}

	return 0;
}