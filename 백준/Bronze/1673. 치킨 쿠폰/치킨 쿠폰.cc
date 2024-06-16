#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n, k;
	while (cin >> n >> k) {
		int result = 0;
		while (n >= k) {
			int order = n / k * k;
			result += order;
			n += n / k - order;
		}
		result += n;
		cout << result << '\n';
	}

	return 0;
}