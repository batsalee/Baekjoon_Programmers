#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int N;
	cin >> N;
	vector<pair<int, int>> coo(N);

	int A, B;
	cin >> A >> B;

	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		coo[i] = { x, y };
	}

	sort(coo.begin(), coo.end());

	int result = 0;
	for (int i = 0; i < N; i++) {
		int r = upper_bound(coo.begin(), coo.end(), make_pair(coo[i].first + A, coo[i].second)) - lower_bound(coo.begin(), coo.end(), make_pair(coo[i].first + A, coo[i].second));
		int t = upper_bound(coo.begin(), coo.end(), make_pair(coo[i].first, coo[i].second + B)) - lower_bound(coo.begin(), coo.end(), make_pair(coo[i].first, coo[i].second + B));
		int tr = upper_bound(coo.begin(), coo.end(), make_pair(coo[i].first + A, coo[i].second + B)) - lower_bound(coo.begin(), coo.end(), make_pair(coo[i].first + A, coo[i].second + B));

		if (r && t && tr) result++;	
	}

	cout << result;

	return 0;
}