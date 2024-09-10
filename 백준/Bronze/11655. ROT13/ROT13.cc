#include <bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	for (auto& c : input) {
		cout << (isalpha(c) ? static_cast<char>(isupper(c) ? c + 13 > 'Z' ? c - 13 : c + 13 : c + 13 > 'z' ? c - 13 : c + 13) : c);
	}

	return 0;
}