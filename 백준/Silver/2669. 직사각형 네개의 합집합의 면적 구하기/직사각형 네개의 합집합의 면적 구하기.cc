#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool arr[101][101] = { false };
	int a, b, c, d, result = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a >> b >> c >> d;

		for (int j = a; j < c; j++) {
			for (int k = b; k < d; k++) {
				if (!arr[j][k]) {
					result++;
					arr[j][k] = true;
				}
			}
		}
	}

	cout << result;

	return 0;
}