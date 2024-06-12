#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	
	int target = 0, count = 0;
	int input;
	while(N--) {
		cin >> input;
		if (input == target) {
			count++;
			target = (target + 1) % 3;
		}
	}

	cout << count;

	return 0;
}