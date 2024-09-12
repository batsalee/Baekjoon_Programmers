#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long S;
	cin >> S;

	int N = 1;
	for (long long sum = 0; sum <= S; N++) {
		sum += N;
	}

	cout << N - 2;

	return 0;
}