#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		string input, rev;
		cin >> input;
		rev = input;
		reverse(rev.begin(), rev.end());

		string sum, rev_sum;
		sum = to_string(stoi(input) + stoi(rev));
		rev_sum = sum;
		reverse(rev_sum.begin(), rev_sum.end());		

		cout << (sum == rev_sum ? "YES\n" : "NO\n");
	}

	return 0;
}