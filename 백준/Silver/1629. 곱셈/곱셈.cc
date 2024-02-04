#include <bits/stdc++.h>
using namespace std;

int A, B, C;
int recursion(int B)
{
	if (B == 0) return 1;

	long long temp = recursion(B / 2);
	temp = (temp * temp) % C;

	if (B % 2 == 0) return temp;
	else return (A * temp) % C;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> A >> B >> C;
	cout << recursion(B);
	
	return 0;
}