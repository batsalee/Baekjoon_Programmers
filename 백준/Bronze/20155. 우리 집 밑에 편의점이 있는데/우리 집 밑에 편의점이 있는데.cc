#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> convenience(M + 1, 0);
	int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		convenience[input]++;
	}

	cout << *max_element(convenience.begin(), convenience.end());
	
	return 0;
}