#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	std::string str1, str2;
	std::string temp1, temp2;
	while (number_of_testcase--) {
		std::cin >> str1 >> str2;

		temp1 = str1;
		temp2 = str2;
		sort(temp1.begin(), temp1.end());
		sort(temp2.begin(), temp2.end());

		if (temp1 == temp2) std::cout << str1 << " & " << str2 << " are anagrams.\n";
		else std::cout << str1 << " & " << str2 << " are NOT anagrams.\n";
	}

	return 0;
}