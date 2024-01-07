#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int K;
	cin >> K;

	while (K--) {
		int P, M;
		cin >> P >> M;

		vector<int> participant(P + 1, 0);
		int count = 0;

		while (P--) {
			int seat;
			cin >> seat;
			if (participant[seat]) count++;
			else participant[seat] = 1;
		}

		cout << count << '\n';
	}

	return 0;
}