#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	cout << (char)('A' + (8 + N) % 12) << (6 + N) % 10;

	return 0;
}