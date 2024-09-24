#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	int mini = 2147483647, maxi = 0, input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		mini = min(mini, input);
		maxi = max(maxi, input);
	}

	cout << 2 * (maxi - mini);

	return 0;
}