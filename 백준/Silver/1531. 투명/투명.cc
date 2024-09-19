#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	int picture[101][101] = { 0 };
	int x1, y1, x2, y2, result = 0;
	while (N--) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i <= x2; i++) {
			for (int j = y1; j <= y2; j++) {
				picture[i][j]++;
				if (picture[i][j] == M + 1) result++;
			}
		}
	}

	cout << result;

	return 0;
}