#include <iostream>
#include <vector>

int main()
{
	int N, M; // 행렬 A의 크기 N * M
	std::cin >> N >> M;
	std::vector<std::vector<int>> A(N, std::vector<int>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			std::cin >> A[i][j];
		}
	}

	int K;
	std::cin >> M >> K;
	std::vector<std::vector<int>> B(M, std::vector<int>(K));
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			std::cin >> B[i][j];
		}
	}

	// 출력부
	int temp = 0;
	for (int n = 0; n < N; n++) {
		for (int k = 0; k < K; k++) {
			for (int m = 0; m < M; m++) {
				temp += A[n][m] * B[m][k];
			}
			std::cout << temp << ' ';
			temp = 0;
		}
		std::cout << '\n';
	}

	return 0;
}