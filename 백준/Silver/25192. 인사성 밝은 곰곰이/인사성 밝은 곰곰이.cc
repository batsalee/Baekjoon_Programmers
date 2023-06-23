#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	cin >> N;

	string input;
	set<string> names;
	int count = 0;
	while (N--) {
		cin >> input;
		if (input == "ENTER") {
			count += names.size();
			names.clear();
		}
		else {
			names.insert(input);
		}
	}

	count += names.size();
	cout << count;

	return 0;
}