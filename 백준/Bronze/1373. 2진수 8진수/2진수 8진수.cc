#include <bits/stdc++.h>
using namespace std;

char bin2oct(string p)
{
	int bit = stoi(p);
	int result = 0;

	for (int i = 0; bit >= 1; i++) {
		result += (bit % 10) * pow(2, i);
		bit /= 10;
	}

	return '0' + result;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	string input, part;
	cin >> input;

	if (input.size() % 3) {
		part = input.substr(0, input.size() % 3);
		cout << bin2oct(part);
	}

	for (int i = input.size() % 3; i < input.size(); i += 3) {
		part = input.substr(i, 3);
		cout << bin2oct(part);
	}

	return 0;
}