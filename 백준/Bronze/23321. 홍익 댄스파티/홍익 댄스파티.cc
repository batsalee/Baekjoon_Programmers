#include <bits/stdc++.h>
using namespace std;

string input[5];
int check(int i)
{
	for (int j = 0; j < 5; j++) {
		if (input[j][i] == 'm') return 0;
		if (input[j][i] == 'w') return 1;
	}
	return 2;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}

	for (int i = 0; i < input[0].size(); i++) {
		int c = check(i);
		if (c == 0) { // 도약준비
			input[0][i] = 'o';
			input[1][i] = 'w';
			input[2][i] = 'l';
			input[3][i] = 'n';
			input[4][i] = '.';
		}
		else if (c == 1) { // 도약중
			input[0][i] = '.';
			input[1][i] = 'o';
			input[2][i] = 'm';
			input[3][i] = 'l';
			input[4][i] = 'n';
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << input[i] << '\n';
	}
	
	return 0;
}