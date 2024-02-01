#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int T;
	cin >> T;
	cin.ignore();

	string input;
	while (T--) {
		getline(cin, input);

		stringstream ss;
		ss.str(input);

		string part, result = "";
		while (ss >> part) {
			reverse(part.begin(), part.end());
			result = result+ part + ' ';
		}

		cout << result << '\n';
	}

	return 0;
}