#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string N;
	cin >> N;

	int len = N.length();
	int l = 0, r = 0;
	for (int i = 0; i < len / 2; i++) {	l += N[i] - '0'; }
	for (int i = len / 2; i < len; i++) { r += N[i] - '0'; }

	if (l == r) cout << "LUCKY";
	else cout << "READY";

	return 0;
}