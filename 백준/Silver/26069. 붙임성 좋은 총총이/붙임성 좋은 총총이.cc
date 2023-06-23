#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	set<string> names;
	names.insert("ChongChong");

	int N;
	cin >> N;

	string name1, name2;
	while (N--) {
		cin >> name1 >> name2;

		if (names.find(name1) != names.end()) {
			names.insert(name2);
		}
		else if (names.find(name2) != names.end()) {
			names.insert(name1);
		}
	}

	cout << names.size();

	return 0;
}