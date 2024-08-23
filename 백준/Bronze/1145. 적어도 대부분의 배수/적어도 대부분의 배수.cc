#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	int input[5];
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}

	int result = 2147483647;
	for (int i = 0; i <= 2; i++) {
		for (int j = i + 1; j <= 3; j++) {
			for (int k = j + 1; k <= 4; k++) {
				result = min(result, lcm(lcm(input[i], input[j]), input[k]));
			}
		}
	}

	cout << result;

	return 0;
}