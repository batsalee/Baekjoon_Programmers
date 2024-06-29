#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, P;	
	while (true) {
		cin >> N;
		if (N == 0) break;
		cin >> P;

		vector<int> result;
		if (P & 1) result.push_back(P + 1);
		else result.push_back(P - 1);

		result.push_back(N + 1 - P);
		result.push_back(N + 1 - result[0]);

		sort(result.begin(), result.end());
		for (int r : result) { cout << r << ' '; }
		cout << '\n';
	}

	return 0;
}