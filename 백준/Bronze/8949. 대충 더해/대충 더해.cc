#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int A, B;
	cin >> A >> B;

	int temp;
	string result = "";
	while (A || B) {
		temp = A % 10 + B % 10;
		result = to_string(temp) + result;
		A /= 10;
		B /= 10;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}