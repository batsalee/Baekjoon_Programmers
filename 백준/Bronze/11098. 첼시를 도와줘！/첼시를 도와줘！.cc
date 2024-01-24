#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int n;
	cin >> n;

	while (n--) {
		int p;
		cin >> p;

		int expen = 0;
		string expen_name;
		while (p--) {
			int price;
			string name;
			cin >> price >> name;

			if (price > expen) {
				expen = price;
				expen_name = name;
			}
		}

		cout << expen_name << '\n';
	}

	return 0;
}