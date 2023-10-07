#include <bits/stdc++.h>
using namespace std;

void solve()
{
	char input;
	int score = 0;	
	for (int i = 0; i < 8 * 8; i++) {
		cin >> input;

		if (input == 'Q') score += 9;
		else if (input == 'q') score -= 9;
		else if (input == 'R') score += 5;
		else if (input == 'r') score -= 5;
		else if (input == 'B') score += 3;
		else if (input == 'b') score -= 3;
		else if (input == 'N') score += 3;
		else if (input == 'n') score -= 3;
		else if (input == 'P') score += 1;
		else if (input == 'p') score -= 1;
	}

	cout << score;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}