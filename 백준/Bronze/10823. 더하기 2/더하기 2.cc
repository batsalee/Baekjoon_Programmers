#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	long long result = 0;
	string temp = "";
	char c;
	while (cin >> c) {
		if (c != ',') temp.push_back(c);
		else {
			result += stoi(temp);
			temp = "";
		}
	}
	cout << result + stoi(temp);

	return 0;
}