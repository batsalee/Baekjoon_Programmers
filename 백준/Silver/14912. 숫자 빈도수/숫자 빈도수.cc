#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, d;
	cin >> n >> d;

	int result = 0, now;
	for (int i = 1; i <= n; i++) {
		now = i;
		while (now) {
			if (now % 10 == d) result++;
			now /= 10;
		}
	}

	cout << result;

	return 0;
}