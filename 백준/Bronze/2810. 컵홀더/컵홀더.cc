#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, H = 2;
	cin >> N;

	char input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		H += (input == 'S' ? 2 : 1);
	}
	cout << min(N, H / 2);

	return 0;
}