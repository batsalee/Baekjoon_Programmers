#include <iostream>

int main()
{
	int h1, m1, s1, time1; // 출근 시, 분, 초
	int h2, m2, s2, time2; // 퇴근 시, 분, 초

	for (int i = 0; i < 3; i++) {
		std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
		time1 = h1 * 3600 + m1 * 60 + s1;
		time2 = h2 * 3600 + m2 * 60 + s2;

		int gap = time2 - time1;
		
		std::cout << gap / 3600 << ' ';
		gap %= 3600;

		std::cout << gap / 60 << ' ';
		gap %= 60;

		std::cout << gap << '\n';
	}

	return 0;
}