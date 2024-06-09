#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	string input;
	cin >> N >> input;

	int B = 0, S = 0, A = 0;
	for (char i : input) {
		if (i == 'B') B++;
		else if (i == 'S') S++;
		else if (i == 'A') A++;
	}

	int pop = max({ B, S, A });
	if (B == pop && S == pop && A == pop) cout << "SCU";
	else {
		if (B == pop) cout << 'B';
		if (S == pop) cout << 'S';
		if (A == pop) cout << 'A';
	}

	return 0;
}