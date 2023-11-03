#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	int width, height, sum = 0;
	while (N--) {
		cin >> width >> height;
		if (width == 136) sum += 1000;
		else if (width == 142) sum += 5000;
		else if (width == 148) sum += 10000;
		else if (width == 154) sum += 50000;
	}

	cout << sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}