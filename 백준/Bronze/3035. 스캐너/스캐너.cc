#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int R, C, ZR, ZC;
	cin >> R >> C >> ZR >> ZC;

	string input;
	while (R--) {
		cin >> input;
		for (int i = 0; i < ZR; i++) {
			for (auto& c : input) {
				cout << string(ZC, c);
			}
			cout << '\n';
		}
	}

	return 0;
}