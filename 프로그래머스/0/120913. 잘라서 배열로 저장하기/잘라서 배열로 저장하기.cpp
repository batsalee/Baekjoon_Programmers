#include <string>
#include <vector>

std::vector<std::string> solution(std::string my_str, int n) {
    std::vector<std::string> answer;

    for(int i = 0; i < my_str.length(); i += n) {        
        answer.push_back(my_str.substr(i, n));
    }
    return answer;
}