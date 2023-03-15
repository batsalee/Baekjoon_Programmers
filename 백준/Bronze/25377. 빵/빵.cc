#include <iostream>
#include <set>

int main()
{
	int TC;
	std::cin >> TC;

	int A, B;
	std::set<int> s;
	while (TC--) {
		std::cin >> A >> B;
		if (A <= B) s.insert(B);
	}

	std::cout << ( s.size() ? *(s.begin()) : -1 );

	return 0;
}