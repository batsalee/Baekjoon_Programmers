#include <string>

std::string solution(int age) {
    std::string answer = "";
    std::string temp = std::to_string(age);
    
    for(auto c : temp) {
        answer += c + ('a'-'0');
    }
    
    return answer;
}