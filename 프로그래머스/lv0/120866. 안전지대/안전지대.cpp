#include <vector>

int solution(std::vector<std::vector<int>> board)
{
	const int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	const int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	int N = board.size();
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (board[i][j] == 1) {
				for (int k = 0; k < 8; k++) {
					int x = i + dx[k];
					int y = j + dy[k];
					if (x < 0 || x >= N || y < 0 || y >= N) continue;
					if (board[x][y] == 0) board[x][y] = -1;
				}
			}
		}
	}

	int answer = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (board[i][j] == 0) answer++;
		}
	}

	return answer;
}