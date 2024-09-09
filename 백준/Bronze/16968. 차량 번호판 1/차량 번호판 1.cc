#include <bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	cin >> input;

	int result = (input[0] == 'd' ? 10 : 26);
	for (int i = 1; i < input.size(); i++) {
		if (input[i] == 'd') result *= (input[i - 1] == 'd' ? 9 : 10);
		else result *= (input[i - 1] == 'c' ? 25 : 26);
	}
	cout << result;

	return 0;
}
