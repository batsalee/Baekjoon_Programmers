#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, K;
	cin >> N >> K;
	cout << (K >> (N - 1));

	return 0;
}