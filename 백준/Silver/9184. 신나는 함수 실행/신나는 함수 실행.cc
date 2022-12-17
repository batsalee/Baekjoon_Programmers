#include <iostream>

int result[21][21][21];

int w(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);

	int temp1, temp2, temp3, temp4;
	if (a < b && b < c) {
		if (result[a][b][c - 1]) temp1 = result[a][b][c - 1];
		else temp1 = w(a, b, c - 1);
		if (result[a][b - 1][c - 1]) temp2 = result[a][b - 1][c - 1];
		else temp2 = w(a, b - 1, c - 1);
		if (result[a][b - 1][c]) temp3 = result[a][b - 1][c];
		else temp3 = w(a, b - 1, c);
		result[a][b][c] = temp1 + temp2 - temp3;
		return result[a][b][c];
	}

	if (result[a - 1][b][c]) temp1 = result[a - 1][b][c];
	else temp1 = w(a - 1, b, c);
	if (result[a - 1][b - 1][c]) temp2 = result[a - 1][b - 1][c];
	else temp2 = w(a - 1, b - 1, c);
	if (result[a - 1][b][c - 1]) temp3 = result[a - 1][b][c - 1];
	else temp3 = w(a - 1, b, c - 1);
	if (result[a - 1][b - 1][c - 1]) temp4 = result[a - 1][b - 1][c - 1];
	else temp4 = w(a - 1, b - 1, c - 1);
	result[a][b][c] = temp1 + temp2 + temp3 - temp4;
	return result[a][b][c];
}

int main()
{
	int a, b, c;
	while (true) {
		std::cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		std::cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
	}

	return 0;
}

/*
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
*/
