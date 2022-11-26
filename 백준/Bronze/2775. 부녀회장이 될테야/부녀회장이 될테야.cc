#include <iostream>
#include <vector>

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	while (number_of_testcase--)
	{
		int floor, room;
		std::cin >> floor >> room;

		std::vector<int> under_floor = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
		std::vector<int> now_floor(room, 0);

		for (int i = 0; i < floor; i++)
		{
			for (int j = 0; j < room; j++)
			{
				for (int k = 0; k <= j; k++)
				{
					now_floor[j] += under_floor[k];
				}
			}
			under_floor = now_floor;
			now_floor.assign(room, 0);
		}
		std::cout << under_floor[room - 1] << std::endl;
	}

	return 0;
}