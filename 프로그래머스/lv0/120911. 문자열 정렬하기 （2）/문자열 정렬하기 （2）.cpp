#include <string>
#include <algorithm>

std::string solution(std::string my_string) {
    transform(my_string.begin(), my_string.end(), my_string.begin(), ::tolower);
    sort(my_string.begin(), my_string.end());
    return my_string;
}