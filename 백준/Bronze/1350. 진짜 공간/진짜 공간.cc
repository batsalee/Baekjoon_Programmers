#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> fs(N);
	for (int i = 0; i < N; i++) {
		cin >> fs[i];
	}

	int cluster;
	cin >> cluster;

	long long result = 0;
	for (int i = 0; i < N; i++) {
		result += ((fs[i] / cluster) + (bool)(fs[i] % cluster)) * cluster;
	}
	
	cout << result;

	return 0;
}