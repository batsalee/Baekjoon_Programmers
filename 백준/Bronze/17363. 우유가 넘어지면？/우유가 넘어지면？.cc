#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int N, M;
	cin >> N >> M;

	vector<string> picture;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		picture.push_back(input);
	}

	vector<vector<char>> result(M, vector<char>(N));
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			char c = picture[j][M - 1 - i];

			if (c == '.') c = '.';
			else if (c == 'o') c = 'o';
			else if (c == '-') c = '|';
			else if (c == '|') c = '-';
			else if (c == '/') c = '\\';
			else if (c == '\\') c = '/';
			else if (c == '^') c = '<';
			else if (c == '<') c = 'v';
			else if (c == 'v') c = '>';
			else if (c == '>') c = '^';

			result[i][j] = c;
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << result[i][j];
		}
		cout << '\n';
	}

	return 0;
}