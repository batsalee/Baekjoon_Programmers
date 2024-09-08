#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> now(11, -1);
	int result = 0, num, pos;
	while (N--) {
		cin >> num >> pos;
		if (now[num] + pos == 1) result++;
		now[num] = pos;
	}

	cout << result;

	return 0;
}