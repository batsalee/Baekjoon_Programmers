#include <bits/stdc++.h>
using namespace std;

int main()
{
	array<int, 5> input;
	for (int i = 0; i < input.size(); i++) {
		cin >> input[i];
	}

	for (int j = input.size() - 1; j >= 0; j--) {
		for (int i = 0; i < j; i++) {
			if (input[i] > input[i + 1]) {
				swap(input[i], input[i + 1]);
				for (int i : input) {
					cout << i << ' ';
				}
				cout << '\n';
			}
		}		
	}

	return 0;
}