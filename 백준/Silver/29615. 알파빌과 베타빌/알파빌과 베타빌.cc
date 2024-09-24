#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> line(N);
	for (int i = 0; i < N; i++) {
		cin >> line[i];
	}

	set<int> friends;
	int input;
	for (int i = 0; i < M; i++) {
		cin >> input;
		friends.insert(input);
	}
	
	int result = 0;
	for (int i = 0; i < M; i++) {
		if (friends.find(line[i]) == friends.end()) result++;
	}

	cout << result;

	return 0;
}