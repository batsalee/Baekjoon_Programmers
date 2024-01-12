#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

#define INF 2147483647

int distances[26][26];

void Floyd_Warshall(int nov)
{
	for (int k = 0; k < nov; k++) {
		for (int i = 0; i < nov; i++) {
			for (int j = 0; j < nov; j++) {
				distances[i][j] = min(distances[i][j], distances[i][k] + distances[k][j]);
			}
		}
	}
}

int main()
{
	sync;

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			if (i == j) distances[i][j] = 0;
			else distances[i][j] = INF / 2;
		}
	}

	int n;
	cin >> n;
	cin.ignore();

	string premise;
	while (n--) {
		getline(cin, premise);
		distances[premise.front() - 'a'][premise.back() - 'a'] = 1;
	}

	Floyd_Warshall(26);
	
	int m;
	cin >> m;
	cin.ignore();

	while (m--) {
		getline(cin, premise);
		if (distances[premise.front() - 'a'][premise.back() - 'a'] != INF / 2) cout << "T\n";
		else cout << "F\n";
	}
	
	return 0;
}