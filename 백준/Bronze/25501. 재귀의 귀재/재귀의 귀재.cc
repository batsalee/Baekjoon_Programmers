#include <iostream>
#include <cstring>

int count_recursion;

int recursion(const char* s, int l, int r) {
	count_recursion++;

	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}

int main()
{
	int test_case;
	std::cin >> test_case;

	char letter[1001];
	while (test_case--) {
		count_recursion = 0;
		std::cin >> letter;
		std::cout << isPalindrome(letter) << ' ' << count_recursion << std::endl;
	}
}