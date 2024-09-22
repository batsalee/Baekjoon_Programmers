#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	string name;
	double height;
	while (true) {
		cin >> N;
		if (N == 0) return 0;

		double highest = 0;
		vector<pair<string, double>> v(N);
		for (int i = 0; i < N; i++) {
			cin >> name >> height;
			v[i] = { name, height };
			highest = max(highest, height);
		}
		
		for (int i = 0; i < N; i++) {
			if (v[i].second == highest) cout << v[i].first << ' ';
		}
		cout << '\n';
	}
}