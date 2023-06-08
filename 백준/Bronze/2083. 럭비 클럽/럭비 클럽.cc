#include <iostream>

int main()
{
	std::string name;
	int age, weight;

	while (true) {
		std::cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0) break;

		if (age > 17 || weight >= 80) std::cout << name << " Senior" << '\n';
		else std::cout << name << " Junior" << '\n';
	}

	return 0;
}