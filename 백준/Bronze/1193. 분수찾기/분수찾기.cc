#include <iostream>

int main()
{
	int input;
	std::cin >> input;

	bool righten_flag = true;
	int row = 1, col = 1;

	while (--input)
	{
		if (righten_flag)
		{
			if (row == 1)
			{
				col++;
				righten_flag = false;
			}
			else
			{
				row--;
				col++;
			}
		}
		else if (!righten_flag)
		{
			if (col == 1)
			{
				row++;
				righten_flag = true;
			}
			else
			{
				row++;
				col--;
			}
		}
	}

	std::cout << row << '/' << col;

	return 0;
}