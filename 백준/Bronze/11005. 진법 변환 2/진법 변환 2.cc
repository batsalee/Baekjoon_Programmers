#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, B;
	cin >> N >> B;

	string result = "";
	while (N) {
		int temp = N % B;
		if (temp >= 10) result = (char)('A' + temp - 10) + result;
		else result = to_string(temp) + result;

		N /= B;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}