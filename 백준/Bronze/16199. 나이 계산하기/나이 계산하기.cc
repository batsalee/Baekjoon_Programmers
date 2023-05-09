#include <iostream>

int main()
{
	int birth_y, birth_m, birth_d;
	std::cin >> birth_y >> birth_m >> birth_d;

	int now_y, now_m, now_d;
	std::cin >> now_y >> now_m >> now_d;

	// 만 나이, 세는 나이, 연 나이
	int global_age, count_age, year_age;

	global_age = now_y - birth_y - 1;
	if (now_m > birth_m) global_age++;
	else if (now_m == birth_m && now_d >= birth_d) global_age++;

	count_age = now_y - birth_y + 1;

	year_age = now_y - birth_y;

	std::cout << global_age << '\n' << count_age << '\n' << year_age;

	return 0;
}