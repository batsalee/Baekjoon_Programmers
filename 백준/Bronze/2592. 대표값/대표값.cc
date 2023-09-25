#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int input, sum = 0;
	map<int, int> frequency;

	for (int i = 0; i < 10; i++) {
		cin >> input;
		
		sum += input;
		frequency[input]++;
	}

	int mode, count = 0;
	for (auto itr = frequency.begin(); itr != frequency.end(); itr++) {
		if (itr->second > count) {
			mode = itr->first;
			count = itr->second;
		}
	}

	cout << sum / 10 << '\n' << mode;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}