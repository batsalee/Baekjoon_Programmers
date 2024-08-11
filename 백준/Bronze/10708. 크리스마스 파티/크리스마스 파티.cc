#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	int N, M;
	cin >> N >> M;

	vector<int> target(M);
	for (int i = 0; i < M; i++) {
		cin >> target[i];
	}

	vector<int> score(N, 0);
	for (int i = 0; i < M; i++) {
		vector<int> choice(N, 0);
		for (int j = 0; j < N; j++) {
			cin >> choice[j];
			if (target[i] == choice[j]) score[j]++;
			else score[target[i] - 1]++;
		}
	}

	for (int i = 0; i < N; i++) { 
		cout << score[i] << '\n'; 
	}

	return 0;
}