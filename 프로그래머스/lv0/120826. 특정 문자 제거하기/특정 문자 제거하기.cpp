#include <string>
#include <algorithm>

std::string solution(std::string my_string, std::string letter) {
    
    my_string.erase(
        remove(my_string.begin(), my_string.end(), letter[0]),
        my_string.end());
    
    return my_string;
}