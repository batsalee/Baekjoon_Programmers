#include <iostream>
#include <vector>

int main()
{
	std::vector<std::vector<int>> array(9, std::vector<int>(9,0));

	int max_value = -1, max_row, max_col;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cin >> array[i][j];
			if (array[i][j] > max_value)
			{
				max_value = array[i][j];
				max_row = i + 1;
				max_col = j + 1;
			}
		}
	}

	std::cout << max_value << std::endl;
	std::cout << max_row << ' ' << max_col;

	return 0;
}