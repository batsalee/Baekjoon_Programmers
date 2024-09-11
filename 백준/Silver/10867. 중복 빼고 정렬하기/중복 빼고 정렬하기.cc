#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	set<int> s;
	int input;
	while (N--) {
		cin >> input;
		s.insert(input);
	}

	for (int i : s) {
		cout << i << ' ';
	}

	return 0;
}