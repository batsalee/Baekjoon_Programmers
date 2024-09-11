#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> v(N + M);
	for (int i = 0; i < N + M; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());

	for (int i : v) { 
		cout << i << ' ';
	}

	return 0;
}