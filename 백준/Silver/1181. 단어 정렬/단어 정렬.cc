#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int test_case;
	std::cin >> test_case;

	std::vector<std::string> sentences(test_case);

	for (int i = 0; i < test_case; i++) {
		std::cin >> sentences[i];
	}

	sort(sentences.begin(), sentences.end(), 
		[](std::string a, std::string b) 
		{
			if (a.length() == b.length()) return a < b;
			return a.length() < b.length(); 
		}
		);		

	for (int i = 0; i < sentences.size(); i++) {
		if (i && sentences[i] == sentences[i - 1]) continue;
		std::cout << sentences[i] << '\n';
	}

	return 0;
}