#include <string>

std::string solution(std::string my_string, int n) {
    std::string answer = "";
    
    for(const char& c : my_string) {        
        answer += std::string(n, c);
    }
    
    return answer;
}