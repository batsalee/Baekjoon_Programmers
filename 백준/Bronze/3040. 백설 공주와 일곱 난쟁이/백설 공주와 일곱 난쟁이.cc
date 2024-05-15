#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int input[9], sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> input[i];
		sum += input[i];
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j) continue;
			if (sum - input[i] - input[j] == 100) {
				input[j] = 0; input[i] = 0;

				for (int k = 0; k < 9; k++) {
					if (input[k] != 0) cout << input[k] << '\n';
				}

				return 0;
			}
		}
	}
}