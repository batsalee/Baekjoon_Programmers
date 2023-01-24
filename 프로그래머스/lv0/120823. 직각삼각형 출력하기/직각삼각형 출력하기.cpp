#include <iostream>

int main(void) 
{
    int input;
    std::cin >> input;
    
    for(int i = 1; i <= input; i++) {
        for(int j=0; j<i; j++) {
            std::cout << '*';
        }    
        std::cout << '\n';
    }
    
    return 0;
}