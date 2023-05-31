#include <iostream>
#include <numeric>

int main() {
	int numerator1, denominator1;
	int numerator2, denominator2;
	std::cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;

	// 맞추기
	int lcm = std::lcm(denominator1, denominator2);
	numerator1 *= lcm / denominator1;
	numerator2 *= lcm / denominator2;

	// 더하기
	int res_nu, res_de;
	res_nu = numerator1 + numerator2;
	res_de = lcm;

	// 약분
	int gcd = std::gcd(res_nu, res_de);
	res_nu /= gcd;
	res_de /= gcd;

	std::cout << res_nu << ' ' << res_de;

	return 0;
}