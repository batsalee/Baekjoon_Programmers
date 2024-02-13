#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();

	string input;
	getline(cin, input);

	cout << input.substr(N - 5, 5);

	return 0;
}