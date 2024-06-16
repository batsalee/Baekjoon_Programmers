#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> shops(n);
		for (int i = 0; i < n; i++) {
			cin >> shops[i];
		}
		cout << 2 * (*max_element(shops.begin(), shops.end()) - *min_element(shops.begin(), shops.end())) << '\n';
	}
	
	return 0;
}