#include <bits/stdc++.h>
using namespace std;

string sum(string s)
{
	int result = 0;
	for (char& c : s) {
		result += c - '0';
	}

	return to_string(result);
}

int main()
{
	string input;
	while (true) {
		cin >> input;
		if (input == "0") return 0;

		while (input.size() > 1) {
			input = sum(input);
		}

		cout << input << '\n';
	}
}