#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	double A, B, C;
	cin >> A >> B >> C;
	cout << max(int(A * B / C), int(A / B * C));

	return 0;
}