#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	string X, Y;
	cin >> X >> Y;

	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());

	int sum = stoi(X) + stoi(Y);
	string sum_str = to_string(sum);
	reverse(sum_str.begin(), sum_str.end());

	cout << stoi(sum_str);

	return 0;
}