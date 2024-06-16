#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string word;
	cin >> word;

	int result = 0;
	for (char w : word) {
		if (isupper(w)) result += w - 'A' + 27;
		else result += w - 'a' + 1;
	}

	for (int i = 2; i <= sqrt(result); i++) {
		if (result % i == 0) {
			cout << "It is not a prime word.";
			return 0;
		}
	}

	cout << "It is a prime word.";
	return 0;
}