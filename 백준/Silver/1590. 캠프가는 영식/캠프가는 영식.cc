#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int N, T;
	cin >> N >> T;

	vector<int> bus;
	int S, I, C;
	while (N--) {
		cin >> S >> I >> C;
		for (int i = 0; i < C; i++) {
			bus.push_back(S + I * i);
		}
	}

	sort(bus.begin(), bus.end());

	auto leave = lower_bound(bus.begin(), bus.end(), T);
	if (leave != bus.end()) cout << *leave - T;
	else cout << -1;

	return 0;
}