#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string target;
	cin >> target;

	int N;
	cin >> N;

	vector<string> rings(N);
	int result = 0;
	for (int i = 0; i < N; i++) {
		cin >> rings[i];
		rings[i] += rings[i].substr(0, target.size() - 1);
		if (search(rings[i].begin(), rings[i].end(), target.begin(), target.end()) != rings[i].end()) result++;
	}

	cout << result;

	return 0;
}