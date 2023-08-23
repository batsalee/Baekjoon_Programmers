#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, number_of_student, number_of_apple, sum_of_mod = 0;
	cin >> N;

	while (N--) {
		cin >> number_of_student >> number_of_apple;
		sum_of_mod += (number_of_apple % number_of_student);
	}

	cout << sum_of_mod;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}