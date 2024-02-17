#include <string>
#include <algorithm>

std::string solution(std::string my_string) {
    reverse(my_string.begin(), my_string.end());
    return my_string;
}