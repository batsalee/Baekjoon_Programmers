#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int N;
	cin >> N;

	set<int> s;
	int input;
	while (N--) {
		cin >> input;
		s.insert(input);
	}

	int M;
	cin >> M;
	while (M--) {
		cin >> input;
		if (s.find(input) != s.end()) cout << 1 << '\n';
		else cout << 0 << '\n';
	}

	return 0;
}