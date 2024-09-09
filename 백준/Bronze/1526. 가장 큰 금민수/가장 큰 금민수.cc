#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
	string temp = to_string(n);
	for (auto& c : temp) {
		if (c != '7' && c != '4') return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	while (true) {
		if (check(N)) break;
		else N--;
	}

	cout << N;

	return 0;
}