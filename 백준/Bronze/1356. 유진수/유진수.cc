#include <bits/stdc++.h>
using namespace std;

bool isSame(string s1, string s2) {
	int ret1 = 1, ret2 = 1;
	for (char& c : s1) {
		ret1 *= c - '0';
	}
	for (char& c : s2) {
		ret2 *= c - '0';
	}

	return (ret1 == ret2);
}

int main()
{
	string N;
	cin >> N;
	
	for (int i = 1; i < N.size(); i++) {
		if (isSame(N.substr(0, i), N.substr(i))) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
	return 0;
}