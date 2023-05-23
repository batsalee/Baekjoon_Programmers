#include <iostream>
#include <string>
#include <vector>

char white_board[8][9] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

char black_board[8][9] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

int main() {
	int N, M, min = 9999, diff = 0;
	std::cin >> N >> M;
	std::vector<std::string> input(N);

	for (int i = 0; i < N; i++) { // 입력받기
		std::cin >> input[i];
	}

	std::string temp;
	std::vector<std::string> temp_vec;
	for (int k = 0; k <= N - 8; k++) {
		for (int i = 0; i <= M - 8; i++) {
			for (int j = k; j < 8 + k; j++) {
				temp = input[j].substr(i, 8);
				temp_vec.push_back(temp);
			}

			// 비교하기
			for (int m = 0; m < 8; m++) {
				for (int n = 0; n < 8; n++) {
					if (temp_vec[m][n] != white_board[m][n]) diff++;
				}
			}
			min = std::min(min, diff);
			diff = 0;

			for (int m = 0; m < 8; m++) {
				for (int n = 0; n < 8; n++) {
					if (temp_vec[m][n] != black_board[m][n]) diff++;
				}
			}			
			min = std::min(min, diff);
			diff = 0;

			temp_vec.resize(0);
		}
	}

	std::cout << min;

	return 0;
}