#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	string BG, mom, dad;
	for (int i = 1; i <= T; i++) {
		cin >> BG >> mom >> dad;

		int mom_inch = stoi(mom) * 12 + stoi(mom.substr(2));
		int dad_inch = stoi(dad) * 12 + stoi(dad.substr(2));
		
		int baby_inch = mom_inch + dad_inch;
		(BG == "B") ? baby_inch += 5 : baby_inch -= 5;
		
		int min_baby_inch = ceil(baby_inch / 2.0) - 4;
		int max_baby_inch = floor(baby_inch / 2.0) + 4;

		cout << "Case #" << i << ": " << min_baby_inch / 12 << '\'' << min_baby_inch % 12
			<< "\" to " << max_baby_inch / 12 << '\'' << max_baby_inch % 12 << "\"\n";
	}

	return 0;
}