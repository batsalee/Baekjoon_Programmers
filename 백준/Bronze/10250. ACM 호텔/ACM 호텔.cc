#include <iostream>
#include <string>

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	while (number_of_testcase--)
	{
		// 층, 한층에 방수, 몇번째 손님인지
		int height, width, input;
		std::cin >> height >> width >> input;

		int floor = (input % height) ? (input % height) : height;
		int room = (input % height) ? (input / height + 1) : (input / height);

		std::string result = "";
		result += std::to_string(floor);
		if (room < 10) result += '0';
		result += std::to_string(room);

		std::cout << result << std::endl;
	}
	return 0;
}