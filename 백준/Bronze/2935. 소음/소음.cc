#include <bits/stdc++.h>
using namespace std;

int main()
{
	string input1, input2;
	char c;
	cin >> input1 >> c >> input2;

	if (c == '*') cout << 1 << string(input1.size() - 1, '0') << string(input2.size() - 1, '0');
	else if (c == '+') {
		if (input1.size() < input2.size()) swap(input1, input2);
		
		if (input1.size() == input2.size()) input1[0] = '2';
		else input1[input1.size() - input2.size()] = '1';
		cout << input1;
	}

	return 0;
}