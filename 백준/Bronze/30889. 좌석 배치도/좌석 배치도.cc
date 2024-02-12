#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	char seat[10][20];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			seat[i][j] = '.';
		}
	}
	
	int N;
	cin >> N;

	string input;
	while (N--) {
		cin >> input;
		int x = input[0] - 'A';
		int y = stoi(input.substr(1)) - 1;
		seat[x][y] = 'o';
	}	
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			cout << seat[i][j];
		}
		cout << '\n';
	}

	return 0;
}