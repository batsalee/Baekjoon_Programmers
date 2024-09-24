#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string input;
	cin >> input;
	
	int result = 0;
	bool minus = false;
	string temp = "";
	for (char& c : input) {
		if (c == '-') {
			if (minus) result -= stoi(temp);
			else result += stoi(temp);
			minus = true;
			temp = "";
		}
		else if (c == '+') {
			if (minus) result -= stoi(temp);
			else result += stoi(temp);
			temp = "";
		}
		else temp.push_back(c);
	}
	
	if (minus) result -= stoi(temp);
	else result += stoi(temp);

	cout << result;

	return 0;
}