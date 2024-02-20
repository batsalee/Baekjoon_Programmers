#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int D, H, W;
	cin >> D >> H >> W;

	double ratio = D / sqrt(pow(H, 2) + pow(W, 2));
	cout << floor(H * ratio) << ' ' << floor(W * ratio);

	return 0;
}