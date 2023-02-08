#include <iostream>

int profit_ps[301][301];

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	std::cin >> N;

	int input, max = -1000;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			std::cin >> input;
			profit_ps[i][j] = input + profit_ps[i - 1][j] + profit_ps[i][j - 1] - profit_ps[i - 1][j - 1];

			if (input > max) max = input;
		}
	}
	// ps 잘 들어갔고

	// 1*1 단위의 최댓값이 지금 max변수에 들어있음
	// 2*2 단위부터 시작해서 N*N단위까지 부분합 확인해서 max 갱신 계속 해나가기

	int check;
	for (int i = 2; i <= N; i++) {
		for (int j = i; j <= N; j++) {
			for (int k = i; k <= N; k++) {
				check = profit_ps[j][k] - profit_ps[j - i][k] - profit_ps[j][k - i] + profit_ps[j-i][k-i];
				if (check > max) max = check;
			}
		}
	}

	std::cout << max;

	return 0;
}