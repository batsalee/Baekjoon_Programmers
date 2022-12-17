#include <iostream>

int result[21][21][21];

int w(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20) return result[20][20][20];
	return result[a][b][c];
}

int main()
{
	for (int i = 0; i <= 20; i++) {
		for (int j = 0; j <= 20; j++) {
			for (int k = 0; k <= 20; k++) {
				if (i == 0 || j == 0 || k == 0) result[i][j][k] = 1;
				else if (i < j && j < k) result[i][j][k] = result[i][j][k - 1] + result[i][j - 1][k - 1] - result[i][j - 1][k];
				else result[i][j][k] = result[i - 1][j][k] + result[i - 1][j - 1][k] + result[i - 1][j][k - 1] - result[i - 1][j - 1][k - 1];
			}
		}
	}

	int a, b, c;
	while (true) {
		std::cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		std::cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}

	return 0;
}