#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	int k, prev, now;
	while (M--) {
		prev = 2147483647;
		cin >> k;
		while (k--) {
			cin >> now;
			if (now > prev) {
				cout << "No";
				return 0;
			}
			prev = now;
		}
	}

	cout << "Yes";
	return 0;
}