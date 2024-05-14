#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int A, B, C;
	cin >> A >> B >> C;

	int mul[7];
	mul[0] = A * B * C;
	mul[1] = A * B;
	mul[2] = A * C;
	mul[3] = B * C;
	mul[4] = A;
	mul[5] = B;
	mul[6] = C;

	int result = -1;
	for (int i = 0; i < 7; i++) {
		if (mul[i] & 1) {
			cout << mul[i];
			return 0;
		}
	}

	cout << mul[0];
	return 0;
}