#include <string>
#include <algorithm>

std::string solution(std::string my_string, int num1, int num2) {
    
    std::swap(my_string[num1], my_string[num2]);
    
    return my_string;
}