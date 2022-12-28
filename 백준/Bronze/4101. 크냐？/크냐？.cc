#include <iostream>

int main()
{
    int num1, num2;

    while (true) {
        std::cin >> num1 >> num2;
        if (num1 == 0 && num2 == 0) break;
        else (num1 > num2) ? std::cout << "Yes\n" : std::cout << "No\n";
    }

    return 0;
}