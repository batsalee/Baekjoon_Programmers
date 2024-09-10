#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<string> input(N), inc(N), dec(N);
	for (int i = 0; i < N; i++) {
		cin >> input[i];
		inc[i] = input[i];
		dec[i] = input[i];
	}

	sort(inc.begin(), inc.end());
	sort(dec.begin(), dec.end(), greater());

	if (input == inc) cout << "INCREASING";
	else if (input == dec) cout << "DECREASING";
	else cout << "NEITHER";

	return 0;
}