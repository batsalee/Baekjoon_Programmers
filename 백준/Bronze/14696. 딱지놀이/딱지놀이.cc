#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	int N;
	cin >> N;

	int count, input;

	while (N--) {
		array<int, 4> A{ 0 };
		cin >> count;
		while (count--) {
			cin >> input;
			A[4 - input]++;
		}
		array<int, 4> B{ 0 };
		cin >> count;
		while (count--) {
			cin >> input;
			B[4 - input]++;
		}

		if (A > B) cout << "A\n";
		else if (A < B) cout << "B\n";
		else if (A == B) cout << "D\n";
	}

	return 0;
}