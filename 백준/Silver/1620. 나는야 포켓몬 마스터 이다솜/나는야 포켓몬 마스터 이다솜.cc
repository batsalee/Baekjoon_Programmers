#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int book_size, question_size;
	std::cin >> book_size >> question_size;

	std::string str;
	std::unordered_map<std::string, int> book_by_name;
	std::unordered_map<int, std::string> book_by_num;
	for (int i = 1; i <= book_size; i++) {
		std::cin >> str;
		book_by_name[str] = i;
		book_by_num[i] = str;
	}

	for (int i = 0; i < question_size; i++) {
		std::cin >> str;
		if (isdigit(*str.c_str())) std::cout << book_by_num[stoi(str)] << '\n';
		else std::cout << book_by_name[str] << '\n';		
	}

	return 0;
}