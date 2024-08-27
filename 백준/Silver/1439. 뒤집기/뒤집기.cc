#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	string S;
	cin >> S;

	int section[2] = { 0 };
	for (int i = 1; i < S.size(); i++) {
		if (S[i] != S[i - 1]) section[S[i - 1] - '0']++;
	}

	section[S.back() - '0']++;
	cout << min(section[0], section[1]);

	return 0;
}