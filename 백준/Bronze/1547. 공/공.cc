#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int M;
	cin >> M;

	vector<int> cup{ 1, 2, 3 };
	int X, Y;
	while (M--) {
		cin >> X >> Y;
		swap(cup[X - 1], cup[Y - 1]);
	}

	if (cup[0] == 1) cout << 1;
	else if (cup[1] == 1) cout << 2;
	else if (cup[2] == 1) cout << 3;

	return 0;
}