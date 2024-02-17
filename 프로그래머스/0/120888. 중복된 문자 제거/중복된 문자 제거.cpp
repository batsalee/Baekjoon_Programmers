#include <string>

std::string solution(std::string my_string) {
    std::string answer = "";
    
    for(const char& c : my_string) {
        if(answer.find(c) == std::string::npos)
            answer += c;
    }
    
    return answer;
}