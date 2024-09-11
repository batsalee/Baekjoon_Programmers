#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	
	bool arr[2001] = { false };
	int input;
	while (N--) {
		cin >> input;
		arr[input + 1000] = true;
	}

	for (int i = 0; i < 2001; i++) {
		if (arr[i]) cout << i - 1000 << ' ';
	}	

	return 0;
}