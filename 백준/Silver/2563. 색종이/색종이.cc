#include <iostream>
#include <vector>

int main()
{
	std::vector<std::vector<int>> array(100, std::vector<int>(100,0));

	int result = 0;

	int how_many;
	std::cin >> how_many;
	for (int i = 0; i < how_many; i++)
	{
		int row, col;
		std::cin >> row >> col;
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (array[row + j][col + k] == 0)
				{
					array[row + j][col + k] = 1;
					result++;
				}
			}
		}
	}

	std::cout << result;
	
	return 0;
}